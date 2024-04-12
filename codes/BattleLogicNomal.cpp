void __fastcall BattleLogicNomal___ctor(BattleLogicNomal_o *this, const MethodInfo *method)
{
  struct BattleLogicTask_array *v3; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  BattleLogicTask_o *v10; // x20
  const MethodInfo *v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_42B3264 & 1) == 0 )
  {
    sub_B52984(&BattleLogicTask___TypeInfo);
    sub_B52984(&BattleLogicTask_TypeInfo);
    byte_42B3264 = 1;
  }
  v3 = (struct BattleLogicTask_array *)sub_B5299C(BattleLogicTask___TypeInfo, 0LL);
  this->fields.zeroTask = v3;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.zeroTask, (System_Int32_array **)v3, v4, v5, v6, v7, v8, v9);
  v10 = (BattleLogicTask_o *)sub_B52A54(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v10, v11);
  this->fields.tmpShiftTask = v10;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.tmpShiftTask,
    (System_Int32_array **)v10,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleLogicNomal__CheckDeadEnemy(BattleLogicNomal_o *this, const MethodInfo *method)
{
  struct BattleData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_B52A5C(this, method);
  return data->fields.isMultiTargetBattle && data->fields.justDeadTargetId != -1;
}


BattleActionData_o *__fastcall BattleLogicNomal__CreateCommandBattle(
        BattleLogicNomal_o *this,
        BattleLogicTask_o *task,
        BattleActionData_o **baseActionData,
        const MethodInfo *method)
{
  __int64 v7; // x23
  __int64 ActorId; // x0
  const MethodInfo *v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  BattleData_o *data; // x21
  System_Int32_array **ServantData; // x0
  BattleServantData_o **v18; // x24
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  BattleActionData_o *v25; // x22
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  BattleActionData_o **v32; // x21
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Int32_array **command; // x1
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  BattleActionData_o *v46; // x20
  const MethodInfo *v47; // x1
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_Int32_array **motionMessage; // x1
  const MethodInfo *v55; // x1
  struct BattleData_o *v56; // x8
  int32_t v57; // w22
  EventMissionProgressRequest_Argument_ProgressData_o *v58; // x25
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v59; // x20
  System_Collections_Generic_IEnumerable_TSource__o **v60; // x25
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v67; // x0
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o **v69; // x27
  System_Collections_Generic_IEnumerable_TSource__o *v70; // x20
  System_Func_int__BattleActionData_SideEffectData__o *v71; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v72; // x20
  BattleLogicNomal___c_c *v73; // x8
  struct BattleLogicNomal___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__20_9; // x22
  Il2CppObject *v76; // x24
  struct BattleLogicNomal___c_StaticFields *v77; // x0
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v84; // x20
  BattleLogicNomal___c_c *v85; // x0
  struct BattleLogicNomal___c_StaticFields *v86; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__20_0; // x22
  Il2CppObject *v88; // x24
  struct BattleLogicNomal___c_StaticFields *v89; // x0
  System_String_array **v90; // x2
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v96; // x24
  __int64 v97; // x9
  BuffList_c *v98; // x8
  BattleLogicNomal___c_c *v99; // x0
  System_Collections_Generic_IEnumerable_TSource__o *CommandCodeBuffHash; // x20
  struct BattleLogicNomal___c_StaticFields *v101; // x8
  System_Func_BuffList_TYPE__BuffList_TYPE__o *_9__20_2; // x25
  Il2CppObject *v103; // x22
  struct BattleLogicNomal___c_StaticFields *v104; // x0
  System_String_array **v105; // x2
  System_String_array **v106; // x3
  System_Boolean_array **v107; // x4
  System_Int32_array **v108; // x5
  System_Int32_array *v109; // x6
  System_Int32_array *v110; // x7
  struct BattleLogicNomal___c_StaticFields *v111; // x8
  System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *_9__20_3; // x22
  Il2CppObject *v113; // x26
  struct BattleLogicNomal___c_StaticFields *v114; // x0
  System_String_array **v115; // x2
  System_String_array **v116; // x3
  System_Boolean_array **v117; // x4
  System_Int32_array **v118; // x5
  System_Int32_array *v119; // x6
  System_Int32_array *v120; // x7
  System_Int32_array **v121; // x0
  System_String_array **v122; // x2
  System_String_array **v123; // x3
  System_Boolean_array **v124; // x4
  System_Int32_array **v125; // x5
  System_Int32_array *v126; // x6
  System_Int32_array *v127; // x7
  __int64 v128; // x8
  int64_t v129; // x20
  System_Action_WebClient__UploadValuesCompletedEventHandler__o *v130; // x22
  int64_t commandAssistId; // x20
  System_Action_WebClient__UploadValuesCompletedEventHandler__o *v132; // x22
  __int64 v133; // x8
  BattleServantData_o **v134; // x24
  BattleCommandData_o **v135; // x22
  System_String_array **v136; // x2
  System_String_array **v137; // x3
  System_Boolean_array **v138; // x4
  System_Int32_array **v139; // x5
  System_Int32_array *v140; // x6
  System_Int32_array *v141; // x7
  __int64 v142; // x20
  System_String_array **v143; // x2
  System_String_array **v144; // x3
  System_Boolean_array **v145; // x4
  System_Int32_array **v146; // x5
  System_Int32_array *v147; // x6
  System_Int32_array *v148; // x7
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v149; // x20
  System_String_array **v150; // x2
  System_String_array **v151; // x3
  System_Boolean_array **v152; // x4
  System_Int32_array **v153; // x5
  System_Int32_array *v154; // x6
  System_Int32_array *v155; // x7
  SkillLvMaster_o *MasterData_WarQuestSelectionMaster; // x26
  BattleLogicFunction_AttackSideEffectFunctionArgument_o *v157; // x23
  const MethodInfo *v158; // x5
  __int64 v159; // x9
  __int64 v160; // x8
  unsigned __int64 v161; // x27
  int v162; // w20
  int32_t v163; // w3
  System_Collections_Generic_List_BattleBuffData_BuffData__o *TargetCommandCodeBuffList; // x25
  __int64 v165; // x3
  __int64 v166; // x8
  __int64 v167; // x20
  unsigned __int64 v168; // x10
  int *v169; // x11
  __int64 v170; // x0
  __int64 v171; // x1
  __int64 v172; // x3
  __int64 v173; // x20
  __int64 v174; // x8
  unsigned __int64 v175; // x10
  int *v176; // x11
  __int64 v177; // x0
  __int64 v178; // x3
  __int64 v179; // x8
  unsigned __int64 v180; // x10
  int *v181; // x11
  __int64 v182; // x0
  System_Type_o *v183; // x1
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x1
  __int64 v185; // x8
  unsigned __int64 v186; // x10
  int *v187; // x11
  __int64 v188; // x0
  unsigned __int64 v189; // x10
  __int64 v190; // x0
  int v191; // w20
  int v192; // w8
  BuffList_ACTION_array *v193; // x22
  int v194; // w8
  __int64 v195; // x3
  __int64 v196; // x8
  __int64 v197; // x20
  unsigned __int64 v198; // x10
  int *v199; // x11
  __int64 v200; // x0
  __int64 v201; // x1
  __int64 v202; // x3
  __int64 v203; // x20
  __int64 v204; // x8
  unsigned __int64 v205; // x24
  BattleBuffData_BuffData_o *v206; // x28
  BattleLogicFunction_o *logicfunction; // x27
  BattleActionData_o *SideEffectActionData; // x0
  __int64 v209; // x1
  BattleBuffData_BuffData_array *AttackSideEffectBuffList_21147200; // x0
  __int64 v211; // x1
  __int64 v212; // x8
  unsigned __int64 v213; // x10
  int *v214; // x11
  __int64 v215; // x0
  __int64 v216; // x3
  __int64 v217; // x8
  unsigned __int64 v218; // x10
  int *v219; // x11
  __int64 v220; // x0
  __int64 v221; // x1
  BattleServantData_o *v222; // x3
  BattleBuffData_BuffData_array *v223; // x22
  __int64 v224; // x8
  unsigned __int64 v225; // x10
  int *v226; // x11
  __int64 v227; // x0
  __int64 v228; // x3
  __int64 v229; // x8
  __int64 v230; // x20
  unsigned __int64 v231; // x10
  int *v232; // x11
  __int64 v233; // x0
  __int64 v234; // x0
  __int64 v235; // x1
  __int64 v236; // x3
  __int64 v237; // x28
  BattleActionData_DamageData_o *v238; // x27
  __int64 v239; // x8
  unsigned __int64 v240; // x10
  int *v241; // x11
  __int64 v242; // x0
  __int64 v243; // x3
  __int64 v244; // x8
  unsigned __int64 v245; // x10
  int *v246; // x11
  __int64 v247; // x0
  __int64 v248; // x1
  BattleServantData_o *v249; // x25
  BattleLogic_o *logic; // x0
  BattleActionData_DamageData_o *Damagelist; // x0
  __int64 v252; // x1
  BattleActionData_DamageData_o *v253; // x22
  struct BattleBuffData_o *buffData; // x8
  BattleActionData_o *v255; // x20
  BattleActionData_o *v256; // x0
  _BOOL8 v257; // x0
  __int64 v258; // x1
  BattleActionData_DamageData_o *v259; // x1
  __int64 v260; // x8
  unsigned __int64 v261; // x10
  int *v262; // x11
  __int64 v263; // x0
  BattleActionData_o *v264; // x20
  BattleActionData_o *v265; // x20
  BattleActionData_o *v266; // x20
  struct BattleData_o *v267; // x8
  struct BattlePerformance_o *perf; // x9
  BattleActionData_o *v269; // x20
  const MethodInfo *v270; // x5
  __int64 v271; // x9
  BattleCommandData_o **v272; // x22
  __int64 v273; // x8
  unsigned __int64 v274; // x28
  char v275; // w20
  int32_t v276; // w3
  System_Collections_Generic_List_BattleBuffData_BuffData__o *v277; // x25
  __int64 v278; // x3
  __int64 v279; // x8
  __int64 v280; // x20
  unsigned __int64 v281; // x10
  int *v282; // x11
  __int64 v283; // x0
  __int64 v284; // x1
  __int64 v285; // x3
  __int64 v286; // x20
  __int64 v287; // x8
  unsigned __int64 v288; // x10
  int *v289; // x11
  __int64 v290; // x0
  __int64 v291; // x3
  __int64 v292; // x8
  unsigned __int64 v293; // x10
  int *v294; // x11
  __int64 v295; // x0
  System_Type_o *v296; // x1
  UnityEngine_Purchasing_IStoreExtension_o *v297; // x1
  __int64 v298; // x8
  unsigned __int64 v299; // x10
  int *v300; // x11
  __int64 v301; // x0
  unsigned __int64 v302; // x25
  __int64 v303; // x0
  int v304; // w20
  int v305; // w8
  BuffList_ACTION_array *v306; // x24
  int v307; // w8
  __int64 v308; // x3
  __int64 v309; // x8
  __int64 v310; // x20
  unsigned __int64 v311; // x10
  int *v312; // x11
  __int64 v313; // x0
  __int64 v314; // x1
  __int64 v315; // x3
  __int64 v316; // x20
  __int64 v317; // x8
  unsigned __int64 v318; // x27
  BattleLogicFunction_o *v319; // x0
  BattleBuffData_BuffData_array *v320; // x0
  __int64 v321; // x1
  __int64 v322; // x8
  unsigned __int64 v323; // x10
  int *v324; // x11
  __int64 v325; // x0
  __int64 v326; // x3
  __int64 v327; // x8
  unsigned __int64 v328; // x10
  int *v329; // x11
  __int64 v330; // x0
  __int64 v331; // x1
  BattleServantData_o *v332; // x3
  BattleBuffData_BuffData_array *v333; // x22
  __int64 v334; // x8
  unsigned __int64 v335; // x10
  int *v336; // x11
  __int64 v337; // x0
  __int64 v338; // x3
  __int64 v339; // x8
  __int64 v340; // x20
  unsigned __int64 v341; // x10
  int *v342; // x11
  __int64 v343; // x0
  __int64 v344; // x1
  __int64 v345; // x3
  __int64 v346; // x20
  __int64 v347; // x8
  unsigned __int64 v348; // x10
  int *v349; // x11
  __int64 v350; // x0
  __int64 v351; // x3
  __int64 v352; // x8
  unsigned __int64 v353; // x10
  int *v354; // x11
  __int64 v355; // x0
  __int64 v356; // x0
  __int64 v357; // x1
  __int64 v358; // x8
  unsigned __int64 v359; // x10
  int *v360; // x11
  __int64 v361; // x0
  _BOOL8 v362; // x0
  __int64 v363; // x1
  Il2CppObject *current; // x8
  _BYTE *monitor; // x9
  BattleData_o *v366; // x0
  __int64 v367; // x0
  __int64 v368; // x0
  const MethodInfo *v369; // [xsp+0h] [xbp-130h]
  int32_t AttackType; // [xsp+14h] [xbp-11Ch]
  __int64 *v371; // [xsp+18h] [xbp-118h]
  BattleLogicTask_o *v372; // [xsp+20h] [xbp-110h]
  __int64 *v373; // [xsp+28h] [xbp-108h]
  int32_t v374; // [xsp+34h] [xbp-FCh]
  unsigned __int64 v375; // [xsp+38h] [xbp-F8h]
  BattleServantData_o *optSvt; // [xsp+40h] [xbp-F0h]
  System_Collections_Generic_Dictionary_BuffList_TYPE__List_BattleBuffData_BuffData___o **v377; // [xsp+48h] [xbp-E8h]
  BattleBuffData_o *v378; // [xsp+50h] [xbp-E0h]
  System_Func_T__TResult__o *v379; // [xsp+58h] [xbp-D8h]
  __int64 v380; // [xsp+60h] [xbp-D0h]
  BuffList_ACTION_array *attackActs; // [xsp+68h] [xbp-C8h]
  BattleLogic_DamageProcessArgs_o *attackActsa; // [xsp+68h] [xbp-C8h]
  BattleServantData_o **v383; // [xsp+70h] [xbp-C0h]
  BattleCommandData_o **v384; // [xsp+78h] [xbp-B8h]
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *v385; // [xsp+80h] [xbp-B0h]
  System_Collections_Generic_List_Enumerator_T__o v386[2]; // [xsp+88h] [xbp-A8h] BYREF
  int v387; // [xsp+BCh] [xbp-74h]
  System_Collections_Generic_List_Enumerator_T__o v388; // [xsp+C0h] [xbp-70h] BYREF

  if ( (byte_42B3250 & 1) == 0 )
  {
    sub_B52984(&BuffList_ACTION___TypeInfo);
    sub_B52984(&Method_System_Action_BuffEntity__BattleBuffData_BuffData___ctor__);
    sub_B52984(&System_Action_BuffEntity__BattleBuffData_BuffData__TypeInfo);
    sub_B52984(&BattleLogicFunction_AttackSideEffectFunctionArgument_TypeInfo);
    sub_B52984(&BattleActionData_TypeInfo);
    sub_B52984(&BattleServantData___TypeInfo);
    sub_B52984(&bool___TypeInfo);
    sub_B52984(&BuffList_TypeInfo);
    sub_B52984(&BattleLogic_DamageProcessArgs_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_BattleServantData__BattleBuffData_CheckInvokeBuff__get_Item__);
    sub_B52984(&Method_System_Linq_Enumerable_Select_int__BattleServantData___);
    sub_B52984(&Method_System_Linq_Enumerable_ToDictionary_BattleServantData__BattleServantData__BattleBuffData_CheckInvokeBuff___);
    sub_B52984(&Method_System_Linq_Enumerable_ToDictionary_BuffList_TYPE__BuffList_TYPE__List_BattleBuffData_BuffData____);
    sub_B52984(&Method_System_Linq_Enumerable_ToList_int___);
    sub_B52984(&Method_System_Linq_Enumerable_Where_BattleServantData___);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__get_Current__);
    sub_B52984(&Method_System_Func_BattleServantData__BattleServantData__Invoke__);
    sub_B52984(&Method_System_Func_bool__IEnumerable_BattleServantData___Invoke__);
    sub_B52984(&Method_System_Func_bool__IEnumerable_BattleServantData____ctor__);
    sub_B52984(&Method_System_Func_BuffList_TYPE__BuffList_TYPE___ctor__);
    sub_B52984(&Method_System_Func_BattleServantData__BattleServantData___ctor__);
    sub_B52984(&Method_System_Func_BattleServantData__BattleBuffData_CheckInvokeBuff___ctor__);
    sub_B52984(&Method_System_Func_BuffList_TYPE__List_BattleBuffData_BuffData____ctor__);
    sub_B52984(&Method_System_Func_int__BattleServantData___ctor__);
    sub_B52984(&Method_System_Func_BattleServantData__bool___ctor__);
    sub_B52984(&System_Func_BattleServantData__bool__TypeInfo);
    sub_B52984(&System_Func_bool__IEnumerable_BattleServantData___TypeInfo);
    sub_B52984(&System_Func_BuffList_TYPE__BuffList_TYPE__TypeInfo);
    sub_B52984(&System_Func_BattleServantData__BattleBuffData_CheckInvokeBuff__TypeInfo);
    sub_B52984(&System_Func_BattleServantData__BattleServantData__TypeInfo);
    sub_B52984(&System_Func_int__BattleServantData__TypeInfo);
    sub_B52984(&System_Func_BuffList_TYPE__List_BattleBuffData_BuffData___TypeInfo);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_BattleServantData__AddRange__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleServantData__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_int__Remove__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleServantData___ctor__);
    sub_B52984(&System_Collections_Generic_List_BattleServantData__TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_BattleLogicNomal___c__CreateCommandBattle_b__20_0__);
    sub_B52984(&Method_BattleLogicNomal___c__CreateCommandBattle_b__20_2__);
    sub_B52984(&Method_BattleLogicNomal___c__CreateCommandBattle_b__20_3__);
    sub_B52984(&Method_BattleLogicNomal___c__CreateCommandBattle_b__20_9__);
    sub_B52984(&Method_BattleLogicNomal___c__DisplayClass20_0__CreateCommandBattle_b__1__);
    sub_B52984(&Method_BattleLogicNomal___c__DisplayClass20_0__CreateCommandBattle_b__4__);
    sub_B52984(&Method_BattleLogicNomal___c__DisplayClass20_0__CreateCommandBattle_b__5__);
    sub_B52984(&Method_BattleLogicNomal___c__DisplayClass20_0__CreateCommandBattle_b__6__);
    sub_B52984(&Method_BattleLogicNomal___c__DisplayClass20_0__CreateCommandBattle_b__7__);
    sub_B52984(&Method_BattleLogicNomal___c__DisplayClass20_0__CreateCommandBattle_b__8__);
    sub_B52984(&BattleLogicNomal___c__DisplayClass20_0_TypeInfo);
    sub_B52984(&BattleLogicNomal___c_TypeInfo);
    byte_42B3250 = 1;
  }
  memset(&v388, 0, sizeof(v388));
  v387 = 0;
  v7 = sub_B52A54(BattleLogicNomal___c__DisplayClass20_0_TypeInfo);
  BattleLogicNomal___c__DisplayClass20_0___ctor((BattleLogicNomal___c__DisplayClass20_0_o *)v7, 0LL);
  if ( !v7 )
    goto LABEL_397;
  *(_QWORD *)(v7 + 16) = this;
  sub_B52920((BattleServantConfConponent_o *)(v7 + 16), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  if ( !task )
    goto LABEL_397;
  data = this->fields.data;
  ActorId = BattleLogicTask__getActorId(task, v9);
  if ( !data )
    goto LABEL_397;
  ServantData = (System_Int32_array **)BattleData__getServantData(data, ActorId, 0LL);
  *(_QWORD *)(v7 + 24) = ServantData;
  v18 = (BattleServantData_o **)(v7 + 24);
  sub_B52920((BattleServantConfConponent_o *)(v7 + 24), ServantData, v19, v20, v21, v22, v23, v24);
  v25 = (BattleActionData_o *)sub_B52A54(BattleActionData_TypeInfo);
  BattleActionData___ctor(v25, 0LL);
  *baseActionData = v25;
  sub_B52920((BattleServantConfConponent_o *)baseActionData, (System_Int32_array **)v25, v26, v27, v28, v29, v30, v31);
  v32 = (BattleActionData_o **)(v7 + 48);
  *(_QWORD *)(v7 + 48) = v25;
  sub_B52920((BattleServantConfConponent_o *)(v7 + 48), (System_Int32_array **)v25, v33, v34, v35, v36, v37, v38);
  command = (System_Int32_array **)task->fields.command;
  *(_QWORD *)(v7 + 40) = command;
  sub_B52920((BattleServantConfConponent_o *)(v7 + 40), command, v40, v41, v42, v43, v44, v45);
  ActorId = (__int64)this->fields.data;
  if ( !ActorId )
    goto LABEL_397;
  BattleData__ResetWasAttackTargetId((BattleData_o *)ActorId, 0LL);
  ActorId = (__int64)this->fields.logic;
  if ( !ActorId )
    goto LABEL_397;
  BattleLogic__updateResultServant((BattleLogic_o *)ActorId, 0LL);
  v46 = *v32;
  ActorId = BattleLogicTask__getActorId(task, v47);
  if ( !v46 )
    goto LABEL_397;
  v46->fields.actorId = ActorId;
  ActorId = (__int64)*v32;
  v384 = (BattleCommandData_o **)(v7 + 40);
  if ( !*v32 )
    goto LABEL_397;
  motionMessage = (System_Int32_array **)task->fields.motionMessage;
  *(_QWORD *)(ActorId + 128) = motionMessage;
  sub_B52920((BattleServantConfConponent_o *)(ActorId + 128), motionMessage, v48, v49, v50, v51, v52, v53);
  ActorId = BattleLogicTask__getTarget(task, v55);
  v56 = this->fields.data;
  if ( !v56 )
    goto LABEL_397;
  v57 = ActorId;
  if ( (int)ActorId <= 0 )
  {
    BattleData__setCommandAttack(this->fields.data, 0, 0, 0LL);
    return 0LL;
  }
  if ( v56->fields.leaderDown || v56->fields.endbattleFlg )
    return 0LL;
  v58 = (EventMissionProgressRequest_Argument_ProgressData_o *)BattleData__getServantData(
                                                                 this->fields.data,
                                                                 ActorId,
                                                                 0LL);
  v59 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_BattleServantData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v59,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_BattleServantData___ctor__);
  if ( !v59 )
    goto LABEL_397;
  optSvt = (BattleServantData_o *)v58;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v59,
    v58,
    (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_BattleServantData__Add__);
  *(_QWORD *)(v7 + 72) = v59;
  v60 = (System_Collections_Generic_IEnumerable_TSource__o **)(v7 + 72);
  sub_B52920((BattleServantConfConponent_o *)(v7 + 72), (System_Int32_array **)v59, v61, v62, v63, v64, v65, v66);
  ActorId = *(_QWORD *)(v7 + 40);
  if ( !ActorId )
    goto LABEL_397;
  BattleCommandData__ResetCriticalStoreDict((BattleCommandData_o *)ActorId, 0LL);
  ActorId = (__int64)*v384;
  if ( !*v384 )
    goto LABEL_397;
  BattleCommandData__UpdateCritical((BattleCommandData_o *)ActorId, *v18, optSvt, this->fields.data, 0LL);
  ActorId = (__int64)*v384;
  if ( !*v384 )
    goto LABEL_397;
  BattleCommandData__UpdateCommandType((BattleCommandData_o *)ActorId, 0LL);
  ActorId = (__int64)*v18;
  if ( !*v18 )
    goto LABEL_397;
  AttackType = BattleServantData__getAttackType((BattleServantData_o *)ActorId, *v384, 0LL);
  v383 = (BattleServantData_o **)(v7 + 24);
  v374 = v57;
  if ( AttackType == 2 )
  {
    ActorId = (__int64)this->fields.data;
    if ( !ActorId )
      goto LABEL_397;
    ActorId = BattleData__isEnemyID((BattleData_o *)ActorId, v57, 0LL);
    if ( !this->fields.data )
      goto LABEL_397;
    v67 = (System_Collections_Generic_IEnumerable_TSource__o *)((ActorId & 1) != 0
                                                              ? BattleData__getFieldEnemyServantIDList(
                                                                  this->fields.data,
                                                                  1,
                                                                  0LL)
                                                              : BattleData__getFieldPlayerServantIDList(
                                                                  this->fields.data,
                                                                  0LL,
                                                                  0LL));
    v69 = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o **)(v7 + 72);
    ActorId = (__int64)System_Linq_Enumerable__ToList_int_(
                         v67,
                         (const MethodInfo_1B7131C *)Method_System_Linq_Enumerable_ToList_int___);
    if ( !ActorId )
      goto LABEL_397;
    v70 = (System_Collections_Generic_IEnumerable_TSource__o *)ActorId;
    System_Collections_Generic_List_int___Remove(
      (System_Collections_Generic_List_int__o *)ActorId,
      v57,
      (const MethodInfo_305892C *)Method_System_Collections_Generic_List_int__Remove__);
    v71 = (System_Func_int__BattleActionData_SideEffectData__o *)sub_B52A54(System_Func_int__BattleServantData__TypeInfo);
    System_Func_int__BattleActionData_SideEffectData____ctor(
      v71,
      (Il2CppObject *)v7,
      Method_BattleLogicNomal___c__DisplayClass20_0__CreateCommandBattle_b__8__,
      (const MethodInfo_2BC49BC *)Method_System_Func_int__BattleServantData___ctor__);
    v72 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__BattleActionData_SideEffectData_(
                                                                 v70,
                                                                 (System_Func_TSource__TResult__o *)v71,
                                                                 (const MethodInfo_1B68D9C *)Method_System_Linq_Enumerable_Select_int__BattleServantData___);
    v73 = BattleLogicNomal___c_TypeInfo;
    if ( (BYTE3(BattleLogicNomal___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleLogicNomal___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo);
      v73 = BattleLogicNomal___c_TypeInfo;
    }
    static_fields = v73->static_fields;
    _9__20_9 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__20_9;
    if ( !_9__20_9 )
    {
      if ( (BYTE3(v73->vtable._0_Equals.methodPtr) & 4) != 0 && !v73->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v73);
        static_fields = BattleLogicNomal___c_TypeInfo->static_fields;
      }
      v76 = (Il2CppObject *)static_fields->__9;
      _9__20_9 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_BattleServantData__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__20_9,
        v76,
        Method_BattleLogicNomal___c__CreateCommandBattle_b__20_9__,
        (const MethodInfo_2BC90BC *)Method_System_Func_BattleServantData__bool___ctor__);
      v77 = BattleLogicNomal___c_TypeInfo->static_fields;
      v77->__9__20_9 = (struct System_Func_BattleServantData__bool__o *)_9__20_9;
      sub_B52920(
        (BattleServantConfConponent_o *)&v77->__9__20_9,
        (System_Int32_array **)_9__20_9,
        v78,
        v79,
        v80,
        v81,
        v82,
        v83);
    }
    ActorId = (__int64)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                         v72,
                         (System_Func_TSource__bool__o *)_9__20_9,
                         (const MethodInfo_1B72CC0 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
    if ( !*v69 )
      goto LABEL_397;
    v60 = (System_Collections_Generic_IEnumerable_TSource__o **)(v7 + 72);
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      *v69,
      (System_Collections_Generic_IEnumerable_T__o *)ActorId,
      (const MethodInfo_2FF1854 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
  }
  v84 = *v60;
  v85 = BattleLogicNomal___c_TypeInfo;
  if ( (BYTE3(BattleLogicNomal___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleLogicNomal___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo);
    v85 = BattleLogicNomal___c_TypeInfo;
  }
  v86 = v85->static_fields;
  _9__20_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)v86->__9__20_0;
  if ( !_9__20_0 )
  {
    if ( (BYTE3(v85->vtable._0_Equals.methodPtr) & 4) != 0 && !v85->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v85);
      v86 = BattleLogicNomal___c_TypeInfo->static_fields;
    }
    v88 = (Il2CppObject *)v86->__9;
    _9__20_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B52A54(System_Func_BattleServantData__BattleServantData__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__20_0,
      v88,
      Method_BattleLogicNomal___c__CreateCommandBattle_b__20_0__,
      (const MethodInfo_2BCA808 *)Method_System_Func_BattleServantData__BattleServantData___ctor__);
    v89 = BattleLogicNomal___c_TypeInfo->static_fields;
    v89->__9__20_0 = (struct System_Func_BattleServantData__BattleServantData__o *)_9__20_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v89->__9__20_0,
      (System_Int32_array **)_9__20_0,
      v90,
      v91,
      v92,
      v93,
      v94,
      v95);
  }
  v96 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B52A54(System_Func_BattleServantData__BattleBuffData_CheckInvokeBuff__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
    v96,
    (Il2CppObject *)v7,
    Method_BattleLogicNomal___c__DisplayClass20_0__CreateCommandBattle_b__1__,
    (const MethodInfo_2BCA808 *)Method_System_Func_BattleServantData__BattleBuffData_CheckInvokeBuff___ctor__);
  ActorId = (__int64)System_Linq_Enumerable__ToDictionary_BattleServantData_PartAnimationSaveData__string__BattlePlayAnimationComponent_SaveData___(
                       v84,
                       (System_Func_TSource__TKey__o *)_9__20_0,
                       (System_Func_TSource__TElement__o *)v96,
                       (const MethodInfo_1B6EA08 *)Method_System_Linq_Enumerable_ToDictionary_BattleServantData__BattleServantData__BattleBuffData_CheckInvokeBuff___);
  v97 = *(_QWORD *)(v7 + 24);
  if ( !v97 )
    goto LABEL_397;
  v385 = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)ActorId;
  v98 = BuffList_TypeInfo;
  v378 = *(BattleBuffData_o **)(v97 + 760);
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
    v98 = BuffList_TypeInfo;
  }
  v99 = BattleLogicNomal___c_TypeInfo;
  v371 = (__int64 *)v60;
  CommandCodeBuffHash = (System_Collections_Generic_IEnumerable_TSource__o *)v98->static_fields->CommandCodeBuffHash;
  if ( (BYTE3(BattleLogicNomal___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleLogicNomal___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo);
    v99 = BattleLogicNomal___c_TypeInfo;
  }
  v101 = v99->static_fields;
  _9__20_2 = v101->__9__20_2;
  if ( !_9__20_2 )
  {
    if ( (BYTE3(v99->vtable._0_Equals.methodPtr) & 4) != 0 && !v99->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v99);
      v101 = BattleLogicNomal___c_TypeInfo->static_fields;
    }
    v103 = (Il2CppObject *)v101->__9;
    _9__20_2 = (System_Func_BuffList_TYPE__BuffList_TYPE__o *)sub_B52A54(System_Func_BuffList_TYPE__BuffList_TYPE__TypeInfo);
    System_Func_BuffList_TYPE__BuffList_TYPE____ctor(
      _9__20_2,
      v103,
      Method_BattleLogicNomal___c__CreateCommandBattle_b__20_2__,
      (const MethodInfo_2BC5F08 *)Method_System_Func_BuffList_TYPE__BuffList_TYPE___ctor__);
    v104 = BattleLogicNomal___c_TypeInfo->static_fields;
    v104->__9__20_2 = _9__20_2;
    sub_B52920(
      (BattleServantConfConponent_o *)&v104->__9__20_2,
      (System_Int32_array **)_9__20_2,
      v105,
      v106,
      v107,
      v108,
      v109,
      v110);
    v99 = BattleLogicNomal___c_TypeInfo;
  }
  if ( (BYTE3(v99->vtable._0_Equals.methodPtr) & 4) != 0 && !v99->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v99);
    v99 = BattleLogicNomal___c_TypeInfo;
  }
  v111 = v99->static_fields;
  v372 = task;
  _9__20_3 = (System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *)v111->__9__20_3;
  if ( !_9__20_3 )
  {
    if ( (BYTE3(v99->vtable._0_Equals.methodPtr) & 4) != 0 && !v99->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v99);
      v111 = BattleLogicNomal___c_TypeInfo->static_fields;
    }
    v113 = (Il2CppObject *)v111->__9;
    _9__20_3 = (System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort__o *)sub_B52A54(System_Func_BuffList_TYPE__List_BattleBuffData_BuffData___TypeInfo);
    System_Func_FollowerInfo_ReturnSupportServantType__ListViewSort____ctor(
      _9__20_3,
      v113,
      Method_BattleLogicNomal___c__CreateCommandBattle_b__20_3__,
      (const MethodInfo_2BC622C *)Method_System_Func_BuffList_TYPE__List_BattleBuffData_BuffData____ctor__);
    v114 = BattleLogicNomal___c_TypeInfo->static_fields;
    v114->__9__20_3 = (struct System_Func_BuffList_TYPE__List_BattleBuffData_BuffData___o *)_9__20_3;
    sub_B52920(
      (BattleServantConfConponent_o *)&v114->__9__20_3,
      (System_Int32_array **)_9__20_3,
      v115,
      v116,
      v117,
      v118,
      v119,
      v120);
  }
  v121 = (System_Int32_array **)System_Linq_Enumerable__ToDictionary_BuffList_TYPE__BuffList_TYPE__List_BattleBuffData_BuffData__(
                                  CommandCodeBuffHash,
                                  (System_Func_TSource__TKey__o *)_9__20_2,
                                  (System_Func_TSource__TElement__o *)_9__20_3,
                                  (const MethodInfo_1B6E990 *)Method_System_Linq_Enumerable_ToDictionary_BuffList_TYPE__BuffList_TYPE__List_BattleBuffData_BuffData____);
  *(_QWORD *)(v7 + 32) = v121;
  sub_B52920((BattleServantConfConponent_o *)(v7 + 32), v121, v122, v123, v124, v125, v126, v127);
  v128 = *(_QWORD *)(v7 + 40);
  v377 = (System_Collections_Generic_Dictionary_BuffList_TYPE__List_BattleBuffData_BuffData___o **)(v7 + 32);
  if ( !v128 )
    goto LABEL_397;
  v129 = *(_QWORD *)(v128 + 72);
  v130 = (System_Action_WebClient__UploadValuesCompletedEventHandler__o *)sub_B52A54(System_Action_BuffEntity__BattleBuffData_BuffData__TypeInfo);
  System_Action_WebClient__UploadValuesCompletedEventHandler____ctor(
    v130,
    (Il2CppObject *)v7,
    Method_BattleLogicNomal___c__DisplayClass20_0__CreateCommandBattle_b__4__,
    (const MethodInfo_2635A44 *)Method_System_Action_BuffEntity__BattleBuffData_BuffData___ctor__);
  ActorId = (__int64)v378;
  if ( !v378 )
    goto LABEL_397;
  BattleBuffData__SetCommandCodeBuffActiveFlg(
    v378,
    v129,
    (System_Action_BuffEntity__BattleBuffData_BuffData__o *)v130,
    1,
    0LL);
  if ( !*v384 )
    goto LABEL_397;
  commandAssistId = (*v384)->fields.commandAssistId;
  v132 = (System_Action_WebClient__UploadValuesCompletedEventHandler__o *)sub_B52A54(System_Action_BuffEntity__BattleBuffData_BuffData__TypeInfo);
  System_Action_WebClient__UploadValuesCompletedEventHandler____ctor(
    v132,
    (Il2CppObject *)v7,
    Method_BattleLogicNomal___c__DisplayClass20_0__CreateCommandBattle_b__5__,
    (const MethodInfo_2635A44 *)Method_System_Action_BuffEntity__BattleBuffData_BuffData___ctor__);
  v133 = *(_QWORD *)(v7 + 40);
  if ( !v133 )
    goto LABEL_397;
  BattleBuffData__SetCommandAssistBuffActiveFlg(
    v378,
    commandAssistId,
    (System_Action_BuffEntity__BattleBuffData_BuffData__o *)v132,
    1,
    *(_DWORD *)(v133 + 88),
    0LL);
  ActorId = sub_B5299C(bool___TypeInfo, 2LL);
  v134 = (BattleServantData_o **)(v7 + 24);
  if ( !ActorId )
    goto LABEL_397;
  v135 = (BattleCommandData_o **)(v7 + 40);
  if ( !*(_DWORD *)(ActorId + 24) )
    goto LABEL_398;
  v380 = ActorId;
  *(_BYTE *)(ActorId + 32) = 1;
  ActorId = sub_B5299C(BattleServantData___TypeInfo, 1LL);
  if ( !ActorId )
    goto LABEL_397;
  v142 = ActorId;
  if ( optSvt )
  {
    ActorId = sub_B52A44(optSvt, *(_QWORD *)(*(_QWORD *)ActorId + 64LL));
    if ( !ActorId )
    {
      v368 = sub_B52A7C(0LL);
      sub_B52A28(v368, 0LL);
    }
  }
  if ( !*(_DWORD *)(v142 + 24) )
    goto LABEL_398;
  *(_QWORD *)(v142 + 32) = optSvt;
  sub_B52920(
    (BattleServantConfConponent_o *)(v142 + 32),
    (System_Int32_array **)optSvt,
    v136,
    v137,
    v138,
    v139,
    v140,
    v141);
  *(_QWORD *)(v7 + 56) = v142;
  sub_B52920((BattleServantConfConponent_o *)(v7 + 56), (System_Int32_array **)v142, v143, v144, v145, v146, v147, v148);
  v149 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B52A54(System_Func_BattleServantData__BattleServantData__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
    v149,
    (Il2CppObject *)v7,
    Method_BattleLogicNomal___c__DisplayClass20_0__CreateCommandBattle_b__6__,
    (const MethodInfo_2BCA808 *)Method_System_Func_BattleServantData__BattleServantData___ctor__);
  *(_QWORD *)(v7 + 64) = v149;
  v373 = (__int64 *)(v7 + 64);
  sub_B52920((BattleServantConfConponent_o *)(v7 + 64), (System_Int32_array **)v149, v150, v151, v152, v153, v154, v155);
  v379 = (System_Func_T__TResult__o *)sub_B52A54(System_Func_bool__IEnumerable_BattleServantData___TypeInfo);
  System_Func_bool__object____ctor(
    v379,
    (Il2CppObject *)v7,
    Method_BattleLogicNomal___c__DisplayClass20_0__CreateCommandBattle_b__7__,
    (const MethodInfo_2782540 *)Method_System_Func_bool__IEnumerable_BattleServantData____ctor__);
  ActorId = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !ActorId )
    goto LABEL_397;
  MasterData_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                            (DataManager_o *)ActorId,
                                                            (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  v157 = (BattleLogicFunction_AttackSideEffectFunctionArgument_o *)sub_B52A54(BattleLogicFunction_AttackSideEffectFunctionArgument_TypeInfo);
  BattleLogicFunction_AttackSideEffectFunctionArgument___ctor(v157, 0LL);
  v159 = v380;
  v160 = *(_QWORD *)(v380 + 24);
  if ( (int)v160 >= 1 )
  {
    v161 = 0LL;
    do
    {
      if ( v161 >= (unsigned int)v160 )
        goto LABEL_398;
      v162 = *(unsigned __int8 *)(v159 + v161 + 32);
      if ( *(_BYTE *)(v159 + v161 + 32) )
        v163 = 177;
      else
        v163 = 138;
      TargetCommandCodeBuffList = BattleLogicNomal__GetTargetCommandCodeBuffList(
                                    (BattleLogicNomal_o *)ActorId,
                                    *v377,
                                    v378,
                                    v163,
                                    *v135,
                                    v158);
      ActorId = (__int64)v379;
      if ( !v379 )
        goto LABEL_397;
      ActorId = (__int64)System_Func_bool__object___Invoke(
                           v379,
                           v162 != 0,
                           (const MethodInfo_2782554 *)Method_System_Func_bool__IEnumerable_BattleServantData___Invoke__);
      if ( !ActorId )
        goto LABEL_397;
      v166 = *(_QWORD *)ActorId;
      v167 = ActorId;
      if ( *(_WORD *)(*(_QWORD *)ActorId + 298LL) )
      {
        v168 = 0LL;
        v169 = (int *)(*(_QWORD *)(v166 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)v169 - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
        {
          ++v168;
          v169 += 4;
          if ( v168 >= *(unsigned __int16 *)(*(_QWORD *)ActorId + 298LL) )
            goto LABEL_91;
        }
        v170 = v166 + 16LL * *v169 + 312;
      }
      else
      {
LABEL_91:
        v170 = sub_AEB880(ActorId, System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, 0LL, v165);
      }
      v173 = (*(__int64 (__fastcall **)(__int64, _QWORD))v170)(v167, *(_QWORD *)(v170 + 8));
      if ( !v173 )
        sub_B52A5C(0LL, v171);
      while ( 1 )
      {
        v174 = *(_QWORD *)v173;
        if ( *(_WORD *)(*(_QWORD *)v173 + 298LL) )
        {
          v175 = 0LL;
          v176 = (int *)(*(_QWORD *)(v174 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v176 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            ++v175;
            v176 += 4;
            if ( v175 >= *(unsigned __int16 *)(*(_QWORD *)v173 + 298LL) )
              goto LABEL_98;
          }
          v177 = v174 + 16LL * *v176 + 312;
        }
        else
        {
LABEL_98:
          v177 = sub_AEB880(v173, System_Collections_IEnumerator_TypeInfo, 0LL, v172);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v177)(v173, *(_QWORD *)(v177 + 8)) & 1) == 0 )
          break;
        v179 = *(_QWORD *)v173;
        if ( *(_WORD *)(*(_QWORD *)v173 + 298LL) )
        {
          v180 = 0LL;
          v181 = (int *)(*(_QWORD *)(v179 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v181 - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
          {
            ++v180;
            v181 += 4;
            if ( v180 >= *(unsigned __int16 *)(*(_QWORD *)v173 + 298LL) )
              goto LABEL_105;
          }
          v182 = v179 + 16LL * *v181 + 312;
        }
        else
        {
LABEL_105:
          v182 = sub_AEB880(v173, System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, 0LL, v178);
        }
        v183 = (System_Type_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v182)(v173, *(_QWORD *)(v182 + 8));
        if ( !v385 )
          sub_B52A5C(0LL, v183);
        Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                 v385,
                 v183,
                 (const MethodInfo_2F1B73C *)Method_System_Collections_Generic_Dictionary_BattleServantData__BattleBuffData_CheckInvokeBuff__get_Item__);
        BattleLogicNomal__commandCodeBuffProcess(
          this,
          (BattleBuffData_CheckInvokeBuff_o *)Item,
          MasterData_WarQuestSelectionMaster,
          *v135,
          TargetCommandCodeBuffList,
          *v32,
          0,
          v157,
          v369);
      }
      *((_DWORD *)&v386[1].fields.list + v387++) = 845;
      v185 = *(_QWORD *)v173;
      if ( *(_WORD *)(*(_QWORD *)v173 + 298LL) )
      {
        v186 = 0LL;
        v187 = (int *)(*(_QWORD *)(v185 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v187 - 1) != System_IDisposable_TypeInfo )
        {
          ++v186;
          v187 += 4;
          if ( v186 >= *(unsigned __int16 *)(*(_QWORD *)v173 + 298LL) )
            goto LABEL_114;
        }
        v188 = v185 + 16LL * *v187 + 312;
      }
      else
      {
LABEL_114:
        v188 = sub_AEB880(v173, System_IDisposable_TypeInfo, 0LL, v178);
      }
      ActorId = (*(__int64 (__fastcall **)(__int64, _QWORD))v188)(v173, *(_QWORD *)(v188 + 8));
      if ( v387 && *((_DWORD *)&v386[0].fields.current + v387 + 1) == 845 )
        --v387;
      v159 = v380;
      v135 = v384;
      ++v161;
      LODWORD(v160) = *(_DWORD *)(v380 + 24);
    }
    while ( (__int64)v161 < (int)v160 );
    if ( (int)v160 >= 1 )
    {
      v189 = 0LL;
      while ( v189 < (unsigned int)v160 )
      {
        v375 = v189;
        v191 = *(unsigned __int8 *)(v159 + v189 + 32);
        ActorId = sub_B5299C(BuffList_ACTION___TypeInfo, 2LL);
        if ( !ActorId )
          goto LABEL_397;
        v192 = *(_DWORD *)(ActorId + 24);
        v193 = (BuffList_ACTION_array *)ActorId;
        if ( v191 )
        {
          if ( !v192 )
            break;
          *(_DWORD *)(ActorId + 32) = 118;
          if ( v192 == 1 )
            break;
          v194 = 120;
        }
        else
        {
          if ( !v192 )
            break;
          *(_DWORD *)(ActorId + 32) = 88;
          if ( v192 == 1 )
            break;
          v194 = 98;
        }
        *(_DWORD *)(ActorId + 36) = v194;
        ActorId = (__int64)System_Func_bool__object___Invoke(
                             v379,
                             v191 != 0,
                             (const MethodInfo_2782554 *)Method_System_Func_bool__IEnumerable_BattleServantData___Invoke__);
        if ( !ActorId )
          goto LABEL_397;
        v196 = *(_QWORD *)ActorId;
        v197 = ActorId;
        attackActs = v193;
        if ( *(_WORD *)(*(_QWORD *)ActorId + 298LL) )
        {
          v198 = 0LL;
          v199 = (int *)(*(_QWORD *)(v196 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)v199 - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
          {
            ++v198;
            v199 += 4;
            if ( v198 >= *(unsigned __int16 *)(*(_QWORD *)ActorId + 298LL) )
              goto LABEL_141;
          }
          v200 = v196 + 16LL * *v199 + 312;
        }
        else
        {
LABEL_141:
          v200 = sub_AEB880(ActorId, System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, 0LL, v195);
        }
        v203 = (*(__int64 (__fastcall **)(__int64, _QWORD))v200)(v197, *(_QWORD *)(v200 + 8));
        if ( !v203 )
          sub_B52A5C(0LL, v201);
        while ( 1 )
        {
          v212 = *(_QWORD *)v203;
          if ( *(_WORD *)(*(_QWORD *)v203 + 298LL) )
          {
            v213 = 0LL;
            v214 = (int *)(*(_QWORD *)(v212 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v214 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              ++v213;
              v214 += 4;
              if ( v213 >= *(unsigned __int16 *)(*(_QWORD *)v203 + 298LL) )
                goto LABEL_155;
            }
            v134 = v383;
            v215 = v212 + 16LL * *v214 + 312;
          }
          else
          {
LABEL_155:
            v134 = v383;
            v215 = sub_AEB880(v203, System_Collections_IEnumerator_TypeInfo, 0LL, v202);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v215)(v203, *(_QWORD *)(v215 + 8)) & 1) == 0 )
            break;
          v217 = *(_QWORD *)v203;
          if ( *(_WORD *)(*(_QWORD *)v203 + 298LL) )
          {
            v218 = 0LL;
            v219 = (int *)(*(_QWORD *)(v217 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v219 - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
            {
              ++v218;
              v219 += 4;
              if ( v218 >= *(unsigned __int16 *)(*(_QWORD *)v203 + 298LL) )
                goto LABEL_162;
            }
            v220 = v217 + 16LL * *v219 + 312;
          }
          else
          {
LABEL_162:
            v220 = sub_AEB880(v203, System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, 0LL, v216);
          }
          v222 = (BattleServantData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v220)(v203, *(_QWORD *)(v220 + 8));
          if ( !*v134 )
            sub_B52A5C(0LL, v221);
          AttackSideEffectBuffList_21147200 = BattleServantData__getAttackSideEffectBuffList_21147200(
                                                *v134,
                                                attackActs,
                                                *v384,
                                                v222,
                                                0LL);
          v223 = AttackSideEffectBuffList_21147200;
          if ( !AttackSideEffectBuffList_21147200 )
            sub_B52A5C(0LL, v211);
          v204 = *(_QWORD *)&AttackSideEffectBuffList_21147200->max_length;
          if ( (int)v204 >= 1 )
          {
            v205 = 0LL;
            do
            {
              if ( v205 >= (unsigned int)v204 )
              {
                v190 = sub_B52A88(AttackSideEffectBuffList_21147200);
                sub_B52A28(v190, 0LL);
              }
              if ( !*v32 )
                sub_B52A5C(0LL, v211);
              v206 = v223->m_Items[v205];
              logicfunction = this->fields.logicfunction;
              SideEffectActionData = BattleActionData__MakeSideEffectActionData(*v32, 3, 0LL);
              if ( !logicfunction )
                sub_B52A5C(SideEffectActionData, v209);
              BattleLogicFunction__SetSideEffectBuff(
                logicfunction,
                MasterData_WarQuestSelectionMaster,
                SideEffectActionData,
                v206,
                (BattleLogicFunction_CommonSideEffectFunctionArgument_o *)v157,
                0,
                0LL);
              LODWORD(v204) = v223->max_length;
              ++v205;
            }
            while ( (__int64)v205 < (int)v204 );
          }
        }
        *((_DWORD *)&v386[1].fields.list + v387++) = 1050;
        v224 = *(_QWORD *)v203;
        if ( *(_WORD *)(*(_QWORD *)v203 + 298LL) )
        {
          v225 = 0LL;
          v226 = (int *)(*(_QWORD *)(v224 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v226 - 1) != System_IDisposable_TypeInfo )
          {
            ++v225;
            v226 += 4;
            if ( v225 >= *(unsigned __int16 *)(*(_QWORD *)v203 + 298LL) )
              goto LABEL_172;
          }
          v227 = v224 + 16LL * *v226 + 312;
        }
        else
        {
LABEL_172:
          v227 = sub_AEB880(v203, System_IDisposable_TypeInfo, 0LL, v216);
        }
        ActorId = (*(__int64 (__fastcall **)(__int64, _QWORD))v227)(v203, *(_QWORD *)(v227 + 8));
        if ( v387 && *((_DWORD *)&v386[0].fields.current + v387 + 1) == 1050 )
          --v387;
        v159 = v380;
        v135 = v384;
        v189 = v375 + 1;
        LODWORD(v160) = *(_DWORD *)(v380 + 24);
        if ( (__int64)(v375 + 1) >= (int)v160 )
          goto LABEL_179;
      }
LABEL_398:
      v367 = sub_B52A88(ActorId);
      sub_B52A28(v367, 0LL);
    }
  }
LABEL_179:
  attackActsa = (BattleLogic_DamageProcessArgs_o *)sub_B52A54(BattleLogic_DamageProcessArgs_TypeInfo);
  BattleLogic_DamageProcessArgs___ctor(attackActsa, 1, -1, 0LL);
  ActorId = (__int64)v379;
  if ( !v379 )
    goto LABEL_397;
  ActorId = (__int64)System_Func_bool__object___Invoke(
                       v379,
                       0,
                       (const MethodInfo_2782554 *)Method_System_Func_bool__IEnumerable_BattleServantData___Invoke__);
  if ( !ActorId )
    goto LABEL_397;
  v229 = *(_QWORD *)ActorId;
  v230 = ActorId;
  if ( *(_WORD *)(*(_QWORD *)ActorId + 298LL) )
  {
    v231 = 0LL;
    v232 = (int *)(*(_QWORD *)(v229 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)v232 - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
    {
      ++v231;
      v232 += 4;
      if ( v231 >= *(unsigned __int16 *)(*(_QWORD *)ActorId + 298LL) )
        goto LABEL_185;
    }
    v233 = v229 + 16LL * *v232 + 312;
  }
  else
  {
LABEL_185:
    v233 = sub_AEB880(ActorId, System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, 0LL, v228);
  }
  v234 = (*(__int64 (__fastcall **)(__int64, _QWORD))v233)(v230, *(_QWORD *)(v233 + 8));
  v237 = v234;
  v238 = 0LL;
  while ( 1 )
  {
    if ( !v237 )
      sub_B52A5C(v234, v235);
    v239 = *(_QWORD *)v237;
    if ( *(_WORD *)(*(_QWORD *)v237 + 298LL) )
    {
      v240 = 0LL;
      v241 = (int *)(*(_QWORD *)(v239 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v241 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v240;
        v241 += 4;
        if ( v240 >= *(unsigned __int16 *)(*(_QWORD *)v237 + 298LL) )
          goto LABEL_193;
      }
      v242 = v239 + 16LL * *v241 + 312;
    }
    else
    {
LABEL_193:
      v242 = sub_AEB880(v237, System_Collections_IEnumerator_TypeInfo, 0LL, v236);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v242)(v237, *(_QWORD *)(v242 + 8)) & 1) == 0 )
      break;
    v244 = *(_QWORD *)v237;
    if ( *(_WORD *)(*(_QWORD *)v237 + 298LL) )
    {
      v245 = 0LL;
      v246 = (int *)(*(_QWORD *)(v244 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v246 - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
      {
        ++v245;
        v246 += 4;
        if ( v245 >= *(unsigned __int16 *)(*(_QWORD *)v237 + 298LL) )
          goto LABEL_200;
      }
      v247 = v244 + 16LL * *v246 + 312;
    }
    else
    {
LABEL_200:
      v247 = sub_AEB880(v237, System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, 0LL, v243);
    }
    v249 = (BattleServantData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v247)(v237, *(_QWORD *)(v247 + 8));
    logic = this->fields.logic;
    if ( !logic )
      sub_B52A5C(0LL, v248);
    Damagelist = BattleLogic__getDamagelist(logic, *v134, v249, *v135, attackActsa, 0LL);
    v253 = Damagelist;
    if ( v249 == optSvt )
      v238 = Damagelist;
    if ( !v249 )
      sub_B52A5C(Damagelist, v252);
    buffData = v249->fields.buffData;
    if ( !buffData )
      sub_B52A5C(Damagelist, v252);
    if ( !buffData->fields.isNoDamage )
    {
      v255 = *v32;
      v256 = BattleBuffData__UseProgressingDoNotAct(v249->fields.buffData, v249, 0, 0LL);
      if ( !v255 )
        sub_B52A5C(v256, v256);
      BattleActionData__addSideEffectActionData(v255, v256, 1, 0LL);
    }
    if ( !*v134 )
      sub_B52A5C(0LL, v252);
    v257 = BattleServantData__checkPlayer(*v134, 0LL);
    if ( v257 )
    {
      if ( !*v134 )
        sub_B52A5C(v257, v258);
      v249->fields.overkillTargetId = (*v134)->fields.uniqueId;
    }
    if ( !*v32 )
      sub_B52A5C(0LL, v258);
    v259 = v253;
    v135 = v384;
    BattleActionData__setDamageData(*v32, v259, 0LL, 0, 0, 0LL);
  }
  *((_DWORD *)&v386[1].fields.list + v387++) = 1260;
  v260 = *(_QWORD *)v237;
  if ( *(_WORD *)(*(_QWORD *)v237 + 298LL) )
  {
    v261 = 0LL;
    v262 = (int *)(*(_QWORD *)(v260 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v262 - 1) != System_IDisposable_TypeInfo )
    {
      ++v261;
      v262 += 4;
      if ( v261 >= *(unsigned __int16 *)(*(_QWORD *)v237 + 298LL) )
        goto LABEL_220;
    }
    v263 = v260 + 16LL * *v262 + 312;
  }
  else
  {
LABEL_220:
    v263 = sub_AEB880(v237, System_IDisposable_TypeInfo, 0LL, v243);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v263)(v237, *(_QWORD *)(v263 + 8));
  if ( v387 && *((_DWORD *)&v386[0].fields.current + v387 + 1) == 1260 )
    --v387;
  ActorId = *v373;
  if ( !*v373 )
    goto LABEL_397;
  System_Func_string__string___Invoke(
    (System_Func_string__string__o *)ActorId,
    (System_String_o *)optSvt,
    (const MethodInfo_2BCA81C *)Method_System_Func_BattleServantData__BattleServantData__Invoke__);
  ActorId = (__int64)*v384;
  if ( !*v384 )
    goto LABEL_397;
  v264 = *v32;
  ActorId = BattleCommandData__get_type((BattleCommandData_o *)ActorId, 0LL);
  if ( !v264 )
    goto LABEL_397;
  v264->fields.type = ActorId;
  ActorId = (__int64)*v32;
  if ( !*v32 )
    goto LABEL_397;
  BattleActionData__setCommand((BattleActionData_o *)ActorId, *v384, 0LL);
  if ( !*v384 )
    goto LABEL_397;
  if ( !*v32 )
    goto LABEL_397;
  (*v32)->fields.actionIndex = (*v384)->fields.actionIndex;
  ActorId = (__int64)*v134;
  if ( !*v134 )
    goto LABEL_397;
  v265 = *v32;
  ActorId = BattleServantData__getMotionId((BattleServantData_o *)ActorId, *v384, 0LL);
  if ( !v265 )
    goto LABEL_397;
  v265->fields.motionId = ActorId;
  if ( !v238 )
    goto LABEL_397;
  v266 = *v32;
  ActorId = BattleActionData_DamageData__getAttackCount(v238, 0LL);
  if ( !v266 )
    goto LABEL_397;
  v266->fields.attackcount = ActorId;
  v267 = this->fields.data;
  if ( !v267 )
    goto LABEL_397;
  perf = v267->fields.perf;
  if ( !perf )
    goto LABEL_397;
  if ( !*v384 )
    goto LABEL_397;
  ActorId = (__int64)perf->fields.commandPerf;
  if ( !ActorId )
    goto LABEL_397;
  BattlePerformanceCommandCard__UpdateRemainingCardBuff(
    (BattlePerformanceCommandCard_o *)ActorId,
    (*v384)->fields.actionIndex,
    0LL);
  if ( !*v134 )
    goto LABEL_397;
  ActorId = (__int64)this->fields.data;
  if ( !ActorId )
    goto LABEL_397;
  v269 = *v32;
  ActorId = BattleData__isPrevAttackMe((BattleData_o *)ActorId, (*v134)->fields.uniqueId, v374, 0LL);
  if ( !v269 )
    goto LABEL_397;
  v271 = v380;
  v269->fields.prevattackme = ActorId & 1;
  v272 = v384;
  v273 = *(_QWORD *)(v380 + 24);
  if ( (int)v273 >= 1 )
  {
    v274 = 0LL;
    do
    {
      if ( v274 >= (unsigned int)v273 )
        goto LABEL_398;
      v275 = *(_BYTE *)(v271 + v274 + 32);
      if ( v275 )
        v276 = 178;
      else
        v276 = 159;
      v277 = BattleLogicNomal__GetTargetCommandCodeBuffList(
               (BattleLogicNomal_o *)ActorId,
               *v377,
               v378,
               v276,
               *v272,
               v270);
      ActorId = (__int64)System_Func_bool__object___Invoke(
                           v379,
                           v275,
                           (const MethodInfo_2782554 *)Method_System_Func_bool__IEnumerable_BattleServantData___Invoke__);
      if ( !ActorId )
        goto LABEL_397;
      v279 = *(_QWORD *)ActorId;
      v280 = ActorId;
      if ( *(_WORD *)(*(_QWORD *)ActorId + 298LL) )
      {
        v281 = 0LL;
        v282 = (int *)(*(_QWORD *)(v279 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)v282 - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
        {
          ++v281;
          v282 += 4;
          if ( v281 >= *(unsigned __int16 *)(*(_QWORD *)ActorId + 298LL) )
            goto LABEL_255;
        }
        v283 = v279 + 16LL * *v282 + 312;
      }
      else
      {
LABEL_255:
        v283 = sub_AEB880(ActorId, System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, 0LL, v278);
      }
      v286 = (*(__int64 (__fastcall **)(__int64, _QWORD))v283)(v280, *(_QWORD *)(v283 + 8));
      if ( !v286 )
        sub_B52A5C(0LL, v284);
      while ( 1 )
      {
        v287 = *(_QWORD *)v286;
        if ( *(_WORD *)(*(_QWORD *)v286 + 298LL) )
        {
          v288 = 0LL;
          v289 = (int *)(*(_QWORD *)(v287 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v289 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            ++v288;
            v289 += 4;
            if ( v288 >= *(unsigned __int16 *)(*(_QWORD *)v286 + 298LL) )
              goto LABEL_262;
          }
          v290 = v287 + 16LL * *v289 + 312;
        }
        else
        {
LABEL_262:
          v290 = sub_AEB880(v286, System_Collections_IEnumerator_TypeInfo, 0LL, v285);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v290)(v286, *(_QWORD *)(v290 + 8)) & 1) == 0 )
          break;
        v292 = *(_QWORD *)v286;
        if ( *(_WORD *)(*(_QWORD *)v286 + 298LL) )
        {
          v293 = 0LL;
          v294 = (int *)(*(_QWORD *)(v292 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v294 - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
          {
            ++v293;
            v294 += 4;
            if ( v293 >= *(unsigned __int16 *)(*(_QWORD *)v286 + 298LL) )
              goto LABEL_269;
          }
          v295 = v292 + 16LL * *v294 + 312;
        }
        else
        {
LABEL_269:
          v295 = sub_AEB880(v286, System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, 0LL, v291);
        }
        v296 = (System_Type_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v295)(v286, *(_QWORD *)(v295 + 8));
        if ( !v385 )
          sub_B52A5C(0LL, v296);
        v297 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                 v385,
                 v296,
                 (const MethodInfo_2F1B73C *)Method_System_Collections_Generic_Dictionary_BattleServantData__BattleBuffData_CheckInvokeBuff__get_Item__);
        BattleLogicNomal__commandCodeBuffProcess(
          this,
          (BattleBuffData_CheckInvokeBuff_o *)v297,
          MasterData_WarQuestSelectionMaster,
          *v272,
          v277,
          *v32,
          1,
          v157,
          v369);
      }
      *((_DWORD *)&v386[1].fields.list + v387++) = 1591;
      v298 = *(_QWORD *)v286;
      if ( *(_WORD *)(*(_QWORD *)v286 + 298LL) )
      {
        v299 = 0LL;
        v300 = (int *)(*(_QWORD *)(v298 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v300 - 1) != System_IDisposable_TypeInfo )
        {
          ++v299;
          v300 += 4;
          if ( v299 >= *(unsigned __int16 *)(*(_QWORD *)v286 + 298LL) )
            goto LABEL_278;
        }
        v301 = v298 + 16LL * *v300 + 312;
      }
      else
      {
LABEL_278:
        v301 = sub_AEB880(v286, System_IDisposable_TypeInfo, 0LL, v291);
      }
      ActorId = (*(__int64 (__fastcall **)(__int64, _QWORD))v301)(v286, *(_QWORD *)(v301 + 8));
      if ( v387 && *((_DWORD *)&v386[0].fields.current + v387 + 1) == 1591 )
        --v387;
      v271 = v380;
      v272 = v384;
      ++v274;
      LODWORD(v273) = *(_DWORD *)(v380 + 24);
    }
    while ( (__int64)v274 < (int)v273 );
    if ( (int)v273 >= 1 )
    {
      v302 = 0LL;
      while ( v302 < (unsigned int)v273 )
      {
        v304 = *(unsigned __int8 *)(v271 + v302 + 32);
        ActorId = sub_B5299C(BuffList_ACTION___TypeInfo, 2LL);
        if ( !ActorId )
          goto LABEL_397;
        v305 = *(_DWORD *)(ActorId + 24);
        v306 = (BuffList_ACTION_array *)ActorId;
        if ( v304 )
        {
          if ( !v305 )
            goto LABEL_398;
          *(_DWORD *)(ActorId + 32) = 119;
          if ( v305 == 1 )
            goto LABEL_398;
          v307 = 121;
        }
        else
        {
          if ( !v305 )
            goto LABEL_398;
          *(_DWORD *)(ActorId + 32) = 57;
          if ( v305 == 1 )
            goto LABEL_398;
          v307 = 80;
        }
        *(_DWORD *)(ActorId + 36) = v307;
        ActorId = (__int64)System_Func_bool__object___Invoke(
                             v379,
                             v304 != 0,
                             (const MethodInfo_2782554 *)Method_System_Func_bool__IEnumerable_BattleServantData___Invoke__);
        if ( !ActorId )
          goto LABEL_397;
        v309 = *(_QWORD *)ActorId;
        v310 = ActorId;
        if ( *(_WORD *)(*(_QWORD *)ActorId + 298LL) )
        {
          v311 = 0LL;
          v312 = (int *)(*(_QWORD *)(v309 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)v312 - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
          {
            ++v311;
            v312 += 4;
            if ( v311 >= *(unsigned __int16 *)(*(_QWORD *)ActorId + 298LL) )
              goto LABEL_304;
          }
          v313 = v309 + 16LL * *v312 + 312;
        }
        else
        {
LABEL_304:
          v313 = sub_AEB880(ActorId, System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, 0LL, v308);
        }
        v316 = (*(__int64 (__fastcall **)(__int64, _QWORD))v313)(v310, *(_QWORD *)(v313 + 8));
        if ( !v316 )
          sub_B52A5C(0LL, v314);
        while ( 1 )
        {
          v322 = *(_QWORD *)v316;
          if ( *(_WORD *)(*(_QWORD *)v316 + 298LL) )
          {
            v323 = 0LL;
            v324 = (int *)(*(_QWORD *)(v322 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v324 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              ++v323;
              v324 += 4;
              if ( v323 >= *(unsigned __int16 *)(*(_QWORD *)v316 + 298LL) )
                goto LABEL_317;
            }
            v325 = v322 + 16LL * *v324 + 312;
          }
          else
          {
LABEL_317:
            v325 = sub_AEB880(v316, System_Collections_IEnumerator_TypeInfo, 0LL, v315);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v325)(v316, *(_QWORD *)(v325 + 8)) & 1) == 0 )
            break;
          v327 = *(_QWORD *)v316;
          if ( *(_WORD *)(*(_QWORD *)v316 + 298LL) )
          {
            v328 = 0LL;
            v329 = (int *)(*(_QWORD *)(v327 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v329 - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
            {
              ++v328;
              v329 += 4;
              if ( v328 >= *(unsigned __int16 *)(*(_QWORD *)v316 + 298LL) )
                goto LABEL_324;
            }
            v330 = v327 + 16LL * *v329 + 312;
          }
          else
          {
LABEL_324:
            v330 = sub_AEB880(v316, System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, 0LL, v326);
          }
          v332 = (BattleServantData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v330)(v316, *(_QWORD *)(v330 + 8));
          if ( !*v383 )
            sub_B52A5C(0LL, v331);
          v320 = BattleServantData__getAttackSideEffectBuffList_21147200(*v383, v306, *v384, v332, 0LL);
          v333 = v320;
          if ( !v320 )
            sub_B52A5C(0LL, v321);
          v317 = *(_QWORD *)&v320->max_length;
          if ( (int)v317 >= 1 )
          {
            v318 = 0LL;
            do
            {
              if ( v318 >= (unsigned int)v317 )
              {
                v303 = sub_B52A88(v320);
                sub_B52A28(v303, 0LL);
              }
              v319 = this->fields.logicfunction;
              if ( !v319 )
                sub_B52A5C(0LL, v321);
              BattleLogicFunction__SetSideEffectBuff(
                v319,
                MasterData_WarQuestSelectionMaster,
                *v32,
                v333->m_Items[v318],
                (BattleLogicFunction_CommonSideEffectFunctionArgument_o *)v157,
                1,
                0LL);
              LODWORD(v317) = v333->max_length;
              ++v318;
            }
            while ( (__int64)v318 < (int)v317 );
          }
        }
        v134 = v383;
        *((_DWORD *)&v386[1].fields.list + v387++) = 1790;
        v334 = *(_QWORD *)v316;
        if ( *(_WORD *)(*(_QWORD *)v316 + 298LL) )
        {
          v335 = 0LL;
          v336 = (int *)(*(_QWORD *)(v334 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v336 - 1) != System_IDisposable_TypeInfo )
          {
            ++v335;
            v336 += 4;
            if ( v335 >= *(unsigned __int16 *)(*(_QWORD *)v316 + 298LL) )
              goto LABEL_334;
          }
          v337 = v334 + 16LL * *v336 + 312;
        }
        else
        {
LABEL_334:
          v337 = sub_AEB880(v316, System_IDisposable_TypeInfo, 0LL, v326);
        }
        ActorId = (*(__int64 (__fastcall **)(__int64, _QWORD))v337)(v316, *(_QWORD *)(v337 + 8));
        if ( v387 && *((_DWORD *)&v386[0].fields.current + v387 + 1) == 1790 )
          --v387;
        v271 = v380;
        ++v302;
        LODWORD(v273) = *(_DWORD *)(v380 + 24);
        if ( (__int64)v302 >= (int)v273 )
          goto LABEL_341;
      }
      goto LABEL_398;
    }
  }
LABEL_341:
  ActorId = (__int64)System_Func_bool__object___Invoke(
                       v379,
                       0,
                       (const MethodInfo_2782554 *)Method_System_Func_bool__IEnumerable_BattleServantData___Invoke__);
  if ( !ActorId )
    goto LABEL_397;
  v339 = *(_QWORD *)ActorId;
  v340 = ActorId;
  if ( *(_WORD *)(*(_QWORD *)ActorId + 298LL) )
  {
    v341 = 0LL;
    v342 = (int *)(*(_QWORD *)(v339 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)v342 - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
    {
      ++v341;
      v342 += 4;
      if ( v341 >= *(unsigned __int16 *)(*(_QWORD *)ActorId + 298LL) )
        goto LABEL_346;
    }
    v343 = v339 + 16LL * *v342 + 312;
  }
  else
  {
LABEL_346:
    v343 = sub_AEB880(ActorId, System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, 0LL, v338);
  }
  v346 = (*(__int64 (__fastcall **)(__int64, _QWORD))v343)(v340, *(_QWORD *)(v343 + 8));
  if ( !v346 )
    sub_B52A5C(0LL, v344);
  while ( 1 )
  {
    v347 = *(_QWORD *)v346;
    if ( *(_WORD *)(*(_QWORD *)v346 + 298LL) )
    {
      v348 = 0LL;
      v349 = (int *)(*(_QWORD *)(v347 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v349 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v348;
        v349 += 4;
        if ( v348 >= *(unsigned __int16 *)(*(_QWORD *)v346 + 298LL) )
          goto LABEL_353;
      }
      v350 = v347 + 16LL * *v349 + 312;
    }
    else
    {
LABEL_353:
      v350 = sub_AEB880(v346, System_Collections_IEnumerator_TypeInfo, 0LL, v345);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v350)(v346, *(_QWORD *)(v350 + 8)) & 1) == 0 )
      break;
    v352 = *(_QWORD *)v346;
    if ( *(_WORD *)(*(_QWORD *)v346 + 298LL) )
    {
      v353 = 0LL;
      v354 = (int *)(*(_QWORD *)(v352 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v354 - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
      {
        ++v353;
        v354 += 4;
        if ( v353 >= *(unsigned __int16 *)(*(_QWORD *)v346 + 298LL) )
          goto LABEL_360;
      }
      v355 = v352 + 16LL * *v354 + 312;
    }
    else
    {
LABEL_360:
      v355 = sub_AEB880(v346, System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, 0LL, v351);
    }
    v356 = (*(__int64 (__fastcall **)(__int64, _QWORD))v355)(v346, *(_QWORD *)(v355 + 8));
    if ( !*v134 )
      sub_B52A5C(v356, v357);
    if ( !v356 )
      sub_B52A5C(0LL, v357);
    if ( !this->fields.logic )
      sub_B52A5C(v356, v357);
    BattleLogic__setDamageSideEffect(
      this->fields.logic,
      *v32,
      (*v134)->fields.uniqueId,
      *(_DWORD *)(v356 + 24),
      *v384,
      0LL);
  }
  *((_DWORD *)&v386[1].fields.list + v387++) = 1898;
  v358 = *(_QWORD *)v346;
  if ( *(_WORD *)(*(_QWORD *)v346 + 298LL) )
  {
    v359 = 0LL;
    v360 = (int *)(*(_QWORD *)(v358 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v360 - 1) != System_IDisposable_TypeInfo )
    {
      ++v359;
      v360 += 4;
      if ( v359 >= *(unsigned __int16 *)(*(_QWORD *)v346 + 298LL) )
        goto LABEL_371;
    }
    v361 = v358 + 16LL * *v360 + 312;
  }
  else
  {
LABEL_371:
    v361 = sub_AEB880(v346, System_IDisposable_TypeInfo, 0LL, v351);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v361)(v346, *(_QWORD *)(v361 + 8));
  if ( v387 && *((_DWORD *)&v386[0].fields.current + v387 + 1) == 1898 )
    --v387;
  ActorId = *v371;
  if ( !*v371 )
    goto LABEL_397;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    v386,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ActorId,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
  v388 = v386[0];
  while ( 1 )
  {
    v362 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
             &v388,
             (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    if ( !v362 )
      break;
    current = v388.fields.current;
    if ( !v388.fields.current )
      sub_B52A5C(v362, v363);
    monitor = v388.fields.current[47].monitor;
    if ( !monitor )
      sub_B52A5C(v362, v363);
    monitor[152] = 0;
    if ( v372->fields.isCanCounterTask )
    {
      if ( !*v134 )
        sub_B52A5C(v362, v363);
      v366 = this->fields.data;
      if ( !v366 )
        sub_B52A5C(0LL, v363);
      BattleData__SetWasAttackTargetId(v366, (*v134)->fields.uniqueId, (int32_t)current[1].monitor, 0LL);
    }
  }
  *((_DWORD *)&v386[1].fields.list + v387++) = 1997;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v388,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
  if ( v387 && *((_DWORD *)&v386[0].fields.current + v387 + 1) == 1997 )
    --v387;
  ActorId = *v373;
  if ( !*v373 )
    goto LABEL_397;
  ActorId = (__int64)System_Func_string__string___Invoke(
                       (System_Func_string__string__o *)ActorId,
                       (System_String_o *)optSvt,
                       (const MethodInfo_2BCA81C *)Method_System_Func_BattleServantData__BattleServantData__Invoke__);
  if ( !*v32
    || ((*v32)->fields.isForcedSpeedOne = v372->fields.isForcedSpeedOne, !*v32)
    || ((*v32)->fields.isAllAttack = AttackType == 2, !*v134)
    || (ActorId = (__int64)this->fields.data) == 0
    || (BattleData__setCommandAttack((BattleData_o *)ActorId, (*v134)->fields.uniqueId, v374, 0LL),
        (ActorId = (__int64)this->fields.logic) == 0)
    || (BattleLogic__checkUsedBuff((BattleLogic_o *)ActorId, 0LL), (ActorId = (__int64)this->fields.logic) == 0) )
  {
LABEL_397:
    sub_B52A5C(ActorId, v9);
  }
  BattleLogic__updateConditionsBuffAll((BattleLogic_o *)ActorId, 0LL);
  return *v32;
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
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Int32_array **v18; // x1

  if ( (byte_42B3262 & 1) == 0 )
  {
    sub_B52984(&BattleActionData_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_8850/*"MOTION_DO_NOT_ACT"*/);
    byte_42B3262 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_17;
  BattleData__setCommandAttack(data, 0, 0, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_17;
  BattleData__ResetWasAttackTargetId(data, 0LL);
  logic = this->fields.logic;
  if ( !logic )
    goto LABEL_17;
  perf = logic->fields.perf;
  if ( !perf )
    goto LABEL_17;
  effectcontrol = perf->fields.effectcontrol;
  if ( !effectcontrol )
    goto LABEL_17;
  DoNotActByCommandSealedObject_k__BackingField = (UnityEngine_Object_o *)effectcontrol->fields._DoNotActByCommandSealedObject_k__BackingField;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v10 = UnityEngine_Object__op_Equality(DoNotActByCommandSealedObject_k__BackingField, 0LL, 0LL);
  v11 = 0LL;
  if ( !v10 )
  {
    v11 = sub_B52A54(BattleActionData_TypeInfo);
    BattleActionData___ctor((BattleActionData_o *)v11, 0LL);
    if ( task )
    {
      data = (BattleData_o *)BattleLogicTask__getActorId(task, (const MethodInfo *)task);
      if ( v11 )
      {
        *(_DWORD *)(v11 + 32) = (_DWORD)data;
        v18 = (System_Int32_array **)StringLiteral_8850/*"MOTION_DO_NOT_ACT"*/;
        *(_QWORD *)(v11 + 64) = StringLiteral_8850/*"MOTION_DO_NOT_ACT"*/;
        sub_B52920((BattleServantConfConponent_o *)(v11 + 64), v18, v12, v13, v14, v15, v16, v17);
        data = (BattleData_o *)task->fields.command;
        if ( data )
        {
          *(_DWORD *)(v11 + 60) = BattleCommandData__get_type((BattleCommandData_o *)data, 0LL);
          return (BattleActionData_o *)v11;
        }
      }
    }
LABEL_17:
    sub_B52A5C(data, task);
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

  if ( (byte_42B3261 & 1) == 0 )
  {
    sub_B52984(&ProgressIntervalTurnActionData_TypeInfo);
    byte_42B3261 = 1;
  }
  v4 = (ProgressIntervalTurnActionData_o *)sub_B52A54(ProgressIntervalTurnActionData_TypeInfo);
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
    sub_B52A5C(data, v5);
  return BattleLogic__PrevReturnCreateActionData((BattleLogic_o *)data, 0LL, (BattleActionData_o *)v4, 0LL);
}


BattleActionData_o *__fastcall BattleLogicNomal__DeadChangePos(BattleLogicNomal_o *this, const MethodInfo *method)
{
  BattleData_o *data; // x0
  struct BattleData_o *v4; // x8
  BattleServantData_o *v5; // x19
  __int64 v6; // x22
  int v7; // w22
  System_Int32_array **v8; // x21
  UnityEngine_Object_o *PartsActor; // x23
  struct BattleData_o *v10; // x8
  UnityEngine_Object_o *v11; // x22
  struct BattleData_o *v12; // x8
  int32_t m_CachedPtr; // w9
  __int64 *v14; // x10
  UnityEngine_Object_o *v15; // x22
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_42B3257 & 1) == 0 )
  {
    sub_B52984(&BattleActionData_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_6411/*"FOCUS_UNDER"*/);
    sub_B52984(&StringLiteral_6409/*"FOCUS_CENTER"*/);
    sub_B52984(&StringLiteral_6413/*"FOCUS_UP"*/);
    byte_42B3257 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_45;
  data = (BattleData_o *)BattleData__getServantData(data, data->fields.justDeadTargetId, 0LL);
  v4 = this->fields.data;
  if ( !v4 )
    goto LABEL_45;
  v5 = (BattleServantData_o *)data;
  v4->fields.justDeadTargetId = -1;
  if ( !data )
    return 0LL;
  if ( BattleServantData__isMultiTargetUp((BattleServantData_o *)data, 0LL)
    || (v6 = 0LL, BattleServantData__isMultiTargetUnder(v5, 0LL)) )
  {
    data = (BattleData_o *)BattleServantData__getMultiTargetBattleDeadChangePos(v5, 0LL);
    if ( !this->fields.data )
      goto LABEL_45;
    v7 = (int)data;
    v8 = (System_Int32_array **)StringLiteral_6409/*"FOCUS_CENTER"*/;
    PartsActor = (UnityEngine_Object_o *)BattleData__GetPartsActor(this->fields.data, 1, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    data = (BattleData_o *)UnityEngine_Object__op_Inequality(PartsActor, 0LL, 0LL);
    if ( ((unsigned __int8)data & 1) != 0 )
    {
      if ( !PartsActor )
        goto LABEL_45;
      data = (BattleData_o *)PartsActor[18].monitor;
      if ( !data )
        goto LABEL_45;
      data = (BattleData_o *)BattleServantData__isAlive((BattleServantData_o *)data, 0, 0LL);
      if ( ((unsigned __int8)data & 1) != 0 )
      {
        v10 = this->fields.data;
        if ( !v10 )
          goto LABEL_45;
        v8 = (System_Int32_array **)StringLiteral_6409/*"FOCUS_CENTER"*/;
        v10->fields.globaltargetId = PartsActor[18].fields.m_CachedPtr;
      }
    }
    if ( v7 == 2 )
    {
      data = this->fields.data;
      if ( !data )
        goto LABEL_45;
      v15 = (UnityEngine_Object_o *)BattleData__GetPartsActor(data, 2, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      data = (BattleData_o *)UnityEngine_Object__op_Inequality(v15, 0LL, 0LL);
      if ( ((unsigned __int8)data & 1) == 0 )
        goto LABEL_42;
      if ( !v15 )
        goto LABEL_45;
      data = (BattleData_o *)v15[18].monitor;
      if ( !data )
        goto LABEL_45;
      data = (BattleData_o *)BattleServantData__isAlive((BattleServantData_o *)data, 0, 0LL);
      if ( ((unsigned __int8)data & 1) == 0 )
        goto LABEL_42;
      v12 = this->fields.data;
      if ( !v12 )
        goto LABEL_45;
      m_CachedPtr = v15[18].fields.m_CachedPtr;
      v14 = &StringLiteral_6411/*"FOCUS_UNDER"*/;
    }
    else
    {
      if ( v7 )
        goto LABEL_42;
      data = this->fields.data;
      if ( !data )
        goto LABEL_45;
      v11 = (UnityEngine_Object_o *)BattleData__GetPartsActor(data, 0, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      data = (BattleData_o *)UnityEngine_Object__op_Inequality(v11, 0LL, 0LL);
      if ( ((unsigned __int8)data & 1) == 0 )
        goto LABEL_42;
      if ( !v11 )
        goto LABEL_45;
      data = (BattleData_o *)v11[18].monitor;
      if ( !data )
        goto LABEL_45;
      data = (BattleData_o *)BattleServantData__isAlive((BattleServantData_o *)data, 0, 0LL);
      if ( ((unsigned __int8)data & 1) == 0 )
        goto LABEL_42;
      v12 = this->fields.data;
      if ( !v12 )
        goto LABEL_45;
      m_CachedPtr = v11[18].fields.m_CachedPtr;
      v14 = &StringLiteral_6413/*"FOCUS_UP"*/;
    }
    v8 = (System_Int32_array **)*v14;
    v12->fields.globaltargetId = m_CachedPtr;
LABEL_42:
    v6 = sub_B52A54(BattleActionData_TypeInfo);
    BattleActionData___ctor((BattleActionData_o *)v6, 0LL);
    if ( v6 )
    {
      *(_DWORD *)(v6 + 32) = v5->fields.uniqueId;
      *(_DWORD *)(v6 + 36) = v5->fields.uniqueId;
      BattleActionData__setStateField((BattleActionData_o *)v6, 0LL);
      *(_QWORD *)(v6 + 64) = v8;
      sub_B52920((BattleServantConfConponent_o *)(v6 + 64), v8, v16, v17, v18, v19, v20, v21);
      return (BattleActionData_o *)v6;
    }
LABEL_45:
    sub_B52A5C(data, method);
  }
  return (BattleActionData_o *)v6;
}


System_Collections_Generic_List_BattleBuffData_BuffData__o *__fastcall BattleLogicNomal__GetTargetCommandCodeBuffList(
        BattleLogicNomal_o *this,
        System_Collections_Generic_Dictionary_BuffList_TYPE__List_BattleBuffData_BuffData___o *passiveBuffDict,
        BattleBuffData_o *actSvtBuffData,
        int32_t type,
        BattleCommandData_o *command,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x19
  BattleBuffData_BuffData_array *CommandCardBuffArray; // x0
  __int64 v12; // x1
  BattleLogicNomal___c_c *v13; // x0
  struct BattleLogicNomal___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__18_0; // x20
  Il2CppObject *v16; // x21
  struct BattleLogicNomal___c_StaticFields *v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Collections_Generic_List_BattleBuffData_BuffData__o *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42B324F & 1) == 0 )
  {
    sub_B52984(&Method_System_Comparison_BattleBuffData_BuffData___ctor__);
    sub_B52984(&System_Comparison_BattleBuffData_BuffData__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_BuffList_TYPE__List_BattleBuffData_BuffData___TryGetValue__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Sort__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
    sub_B52984(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
    sub_B52984(&Method_BattleLogicNomal___c__GetTargetCommandCodeBuffList_b__18_0__);
    sub_B52984(&BattleLogicNomal___c_TypeInfo);
    byte_42B324F = 1;
  }
  value = 0LL;
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  if ( !passiveBuffDict )
    goto LABEL_18;
  CommandCardBuffArray = (BattleBuffData_BuffData_array *)System_Collections_Generic_Dictionary_BuffList_TYPE__List_BattleBuffData_BuffData____TryGetValue(
                                                            passiveBuffDict,
                                                            type,
                                                            &value,
                                                            (const MethodInfo_2F412C4 *)Method_System_Collections_Generic_Dictionary_BuffList_TYPE__List_BattleBuffData_BuffData___TryGetValue__);
  if ( ((unsigned __int8)CommandCardBuffArray & 1) != 0 )
  {
    if ( !v10 )
      goto LABEL_18;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v10,
      (System_Collections_Generic_IEnumerable_T__o *)value,
      (const MethodInfo_2FF1854 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  }
  if ( !actSvtBuffData
    || (CommandCardBuffArray = BattleBuffData__GetCommandCardBuffArray(actSvtBuffData, command, type, 0LL), !v10) )
  {
LABEL_18:
    sub_B52A5C(CommandCardBuffArray, v12);
  }
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v10,
    (System_Collections_Generic_IEnumerable_T__o *)CommandCardBuffArray,
    (const MethodInfo_2FF1854 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  v13 = BattleLogicNomal___c_TypeInfo;
  if ( (BYTE3(BattleLogicNomal___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleLogicNomal___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo);
    v13 = BattleLogicNomal___c_TypeInfo;
  }
  static_fields = v13->static_fields;
  _9__18_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__18_0;
  if ( !_9__18_0 )
  {
    if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      static_fields = BattleLogicNomal___c_TypeInfo->static_fields;
    }
    v16 = (Il2CppObject *)static_fields->__9;
    _9__18_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B52A54(System_Comparison_BattleBuffData_BuffData__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__18_0,
      v16,
      Method_BattleLogicNomal___c__GetTargetCommandCodeBuffList_b__18_0__,
      (const MethodInfo_2483370 *)Method_System_Comparison_BattleBuffData_BuffData___ctor__);
    v17 = BattleLogicNomal___c_TypeInfo->static_fields;
    v17->__9__18_0 = (struct System_Comparison_BattleBuffData_BuffData__o *)_9__18_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v17->__9__18_0,
      (System_Int32_array **)_9__18_0,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
  }
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v10,
    (System_Comparison_T__o *)_9__18_0,
    (const MethodInfo_2FF36E0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Sort__);
  return (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v10;
}


void __fastcall BattleLogicNomal__SetNextTargetId(BattleLogicNomal_o *this, const MethodInfo *method)
{
  BattleData_o *data; // x0
  int32_t justDeadTargetId; // w1
  BattleServantData_o *ServantData; // x0
  UnityEngine_Object_o *PartsActor; // x20
  struct BattleData_o *v7; // x8

  if ( (byte_42B3259 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B3259 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_18;
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
          goto LABEL_18;
        PartsActor = (UnityEngine_Object_o *)BattleData__GetPartsActor(this->fields.data, (int32_t)data, 0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        data = (BattleData_o *)UnityEngine_Object__op_Inequality(PartsActor, 0LL, 0LL);
        if ( ((unsigned __int8)data & 1) != 0 )
        {
          if ( PartsActor )
          {
            data = (BattleData_o *)PartsActor[18].monitor;
            if ( data )
            {
              data = (BattleData_o *)BattleServantData__isAlive((BattleServantData_o *)data, 0, 0LL);
              if ( ((unsigned __int8)data & 1) == 0 )
                return;
              v7 = this->fields.data;
              if ( v7 )
              {
                v7->fields.globaltargetId = PartsActor[18].fields.m_CachedPtr;
                return;
              }
            }
          }
LABEL_18:
          sub_B52A5C(data, method);
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
  _QWORD **v7; // x22
  __int64 v8; // x21
  __int16 v9; // w8
  __int64 v10; // x21
  __int64 v11; // x21
  __int64 v12; // x21
  _QWORD **v13; // x22
  __int64 v14; // x20
  __int16 v15; // w8
  __int64 v16; // x20
  __int64 v17; // x20
  __int64 v18; // x20
  struct BattleData_o *v19; // x8

  v3 = (System_Collections_Generic_IEnumerable_TSource__o *)prevFieldIndiv;
  if ( (byte_42B325A & 1) == 0 )
  {
    sub_B52984(&Method_System_Array_Empty_int___);
    sub_B52984(&Method_System_Linq_Enumerable_SequenceEqual_int___);
    byte_42B325A = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_36;
  QuestIndividualities = (System_Collections_Generic_IEnumerable_TSource__o *)BattleData__getQuestIndividualities(
                                                                                data,
                                                                                0LL);
  if ( QuestIndividualities )
  {
    if ( v3 )
      goto LABEL_31;
    goto LABEL_19;
  }
  v7 = (_QWORD **)Method_System_Array_Empty_int___;
  v8 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
  v9 = *(_WORD *)(v8 + 306);
  if ( (v9 & 1) == 0 )
  {
    sub_AEB684(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
    v9 = *(_WORD *)(v8 + 306);
  }
  if ( (v9 & 0x400) != 0 )
  {
    v10 = *v7[6];
    if ( (*(_BYTE *)(v10 + 306) & 1) == 0 )
      sub_AEB684(*v7[6]);
    if ( !*(_DWORD *)(v10 + 224) )
    {
      v11 = *v7[6];
      if ( (*(_BYTE *)(v11 + 306) & 1) == 0 )
        sub_AEB684(*v7[6]);
      j_il2cpp_runtime_class_init_0(v11);
    }
  }
  v12 = *v7[6];
  if ( (*(_BYTE *)(v12 + 306) & 1) == 0 )
    sub_AEB684(*v7[6]);
  QuestIndividualities = **(System_Collections_Generic_IEnumerable_TSource__o ***)(v12 + 184);
  if ( !v3 )
  {
LABEL_19:
    v13 = (_QWORD **)Method_System_Array_Empty_int___;
    v14 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
    v15 = *(_WORD *)(v14 + 306);
    if ( (v15 & 1) == 0 )
    {
      sub_AEB684(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
      v15 = *(_WORD *)(v14 + 306);
    }
    if ( (v15 & 0x400) != 0 )
    {
      v16 = *v13[6];
      if ( (*(_BYTE *)(v16 + 306) & 1) == 0 )
        sub_AEB684(*v13[6]);
      if ( !*(_DWORD *)(v16 + 224) )
      {
        v17 = *v13[6];
        if ( (*(_BYTE *)(v17 + 306) & 1) == 0 )
          sub_AEB684(*v13[6]);
        j_il2cpp_runtime_class_init_0(v17);
      }
    }
    v18 = *v13[6];
    if ( (*(_BYTE *)(v18 + 306) & 1) == 0 )
      sub_AEB684(*v13[6]);
    v3 = **(System_Collections_Generic_IEnumerable_TSource__o ***)(v18 + 184);
  }
LABEL_31:
  if ( System_Linq_Enumerable__SequenceEqual_int_(
         QuestIndividualities,
         v3,
         (const MethodInfo_1B6BA88 *)Method_System_Linq_Enumerable_SequenceEqual_int___) )
  {
    return;
  }
  data = (BattleData_o *)this->fields.logic;
  if ( !data
    || (BattleLogic__updateConditionsBuffAll((BattleLogic_o *)data, 0LL), (v19 = this->fields.data) == 0LL)
    || (data = (BattleData_o *)v19->fields.perf) == 0LL )
  {
LABEL_36:
    sub_B52A5C(data, prevFieldIndiv);
  }
  BattlePerformance__updateStatus((BattlePerformance_o *)data, 0LL);
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
    sub_B52A5C(data, method);
  SelectCommand = BattleData__getSelectCommand(data, this->fields.commandIndex + 1, 0LL);
  if ( !SelectCommand )
    return 1;
  v6 = SelectCommand;
  if ( BattleCommandData__isTreasureDvc(SelectCommand, 0LL) || BattleCommandData__IsAllAttack(v6, 0LL) )
    return 0;
  return v4->fields.uniqueId == v6->fields.uniqueId;
}


BattleLogicTask_array *__fastcall BattleLogicNomal__checkReflectionTask(
        BattleLogicNomal_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v6; // x20
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
  __int64 v20; // x24
  const MethodInfo *v21; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  BattleLogic_o *logic; // x25
  __int64 v29; // x26
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  __int64 v37; // x0
  __int64 v38; // x0
  bool isFirstAdd; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_42B325E & 1) == 0 )
  {
    sub_B52984(&BattleLogicTask___TypeInfo);
    sub_B52984(&BattleLogicTask_TypeInfo);
    sub_B52984(&BattleSkillInfoData_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_B52984(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_B52984(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B325E = 1;
  }
  isFirstAdd = 0;
  v6 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v6,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  if ( ltype == 40 )
  {
    Instance = (__int64)this->fields.data;
    if ( !Instance )
      goto LABEL_40;
    Instance = (__int64)BattleData__getFieldEnemyServantList((BattleData_o *)Instance, 1, 0LL);
  }
  else
  {
    if ( ltype != 41 )
      goto LABEL_40;
    Instance = (__int64)this->fields.data;
    if ( !Instance )
      goto LABEL_40;
    Instance = (__int64)BattleData__getFieldPlayerServantList((BattleData_o *)Instance, 0LL);
  }
  v9 = Instance;
  if ( !Instance )
    goto LABEL_40;
  v10 = *(_DWORD *)(Instance + 24);
  if ( v10 >= 1 )
  {
    v11 = 0;
    do
    {
      if ( v11 >= v10 )
        goto LABEL_41;
      v12 = *(BattleServantData_o **)(v9 + 8LL * (int)v11 + 32);
      if ( !v12 )
        goto LABEL_40;
      if ( !v12->fields.status )
      {
        Instance = BattleServantData__isAlive(v12, 0, 0LL);
        if ( (Instance & 1) != 0 )
        {
          Instance = (__int64)BattleServantData__getReflectionEffect(v12, 0LL);
          isFirstAdd = 1;
          if ( !Instance )
            goto LABEL_40;
          max_length = *(_DWORD *)(Instance + 24);
          v14 = (BattleBuffData_BuffData_array *)Instance;
          if ( max_length >= 1 )
          {
            v15 = 0;
            while ( v15 < max_length )
            {
              v16 = v14->m_Items[v15];
              v17 = (BattleSkillInfoData_o *)sub_B52A54(BattleSkillInfoData_TypeInfo);
              BattleSkillInfoData___ctor(v17, 0LL);
              if ( !v17 )
                goto LABEL_40;
              v17->fields.svtUniqueId = v12->fields.uniqueId;
              if ( !v16 )
                goto LABEL_40;
              vals = v16->fields.vals;
              if ( !vals )
                goto LABEL_40;
              if ( !vals->max_length )
                break;
              Instance = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))v17->klass->vtable._4_set_skillId.method)(
                           v17,
                           (unsigned int)vals->m_Items[1],
                           v17->klass->vtable._5_get_skillId.methodPtr);
              v19 = v16->fields.vals;
              if ( !v19 )
                goto LABEL_40;
              if ( v19->max_length <= 1 )
                break;
              v17->fields.skilllv = v19->m_Items[2];
              v20 = sub_B52A54(BattleLogicTask_TypeInfo);
              BattleLogicTask___ctor((BattleLogicTask_o *)v20, v21);
              if ( !v20 )
                goto LABEL_40;
              *(_QWORD *)(v20 + 72) = v17;
              *(_DWORD *)(v20 + 48) = 25;
              sub_B52920(
                (BattleServantConfConponent_o *)(v20 + 72),
                (System_Int32_array **)v17,
                v22,
                v23,
                v24,
                v25,
                v26,
                v27);
              *(_BYTE *)(v20 + 80) = 0;
              logic = this->fields.logic;
              Instance = sub_B5299C(BattleLogicTask___TypeInfo, 1LL);
              if ( !Instance )
                goto LABEL_40;
              v29 = Instance;
              Instance = sub_B52A44(v20, *(_QWORD *)(*(_QWORD *)Instance + 64LL));
              if ( !Instance )
              {
                v38 = sub_B52A7C(0LL);
                sub_B52A28(v38, 0LL);
              }
              if ( !*(_DWORD *)(v29 + 24) )
                break;
              *(_QWORD *)(v29 + 32) = v20;
              sub_B52920(
                (BattleServantConfConponent_o *)(v29 + 32),
                (System_Int32_array **)v20,
                v30,
                v31,
                v32,
                v33,
                v34,
                v35);
              if ( !logic )
                goto LABEL_40;
              BattleLogic__SetFirstDisplayTriggerIntervalBuffArray(
                logic,
                &isFirstAdd,
                v12,
                v14,
                (BattleLogicTask_array *)v29,
                0LL);
              if ( !v6 )
                goto LABEL_40;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v6,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v20,
                (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
              max_length = v14->max_length;
              if ( (int)++v15 >= max_length )
                goto LABEL_34;
            }
LABEL_41:
            v37 = sub_B52A88(Instance);
            sub_B52A28(v37, 0LL);
          }
LABEL_34:
          Instance = (__int64)v12->fields.buffData;
          if ( !Instance )
            goto LABEL_40;
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
LABEL_40:
    sub_B52A5C(Instance, v8);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v6,
                                    (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  BattleLogicNomal_o *v15; // x25
  int v16; // w19
  int v17; // w9
  _BOOL8 v18; // x0
  __int64 v19; // x1
  BattleBuffData_BuffData_o *current; // x27
  _BOOL8 IsEnableCommandCode; // x0
  __int64 v22; // x1
  __int64 v23; // x0
  __int64 v24; // x1
  struct System_Int32_array *vals; // x8
  il2cpp_array_size_t max_length; // w9
  SkillLvEntity_o *Entity; // x0
  __int64 v28; // x1
  SkillLvEntity_o *v29; // x26
  BattleLogicFunction_o *logicfunction; // x27
  int v31; // w23
  BattleLogicFunction_FunctionArgument_o *argument; // x19
  BattleLogicNomal_o *v33; // x21
  BattleActionData_o *v34; // x25
  BattleActionData_o *SideEffectActionData; // x0
  System_Int32_array *funcId; // x20
  BattleActionData_o *v37; // x28
  DataVals_array *DataValsList; // x0
  __int64 v39; // x1
  BattleLogicFunction_o *v40; // x0
  __int64 v41; // x0
  __int64 v42; // x0
  SkillLvMaster_o *v43; // [xsp+38h] [xbp-98h]
  int32_t type; // [xsp+40h] [xbp-90h]
  _BOOL4 v45; // [xsp+44h] [xbp-8Ch]
  System_Collections_Generic_List_Enumerator_T__o v46; // [xsp+48h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v47; // [xsp+60h] [xbp-70h] BYREF

  v15 = this;
  v45 = isCommandAfter;
  if ( (byte_42B3263 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__);
    this = (BattleLogicNomal_o *)sub_B52984(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
    byte_42B3263 = 1;
  }
  memset(&v47, 0, sizeof(v47));
  if ( !commandCodeBuffList )
    sub_B52A5C(this, checkInvokeBuff);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v46,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)commandCodeBuffList,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  v16 = arg == 0LL || !v45;
  if ( v45 )
    v17 = 1;
  else
    v17 = 3;
  type = v17;
  v47 = v46;
  v43 = skillLvMst;
  while ( 1 )
  {
    v18 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v47,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v18 )
      break;
    if ( !command )
      sub_B52A5C(v18, v19);
    current = (BattleBuffData_BuffData_o *)v47.fields.current;
    IsEnableCommandCode = BattleCommandData__IsEnableCommandCode(command, 0LL);
    if ( !IsEnableCommandCode )
    {
      if ( !current )
        sub_B52A5C(IsEnableCommandCode, v22);
      IsEnableCommandCode = BattleBuffData_BuffData__isEnableCommandCardBuff(current, command, 0LL);
      if ( !IsEnableCommandCode )
      {
        IsEnableCommandCode = BattleCommandData__IsEnableCommandAssist(command, 0LL);
        if ( !IsEnableCommandCode )
          continue;
      }
    }
    if ( !checkInvokeBuff )
      sub_B52A5C(IsEnableCommandCode, v22);
    v23 = ((__int64 (__fastcall *)(BattleBuffData_CheckInvokeBuff_o *, BattleBuffData_BuffData_o *, BattleCommandData_o *, void *))checkInvokeBuff->klass->vtable._4_IsInvoke.method)(
            checkInvokeBuff,
            current,
            command,
            checkInvokeBuff->klass[1]._1.image);
    if ( (v23 & 1) != 0 )
    {
      if ( (v16 & 1) != 0 )
      {
        if ( !current )
          sub_B52A5C(v23, v24);
        vals = current->fields.vals;
        if ( !vals )
          sub_B52A5C(v23, v24);
        max_length = vals->max_length;
        if ( !max_length )
        {
          v41 = sub_B52A88(v23);
          sub_B52A28(v41, 0LL);
        }
        if ( max_length == 1 )
        {
          v42 = sub_B52A88(v23);
          sub_B52A28(v42, 0LL);
        }
        if ( !skillLvMst )
          sub_B52A5C(v23, v24);
        Entity = SkillLvMaster__GetEntity(skillLvMst, vals->m_Items[1], vals->m_Items[2], 0LL);
        v29 = Entity;
        if ( Entity )
        {
          if ( !arg )
            sub_B52A5C(Entity, v28);
          arg->fields.buffUniqueId = current->fields.addOrder;
          if ( !actionData )
            sub_B52A5C(Entity, v28);
          logicfunction = v15->fields.logicfunction;
          v31 = v16;
          argument = (BattleLogicFunction_FunctionArgument_o *)arg;
          v33 = v15;
          v34 = actionData;
          SideEffectActionData = BattleActionData__MakeSideEffectActionData(actionData, type, 0LL);
          funcId = v29->fields.funcId;
          v37 = SideEffectActionData;
          DataValsList = SkillLvEntity__getDataValsList(v29, 0LL);
          if ( !logicfunction )
            sub_B52A5C(DataValsList, v39);
          BattleLogicFunction__procList(
            logicfunction,
            v37,
            funcId,
            DataValsList,
            0,
            0,
            v45,
            0,
            0,
            0,
            0,
            argument,
            0,
            0LL);
          arg = (BattleLogicFunction_AttackSideEffectFunctionArgument_o *)argument;
          v16 = v31;
          actionData = v34;
          v15 = v33;
          skillLvMst = v43;
        }
      }
      else
      {
        v40 = v15->fields.logicfunction;
        if ( !v40 )
          sub_B52A5C(0LL, v24);
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
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v47,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
}


BattleActionData_o *__fastcall BattleLogicNomal__createBackStep(
        BattleLogicNomal_o *this,
        int32_t uniqueId,
        const MethodInfo *method)
{
  __int64 v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_Int32_array **v13; // x1

  if ( (byte_42B3251 & 1) == 0 )
  {
    sub_B52984(&BattleActionData_TypeInfo);
    sub_B52984(&StringLiteral_8842/*"MOTION_BACK"*/);
    byte_42B3251 = 1;
  }
  v4 = sub_B52A54(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v4, 0LL);
  if ( !v4 )
    sub_B52A5C(v5, v6);
  *(_DWORD *)(v4 + 32) = uniqueId;
  v13 = (System_Int32_array **)StringLiteral_8842/*"MOTION_BACK"*/;
  *(_QWORD *)(v4 + 64) = StringLiteral_8842/*"MOTION_BACK"*/;
  sub_B52920((BattleServantConfConponent_o *)(v4 + 64), v13, v7, v8, v9, v10, v11, v12);
  return (BattleActionData_o *)v4;
}


BattleActionData_o *__fastcall BattleLogicNomal__createBuffAddEnemy(
        BattleLogicNomal_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  BattleData_o *data; // x0
  struct PlayMakerFSM_o *rootfsm; // x8
  BattleData_o *v6; // x20
  unsigned __int64 v7; // x22
  struct PlayMakerFSM_o **p_fsm; // x23
  struct BattleData_o *v9; // x9
  int32_t v10; // w21
  __int64 v12; // x0

  data = this->fields.data;
  if ( !data )
    goto LABEL_21;
  data = (BattleData_o *)BattleData__getFieldEnemyServantList(data, 0, 0LL);
  if ( !data )
    goto LABEL_21;
  rootfsm = data->fields.rootfsm;
  v6 = data;
  if ( (int)rootfsm >= 1 )
  {
    v7 = 0LL;
    p_fsm = &data->fields.fsm;
    while ( 1 )
    {
      v9 = this->fields.data;
      if ( !v9 )
        break;
      if ( v7 >= (unsigned int)rootfsm )
        goto LABEL_22;
      data = (BattleData_o *)v9->fields.battleEvent;
      if ( !data )
        break;
      data = (BattleData_o *)((__int64 (__fastcall *)(BattleData_o *, struct PlayMakerFSM_o *, Il2CppClass *))data->klass[2]._1.castClass)(
                               data,
                               p_fsm[v7],
                               data->klass[2]._1.declaringType);
      if ( ((unsigned __int8)data & 1) != 0 )
      {
        if ( v7 >= LODWORD(v6->fields.rootfsm) )
          goto LABEL_22;
        data = (BattleData_o *)p_fsm[v7];
        if ( !data )
          break;
        data = (BattleData_o *)BattleServantData__getMaxHp((BattleServantData_o *)data, 0LL);
        if ( v7 >= LODWORD(v6->fields.rootfsm) )
          goto LABEL_22;
        v10 = (int)data;
        data = (BattleData_o *)p_fsm[v7];
        if ( !data )
          break;
        BattleServantData__turnBuffProgressingIncrease((BattleServantData_o *)data, 0LL);
        if ( v7 >= LODWORD(v6->fields.rootfsm) )
          goto LABEL_22;
        data = (BattleData_o *)p_fsm[v7];
        if ( !data )
          break;
        data = (BattleData_o *)BattleServantData__checkUpdateUpdownHp((BattleServantData_o *)data, v10, 1, 0LL);
        if ( ((unsigned __int8)data & 1) != 0 )
        {
          if ( v7 >= LODWORD(v6->fields.rootfsm) )
          {
LABEL_22:
            v12 = sub_B52A88(data);
            sub_B52A28(v12, 0LL);
          }
          data = (BattleData_o *)p_fsm[v7];
          if ( !data )
            break;
          BattleServantData__updateHp((BattleServantData_o *)data, 0LL);
        }
      }
      LODWORD(rootfsm) = v6->fields.rootfsm;
      if ( (__int64)++v7 >= (int)rootfsm )
        return 0LL;
    }
LABEL_21:
    sub_B52A5C(data, task);
  }
  return 0LL;
}


BattleActionData_o *__fastcall BattleLogicNomal__createBuffAddPlayer(
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
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *aiNpcDataList; // x19
  struct BattleLogicNomal___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__36_0; // x20
  Il2CppObject *v15; // x21
  struct BattleLogicNomal___c_StaticFields *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  __int64 v24; // x0

  if ( (byte_42B325D & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_AiNpcBattleServantData___ctor__);
    sub_B52984(&System_Action_AiNpcBattleServantData__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_AiNpcBattleServantData__ForEach__);
    sub_B52984(&Method_BattleLogicNomal___c__createBuffAddPlayer_b__36_0__);
    sub_B52984(&BattleLogicNomal___c_TypeInfo);
    byte_42B325D = 1;
  }
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_33;
  data = (__int64)BattleData__getFieldPlayerServantList((BattleData_o *)data, 0LL);
  if ( !data )
    goto LABEL_33;
  v5 = this->fields.data;
  v6 = *(_QWORD *)(data + 24);
  v7 = data;
  v8 = v5 == 0LL;
  if ( (int)v6 >= 1 )
  {
    v9 = 0LL;
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
        data = BattleServantData__getMaxHp((BattleServantData_o *)data, 0LL);
        if ( v9 >= *(unsigned int *)(v7 + 24) )
          goto LABEL_34;
        v11 = data;
        data = *(_QWORD *)(v10 + 8 * v9);
        if ( !data )
          break;
        BattleServantData__turnBuffProgressingIncrease((BattleServantData_o *)data, 0LL);
        if ( v9 >= *(unsigned int *)(v7 + 24) )
          goto LABEL_34;
        data = *(_QWORD *)(v10 + 8 * v9);
        if ( !data )
          break;
        data = BattleServantData__checkUpdateUpdownHp((BattleServantData_o *)data, v11, 1, 0LL);
        if ( (data & 1) != 0 )
        {
          if ( v9 >= *(unsigned int *)(v7 + 24) )
          {
LABEL_34:
            v24 = sub_B52A88(data);
            sub_B52A28(v24, 0LL);
          }
          data = *(_QWORD *)(v10 + 8 * v9);
          if ( !data )
            break;
          BattleServantData__updateHp((BattleServantData_o *)data, 0LL);
        }
      }
      v5 = this->fields.data;
      LODWORD(v6) = *(_DWORD *)(v7 + 24);
      ++v9;
      v8 = v5 == 0LL;
      if ( (__int64)v9 >= (int)v6 )
        goto LABEL_22;
    }
LABEL_33:
    sub_B52A5C(data, task);
  }
LABEL_22:
  if ( v8 )
    goto LABEL_33;
  aiNpcDataList = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v5->fields.aiNpcDataList;
  data = (__int64)BattleLogicNomal___c_TypeInfo;
  if ( (BYTE3(BattleLogicNomal___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleLogicNomal___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo);
    data = (__int64)BattleLogicNomal___c_TypeInfo;
  }
  static_fields = *(struct BattleLogicNomal___c_StaticFields **)(data + 184);
  _9__36_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__36_0;
  if ( !_9__36_0 )
  {
    if ( (*(_BYTE *)(data + 307) & 4) != 0 && !*(_DWORD *)(data + 224) )
    {
      j_il2cpp_runtime_class_init_0(data);
      static_fields = BattleLogicNomal___c_TypeInfo->static_fields;
    }
    v15 = (Il2CppObject *)static_fields->__9;
    _9__36_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B52A54(System_Action_AiNpcBattleServantData__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__36_0,
      v15,
      Method_BattleLogicNomal___c__createBuffAddPlayer_b__36_0__,
      (const MethodInfo_2627780 *)Method_System_Action_AiNpcBattleServantData___ctor__);
    v16 = BattleLogicNomal___c_TypeInfo->static_fields;
    v16->__9__36_0 = (struct System_Action_AiNpcBattleServantData__o *)_9__36_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v16->__9__36_0,
      (System_Int32_array **)_9__36_0,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
  if ( !aiNpcDataList )
    goto LABEL_33;
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    aiNpcDataList,
    (System_Action_T__o *)_9__36_0,
    (const MethodInfo_2FF231C *)Method_System_Collections_Generic_List_AiNpcBattleServantData__ForEach__);
  return 0LL;
}


BattleActionData_o *__fastcall BattleLogicNomal__createComboOrder(
        BattleLogicNomal_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 isBUSTER; // x0
  System_Int32_array **v7; // x1
  struct System_Int32_array *targetIdlist; // x23
  __int64 v9; // x21
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  int v16; // w8
  BattleServantConfConponent_o *v17; // x0
  System_Array_o *v18; // x22
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  __int64 *v25; // x8
  System_Int32_array **v26; // x1
  __int64 v27; // x8
  char v28; // w21
  unsigned __int64 v29; // x22
  System_Array_o *v31; // x22
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  __int64 v38; // x0
  System_RuntimeFieldHandle_o v39; // 0:w1.4
  System_RuntimeFieldHandle_o v40; // 0:w1.4

  if ( (byte_42B3252 & 1) == 0 )
  {
    sub_B52984(&BattleActionData_TypeInfo);
    sub_B52984(&FunctionEntity_TypeInfo);
    sub_B52984(&int___TypeInfo);
    sub_B52984(&Field__PrivateImplementationDetails__2C0F32A9C0CD29445188C9F9109E1308D5A59BD9D3C2479B8251491000F0DB36);
    sub_B52984(&Field__PrivateImplementationDetails__6E462A3A512B9CB4A6185FA60D2DAE01F4222A66EA50EDA56030DA3910331E5F);
    sub_B52984(&StringLiteral_6392/*"FIELD_PLAYER"*/);
    sub_B52984(&StringLiteral_6391/*"FIELD_ENEMY"*/);
    byte_42B3252 = 1;
  }
  v5 = sub_B52A54(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_29;
  BattleActionData__setStateField((BattleActionData_o *)v5, 0LL);
  if ( !task )
    goto LABEL_29;
  targetIdlist = task->fields.targetIdlist;
  v9 = sub_B52A54(FunctionEntity_TypeInfo);
  FunctionEntity___ctor((FunctionEntity_o *)v9, 0LL);
  if ( BattleCommand__isARTS(task->fields.ordertype, 0LL) )
  {
    BattleActionData__setTypeOrderArts((BattleActionData_o *)v5, 0LL);
    isBUSTER = sub_B5299C(int___TypeInfo, 2LL);
    if ( isBUSTER )
    {
      v16 = *(_DWORD *)(isBUSTER + 24);
      v7 = (System_Int32_array **)isBUSTER;
      if ( !v16 || (*(_DWORD *)(isBUSTER + 32) = 102, v16 == 1) )
      {
LABEL_30:
        v38 = sub_B52A88(isBUSTER);
        sub_B52A28(v38, 0LL);
      }
      *(_DWORD *)(isBUSTER + 36) = 1;
      if ( v9 )
      {
        *(_QWORD *)(v9 + 32) = isBUSTER;
        v17 = (BattleServantConfConponent_o *)(v9 + 32);
LABEL_14:
        sub_B52920(v17, v7, v10, v11, v12, v13, v14, v15);
        v25 = &StringLiteral_6392/*"FIELD_PLAYER"*/;
LABEL_15:
        v26 = (System_Int32_array **)*v25;
        *(_QWORD *)(v5 + 64) = *v25;
        sub_B52920((BattleServantConfConponent_o *)(v5 + 64), v26, v19, v20, v21, v22, v23, v24);
        goto LABEL_16;
      }
    }
LABEL_29:
    sub_B52A5C(isBUSTER, v7);
  }
  if ( BattleCommand__isQUICK(task->fields.ordertype, 0LL) )
  {
    BattleActionData__setTypeOrderQuick((BattleActionData_o *)v5, 0LL);
    v18 = (System_Array_o *)sub_B5299C(int___TypeInfo, 3LL);
    v39.fields.value = Field__PrivateImplementationDetails__6E462A3A512B9CB4A6185FA60D2DAE01F4222A66EA50EDA56030DA3910331E5F;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43814272(v18, v39, 0LL);
    if ( !v9 )
      goto LABEL_29;
    *(_QWORD *)(v9 + 32) = v18;
    v17 = (BattleServantConfConponent_o *)(v9 + 32);
    v7 = (System_Int32_array **)v18;
    goto LABEL_14;
  }
  isBUSTER = BattleCommand__isBUSTER(task->fields.ordertype, 0LL);
  if ( (isBUSTER & 1) != 0 )
  {
    BattleActionData__setTypeOrderBuster((BattleActionData_o *)v5, 0LL);
    v31 = (System_Array_o *)sub_B5299C(int___TypeInfo, 3LL);
    v40.fields.value = Field__PrivateImplementationDetails__2C0F32A9C0CD29445188C9F9109E1308D5A59BD9D3C2479B8251491000F0DB36;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43814272(v31, v40, 0LL);
    if ( v9 )
    {
      *(_QWORD *)(v9 + 32) = v31;
      sub_B52920((BattleServantConfConponent_o *)(v9 + 32), (System_Int32_array **)v31, v32, v33, v34, v35, v36, v37);
      v25 = &StringLiteral_6391/*"FIELD_ENEMY"*/;
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
    isBUSTER = (__int64)this->fields.data;
    if ( !isBUSTER )
      goto LABEL_29;
    isBUSTER = (__int64)BattleData__getServantData((BattleData_o *)isBUSTER, targetIdlist->m_Items[v29 + 1], 0LL);
    LODWORD(v27) = targetIdlist->max_length;
    ++v29;
    v28 |= isBUSTER != 0;
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
  BattleActionData_o *baseActionData; // [xsp+8h] [xbp-8h] BYREF

  baseActionData = 0LL;
  logic = this->fields.logic;
  v5 = BattleLogicNomal__CreateCommandBattle(this, task, &baseActionData, v3);
  if ( !logic )
    sub_B52A5C(v5, v6);
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
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  __int64 v13; // x20
  DataMasterBase_WarMaster__WarEntity__int__o *v14; // x21
  System_Int32_array **v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v22; // x20
  BattleData_o *data; // x8
  System_Int32_array **QuestIndividualities; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Collections_Generic_List_int__o *v31; // x26
  int v32; // w8
  __int64 v33; // x28
  unsigned int v34; // w19
  __int64 v35; // x25
  __int64 *v36; // x25
  __int64 v37; // t1
  __int64 v38; // x20
  int v39; // w8
  unsigned int v40; // w25
  __int64 v41; // x27
  __int64 v42; // x8
  __int64 v43; // x27
  __int64 v44; // t1
  struct BattleLogic_o *logic; // x8
  struct BattleData_o *v46; // x8
  int32_t v47; // w9
  BattleLogicNomal_o *v48; // x19
  struct BattleData_o *v49; // x8
  __int64 v50; // x28
  int v51; // w8
  unsigned int v52; // w19
  __int64 v53; // x22
  __int64 *v54; // x22
  __int64 v55; // t1
  bool v56; // w3
  char v57; // w20
  __int64 v58; // x20
  struct BaseBattleEvent_o *battleEvent; // x20
  struct BattleData_o *v60; // x8
  struct BattlePerformance_o *perf; // x9
  struct BattleData_o *v62; // x8
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *aiNpcDataList; // x20
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v64; // x23
  BattleLogicNomal_o *v65; // x23
  struct BattleData_o *v66; // x8
  const MethodInfo *v67; // x2
  struct BattleData_o *v68; // x8
  BattleBuffData_BuffData_array *value; // x24
  int monitor; // w8
  int32_t key; // w25
  unsigned int v72; // w22
  char v73; // w19
  BattleBuffData_BuffData_o *v74; // x20
  WarEntity_o *v75; // x0
  __int64 v76; // x1
  BattleSkillInfoData_o *v77; // x26
  __int64 v78; // x0
  __int64 v79; // x1
  struct System_Int32_array *vals; // x8
  __int64 v81; // x0
  __int64 v82; // x1
  struct System_Int32_array *v83; // x8
  BattleData_o *v84; // x0
  BattleServantData_o *ServantData; // x27
  __int64 v86; // x1
  SkillLvEntity_o *v87; // x0
  __int64 v88; // x1
  SkillLvEntity_o *v89; // x28
  BattleData_o *v90; // x0
  _BOOL8 v91; // x0
  __int64 v92; // x1
  BattleLogic_o *v93; // x0
  int32_t v94; // w23
  __int64 v95; // x0
  __int64 v96; // x1
  System_Int32_array *TargetIds; // x20
  BattleLogicNomal_o *v98; // x23
  bool exists; // w28
  BattleLogicSkill_o *logicskill; // x23
  System_Int32_array *v101; // x0
  __int64 v102; // x1
  const MethodInfo *v103; // x7
  System_Collections_ICollection_o *v104; // x0
  __int64 v105; // x1
  BattleLogicTask_array *v106; // x20
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v108; // x3
  BattleLogicTask_o *v109; // x0
  BattleLogic_o *v110; // x0
  __int64 v111; // x1
  BattleData_o *v112; // x0
  int32_t v113; // w23
  Il2CppObject *v114; // x28
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
  BattleServantData_o *v130; // x20
  __int64 v131; // x1
  SkillLvEntity_o *v132; // x0
  __int64 v133; // x1
  SkillLvEntity_o *v134; // x27
  BattleData_o *v135; // x0
  _BOOL8 v136; // x0
  __int64 v137; // x1
  BattleLogic_o *v138; // x0
  int32_t v139; // w27
  __int64 v140; // x0
  __int64 v141; // x1
  System_Int32_array *v142; // x20
  bool v143; // w26
  BattleLogicSkill_o *v144; // x27
  System_Int32_array *v145; // x0
  __int64 v146; // x1
  const MethodInfo *v147; // x7
  BattleLogicTask_array *v148; // x1
  BattleLogic_o *v149; // x0
  int v150; // w19
  BattleActionData_o *v151; // x1
  __int64 v153; // x0
  __int64 v154; // x0
  __int64 v155; // x0
  __int64 v156; // x0
  __int64 v157; // x0
  __int64 v158; // x0
  __int64 v159; // x0
  __int64 v160; // x0
  __int64 v161; // x0
  __int64 v162; // x0
  __int64 v163; // x0
  __int64 v164; // x0
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v165; // [xsp+0h] [xbp-100h]
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v166; // [xsp+8h] [xbp-F8h]
  BattleActionData_o *baseActData; // [xsp+18h] [xbp-E8h]
  char v168; // [xsp+24h] [xbp-DCh]
  SkillLvMaster_o *v169; // [xsp+28h] [xbp-D8h]
  BattleLogicNomal_o *v170; // [xsp+30h] [xbp-D0h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v171; // [xsp+38h] [xbp-C8h] BYREF
  int v172[2]; // [xsp+60h] [xbp-A0h]
  int v173; // [xsp+68h] [xbp-98h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v174; // [xsp+70h] [xbp-90h] BYREF
  WarEntity_o *entity; // [xsp+A0h] [xbp-60h] BYREF

  if ( (byte_42B325B & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_AiNpcBattleServantData___ctor__);
    sub_B52984(&System_Action_AiNpcBattleServantData__TypeInfo);
    sub_B52984(&BattleActionData_TypeInfo);
    sub_B52984(&BattleSkillInfoData_TypeInfo);
    sub_B52984(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_BuffMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_B52984(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    sub_B52984(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData_____ctor__);
    sub_B52984(&System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____Dispose__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____get_Current__);
    sub_B52984(&int___TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_KeyValuePair_int__BattleBuffData_BuffData____get_Key__);
    sub_B52984(&Method_System_Collections_Generic_KeyValuePair_int__BattleBuffData_BuffData____get_Value__);
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_AiNpcBattleServantData__ForEach__);
    sub_B52984(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_BattleLogicNomal___c__DisplayClass34_0__createEndTurnEnemy_b__0__);
    sub_B52984(&BattleLogicNomal___c__DisplayClass34_0_TypeInfo);
    sub_B52984(&StringLiteral_8852/*"MOTION_ENEMY_TURN_END"*/);
    byte_42B325B = 1;
  }
  entity = 0LL;
  memset(&v174, 0, sizeof(v174));
  v173 = 0;
  v4 = sub_B52A54(BattleLogicNomal___c__DisplayClass34_0_TypeInfo);
  BattleLogicNomal___c__DisplayClass34_0___ctor((BattleLogicNomal___c__DisplayClass34_0_o *)v4, 0LL);
  if ( !v4 )
    goto LABEL_209;
  *(_QWORD *)(v4 + 32) = this;
  sub_B52920((BattleServantConfConponent_o *)(v4 + 32), (System_Int32_array **)this, v7, v8, v9, v10, v11, v12);
  v13 = sub_B52A54(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v13, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_209;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_BuffMaster___);
  *(_BYTE *)(v4 + 16) = 1;
  if ( !this->fields.logic )
    goto LABEL_209;
  v14 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  BattleLogic__resetReducedHpAll(this->fields.logic, 0LL);
  Instance = (__int64)this->fields.logic;
  if ( !Instance )
    goto LABEL_209;
  BattleLogic__updateResultServant((BattleLogic_o *)Instance, 0LL);
  if ( !v13 )
    goto LABEL_209;
  BattleActionData__setStateField((BattleActionData_o *)v13, 0LL);
  baseActData = (BattleActionData_o *)v13;
  v15 = (System_Int32_array **)StringLiteral_8852/*"MOTION_ENEMY_TURN_END"*/;
  *(_QWORD *)(v13 + 64) = StringLiteral_8852/*"MOTION_ENEMY_TURN_END"*/;
  sub_B52920((BattleServantConfConponent_o *)(v13 + 64), v15, v16, v17, v18, v19, v20, v21);
  v166 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B52A54(System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v166,
    (const MethodInfo_2F27154 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData_____ctor__);
  v22 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B52A54(System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v22,
    (const MethodInfo_2F27154 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData_____ctor__);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_209;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  data = this->fields.data;
  v169 = (SkillLvMaster_o *)Instance;
  if ( !data )
    goto LABEL_209;
  QuestIndividualities = (System_Int32_array **)BattleData__getQuestIndividualities(data, 0LL);
  *(_QWORD *)(v4 + 24) = QuestIndividualities;
  sub_B52920((BattleServantConfConponent_o *)(v4 + 24), QuestIndividualities, v25, v26, v27, v28, v29, v30);
  v31 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v31,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (__int64)this->fields.data;
  if ( !Instance )
    goto LABEL_209;
  v165 = v22;
  v170 = this;
  Instance = (__int64)BattleData__getFieldPlayerServantList((BattleData_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_209;
  v32 = *(_DWORD *)(Instance + 24);
  v33 = Instance;
  if ( v32 >= 1 )
  {
    v34 = 0;
    while ( 1 )
    {
      if ( v34 >= v32 )
        goto LABEL_214;
      v35 = v33 + 8LL * (int)v34;
      v37 = *(_QWORD *)(v35 + 32);
      v36 = (__int64 *)(v35 + 32);
      Instance = v37;
      if ( !v37 )
        goto LABEL_209;
      if ( *(_BYTE *)(Instance + 516) )
      {
        Instance = (__int64)BattleServantData__turnBuffProgressing(
                              (BattleServantData_o *)Instance,
                              *(_BYTE *)(v4 + 16),
                              *(System_Int32_array **)(v4 + 24),
                              this->fields.logic,
                              0LL,
                              0LL);
        if ( v34 >= *(_DWORD *)(v33 + 24) )
          goto LABEL_214;
        v38 = Instance;
        Instance = *v36;
        if ( !*v36 )
          goto LABEL_209;
        Instance = BattleServantData__isAlive((BattleServantData_o *)Instance, 0, 0LL);
        if ( (Instance & 1) != 0 )
        {
          if ( v34 >= *(_DWORD *)(v33 + 24) )
            goto LABEL_214;
          Instance = *v36;
          if ( !*v36 )
            goto LABEL_209;
          Instance = BattleServantData__isAliveLogic((BattleServantData_o *)Instance, 0, 0LL);
          if ( (Instance & 1) != 0 )
          {
            if ( !v38 )
              goto LABEL_209;
            if ( *(_QWORD *)(v38 + 24) )
            {
              if ( v34 >= *(_DWORD *)(v33 + 24) )
                goto LABEL_214;
              Instance = (__int64)v166;
              if ( !*v36 || !v166 )
                goto LABEL_209;
              System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
                v166,
                *(_DWORD *)(*v36 + 24),
                (WarBoardEvalValueSquare_EvalValueSquare_o *)v38,
                (const MethodInfo_2F27D08 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
            }
          }
        }
        if ( v34 >= *(_DWORD *)(v33 + 24) )
          goto LABEL_214;
        if ( !*v36 )
          goto LABEL_209;
        if ( !v31 )
          goto LABEL_209;
        System_Collections_Generic_List_int___Add(
          v31,
          *(_DWORD *)(*v36 + 24),
          (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
        if ( !v38 )
          goto LABEL_209;
        v39 = *(_DWORD *)(v38 + 24);
        if ( v39 >= 1 )
          break;
      }
LABEL_48:
      v32 = *(_DWORD *)(v33 + 24);
      if ( (int)++v34 >= v32 )
        goto LABEL_49;
    }
    v40 = 0;
    while ( v40 < v39 )
    {
      v41 = v38 + 8LL * (int)v40;
      v44 = *(_QWORD *)(v41 + 32);
      v43 = v41 + 32;
      v42 = v44;
      if ( !v44 || !v14 )
        goto LABEL_209;
      Instance = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                   v14,
                   &entity,
                   *(_DWORD *)(v42 + 16),
                   (const MethodInfo_23E2334 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
      if ( (Instance & 1) != 0 )
      {
        Instance = (__int64)entity;
        if ( !entity )
          goto LABEL_209;
        Instance = BuffEntity__checkBuffType((BuffEntity_o *)entity, 142, 0LL);
        if ( (Instance & 1) != 0 )
        {
          logic = this->fields.logic;
          if ( !logic )
            goto LABEL_209;
          v46 = logic->fields.data;
          if ( !v46 )
            goto LABEL_209;
          if ( v40 >= *(_DWORD *)(v38 + 24) )
            break;
          if ( !*(_QWORD *)v43 )
            goto LABEL_209;
          v47 = *(_DWORD *)(*(_QWORD *)v43 + 28LL);
          if ( v46->fields.endMasterSkillTurnBuffValue <= v47 )
            v46->fields.endMasterSkillTurnBuffValue = v47;
        }
      }
      v39 = *(_DWORD *)(v38 + 24);
      if ( (int)++v40 >= v39 )
        goto LABEL_48;
    }
LABEL_214:
    v155 = sub_B52A88(Instance);
    sub_B52A28(v155, 0LL);
  }
LABEL_49:
  v48 = this;
  Instance = (__int64)this->fields.data;
  if ( !Instance )
    goto LABEL_209;
  Instance = (__int64)BattleData__getFieldEnemyServantList((BattleData_o *)Instance, 0, 0LL);
  v49 = this->fields.data;
  if ( !v49 )
    goto LABEL_209;
  v50 = Instance;
  if ( v49->fields.leaderDown && v49->fields.endbattleFlg )
  {
    v168 = 0;
    if ( !v31 )
      goto LABEL_209;
    goto LABEL_107;
  }
  if ( !Instance )
    goto LABEL_209;
  v51 = *(_DWORD *)(Instance + 24);
  if ( v51 >= 1 )
  {
    v168 = 0;
    v52 = 0;
    while ( v52 < v51 )
    {
      v53 = v50 + 8LL * (int)v52;
      v55 = *(_QWORD *)(v53 + 32);
      v54 = (__int64 *)(v53 + 32);
      Instance = v55;
      if ( !v55 )
        goto LABEL_209;
      Instance = BattleServantData__isAlive((BattleServantData_o *)Instance, 0, 0LL);
      if ( (Instance & 1) != 0 )
      {
        Instance = (__int64)this->fields.data;
        if ( !Instance )
          goto LABEL_209;
        Instance = BattleData__checkAlivePlayers((BattleData_o *)Instance, 0LL);
        if ( (Instance & 1) != 0 )
        {
          v56 = 1;
        }
        else
        {
          Instance = (__int64)this->fields.data;
          if ( !Instance )
            goto LABEL_209;
          Instance = BattleData__checkDefeatPoint((BattleData_o *)Instance, 0, 0LL);
          v56 = Instance & 1;
        }
        if ( v52 >= *(_DWORD *)(v50 + 24) )
          goto LABEL_214;
        Instance = *v54;
        if ( !*v54 )
          goto LABEL_209;
        Instance = BattleServantData__turnProgressing(
                     (BattleServantData_o *)Instance,
                     *(System_Int32_array **)(v4 + 24),
                     this->fields.logic,
                     v56,
                     baseActData,
                     0LL);
        if ( v52 >= *(_DWORD *)(v50 + 24) )
          goto LABEL_214;
        v57 = Instance;
        Instance = *v54;
        if ( !*v54 )
          goto LABEL_209;
        Instance = BattleServantData__isAliveLogic((BattleServantData_o *)Instance, 0, 0LL);
        if ( (Instance & 1) != 0 )
        {
          if ( v52 >= *(_DWORD *)(v50 + 24) )
            goto LABEL_214;
          Instance = *v54;
          if ( !*v54 )
            goto LABEL_209;
          Instance = (__int64)BattleServantData__getTTurnEndBufflist((BattleServantData_o *)Instance, 0LL);
          if ( !Instance )
            goto LABEL_209;
          if ( *(_QWORD *)(Instance + 24) )
          {
            if ( v52 >= *(_DWORD *)(v50 + 24) )
              goto LABEL_214;
            if ( !*v54 || !v165 )
              goto LABEL_209;
            System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
              v165,
              *(_DWORD *)(*v54 + 24),
              (WarBoardEvalValueSquare_EvalValueSquare_o *)Instance,
              (const MethodInfo_2F27D08 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
          }
        }
        if ( v52 >= *(_DWORD *)(v50 + 24) )
          goto LABEL_214;
        if ( !*v54 )
          goto LABEL_209;
        Instance = *(_QWORD *)(*v54 + 760);
        if ( !Instance )
          goto LABEL_209;
        v168 |= v57;
        Instance = (__int64)BattleBuffData__usedProgressing((BattleBuffData_o *)Instance, 0LL);
      }
      if ( v52 >= *(_DWORD *)(v50 + 24) )
        goto LABEL_214;
      Instance = *v54;
      if ( !*v54 )
        goto LABEL_209;
      if ( *(_BYTE *)(Instance + 516) )
      {
        Instance = (__int64)BattleServantData__turnBuffProgressing(
                              (BattleServantData_o *)Instance,
                              *(_BYTE *)(v4 + 16),
                              *(System_Int32_array **)(v4 + 24),
                              this->fields.logic,
                              0LL,
                              0LL);
        if ( v52 >= *(_DWORD *)(v50 + 24) )
          goto LABEL_214;
        v58 = Instance;
        Instance = *v54;
        if ( !*v54 )
          goto LABEL_209;
        Instance = BattleServantData__isAlive((BattleServantData_o *)Instance, 0, 0LL);
        if ( (Instance & 1) != 0 )
        {
          if ( v52 >= *(_DWORD *)(v50 + 24) )
            goto LABEL_214;
          Instance = *v54;
          if ( !*v54 )
            goto LABEL_209;
          Instance = BattleServantData__isAliveLogic((BattleServantData_o *)Instance, 0, 0LL);
          if ( (Instance & 1) != 0 )
          {
            if ( !v58 )
              goto LABEL_209;
            if ( *(_QWORD *)(v58 + 24) )
            {
              if ( v52 >= *(_DWORD *)(v50 + 24) )
                goto LABEL_214;
              Instance = (__int64)v166;
              if ( !*v54 || !v166 )
                goto LABEL_209;
              System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
                v166,
                *(_DWORD *)(*v54 + 24),
                (WarBoardEvalValueSquare_EvalValueSquare_o *)v58,
                (const MethodInfo_2F27D08 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
            }
          }
        }
        if ( v52 >= *(_DWORD *)(v50 + 24) )
          goto LABEL_214;
        if ( !*v54 || !v31 )
          goto LABEL_209;
        System_Collections_Generic_List_int___Add(
          v31,
          *(_DWORD *)(*v54 + 24),
          (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
      }
      v51 = *(_DWORD *)(v50 + 24);
      if ( (int)++v52 >= v51 )
        goto LABEL_105;
    }
    goto LABEL_214;
  }
  v168 = 0;
LABEL_105:
  v48 = this;
  v49 = this->fields.data;
  if ( !v49 || !v31 )
LABEL_209:
    sub_B52A5C(Instance, v6);
LABEL_107:
  battleEvent = v49->fields.battleEvent;
  Instance = (__int64)System_Collections_Generic_List_int___ToArray(
                        v31,
                        (const MethodInfo_30590BC *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !battleEvent )
    goto LABEL_209;
  Instance = ((__int64 (__fastcall *)(struct BaseBattleEvent_o *, __int64, _QWORD, Il2CppMethodPointer))battleEvent->klass->vtable._34_ProgressNoExecJoinServantsBuff.method)(
               battleEvent,
               Instance,
               *(unsigned __int8 *)(v4 + 16),
               battleEvent->klass->vtable._35_IsPossibleAddBuffParam.methodPtr);
  v60 = v48->fields.data;
  if ( !v60 )
    goto LABEL_209;
  perf = v60->fields.perf;
  if ( !perf )
    goto LABEL_209;
  Instance = (__int64)v60->fields.defenceTargetData;
  if ( !Instance )
    goto LABEL_209;
  BattleDefenceTargetData__BuffTurnProgress((BattleDefenceTargetData_o *)Instance, perf->fields.defenceTarget, 0LL);
  v62 = v48->fields.data;
  if ( !v62 )
    goto LABEL_209;
  aiNpcDataList = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v62->fields.aiNpcDataList;
  v64 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B52A54(System_Action_AiNpcBattleServantData__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v64,
    (Il2CppObject *)v4,
    Method_BattleLogicNomal___c__DisplayClass34_0__createEndTurnEnemy_b__0__,
    (const MethodInfo_2627780 *)Method_System_Action_AiNpcBattleServantData___ctor__);
  if ( !aiNpcDataList )
    goto LABEL_209;
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    aiNpcDataList,
    (System_Action_T__o *)v64,
    (const MethodInfo_2FF231C *)Method_System_Collections_Generic_List_AiNpcBattleServantData__ForEach__);
  v65 = v170;
  v66 = v170->fields.data;
  if ( !v66 )
    goto LABEL_209;
  Instance = (__int64)v66->fields._FieldEnvData_k__BackingField;
  if ( !Instance )
    goto LABEL_209;
  BattleFieldEnvironmentData__TurnProgressing(
    (BattleFieldEnvironmentData_o *)Instance,
    v170->fields.logic,
    *(_BYTE *)(v4 + 16),
    0LL);
  BattleLogicNomal__UpdateEndTurnBuff(v170, *(System_Int32_array **)(v4 + 24), v67);
  v68 = v170->fields.data;
  if ( !v68 )
    goto LABEL_209;
  v68->fields.currentTurn = 0;
  if ( !v165 )
    goto LABEL_209;
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
    &v171,
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v165,
    (const MethodInfo_2F282EC *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____GetEnumerator__);
  v174 = v171;
  while ( 1 )
  {
    v75 = (WarEntity_o *)System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
                           &v174,
                           (const MethodInfo_28895A0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____MoveNext__);
    if ( ((unsigned __int8)v75 & 1) == 0 )
      break;
    value = (BattleBuffData_BuffData_array *)v174.fields.current.fields.value;
    if ( !v174.fields.current.fields.value )
      sub_B52A5C(v75, v76);
    monitor = (int)v174.fields.current.fields.value[1].monitor;
    if ( monitor >= 1 )
    {
      key = (int32_t)v174.fields.current.fields.key;
      v72 = 0;
      v73 = 1;
LABEL_121:
      if ( v72 >= monitor )
      {
        v154 = sub_B52A88(v75);
        sub_B52A28(v154, 0LL);
      }
      v74 = value->m_Items[v72];
      if ( !v74 )
        sub_B52A5C(v75, v76);
      if ( v74->fields._isRemove )
        goto LABEL_157;
      if ( !v14 )
        sub_B52A5C(v75, v76);
      v75 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
              v14,
              v74->fields.buffId,
              (const MethodInfo_23E22D8 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
      if ( !v75 )
        goto LABEL_157;
      v77 = (BattleSkillInfoData_o *)sub_B52A54(BattleSkillInfoData_TypeInfo);
      BattleSkillInfoData___ctor(v77, 0LL);
      if ( !v77 )
        sub_B52A5C(v78, v79);
      v77->fields.svtUniqueId = key;
      vals = v74->fields.vals;
      if ( !vals )
        sub_B52A5C(v78, v79);
      if ( !vals->max_length )
      {
        v156 = sub_B52A88(v78);
        sub_B52A28(v156, 0LL);
      }
      v81 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))v77->klass->vtable._4_set_skillId.method)(
              v77,
              (unsigned int)vals->m_Items[1],
              v77->klass->vtable._5_get_skillId.methodPtr);
      v83 = v74->fields.vals;
      if ( !v83 )
        sub_B52A5C(v81, v82);
      if ( v83->max_length <= 1 )
      {
        v157 = sub_B52A88(v81);
        sub_B52A28(v157, 0LL);
      }
      v77->fields.skilllv = v83->m_Items[2];
      v84 = v65->fields.data;
      if ( !v84 )
        sub_B52A5C(0LL, v82);
      ServantData = BattleData__getServantData(v84, v77->fields.svtUniqueId, 0LL);
      v86 = ((unsigned __int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))v77->klass->vtable._5_get_skillId.method)(
              v77,
              v77->klass->vtable._6_get_IndividualityArray.methodPtr);
      if ( !v169 )
        sub_B52A5C(0LL, v86);
      v87 = SkillLvMaster__GetEntity(v169, v86, v77->fields.skilllv, 0LL);
      if ( !ServantData )
        sub_B52A5C(v87, v88);
      v89 = v87;
      v90 = v65->fields.data;
      if ( !v90 )
        sub_B52A5C(0LL, v88);
      v91 = BattleData__checkAliveOther(v90, ServantData->fields.uniqueId, 0LL);
      if ( !v91 )
      {
        if ( !v89 )
          sub_B52A5C(v91, v92);
        v93 = v65->fields.logic;
        if ( !v93 )
          sub_B52A5C(0LL, v92);
        v75 = (WarEntity_o *)BattleLogic__checkPtTargetFunction(v93, v89->fields.funcId, 0LL);
        if ( ((unsigned __int8)v75 & 1) == 0 )
          goto LABEL_157;
      }
      v94 = BattleServantData__GetRevengeIdCheckOpponentOnly(ServantData, v74, 0LL);
      if ( (v94 & 0x80000000) != 0 )
      {
        v98 = v170;
        TargetIds = Target__getTargetIds(v170->fields.data, v77->fields.svtUniqueId, -1, key, 13, 0LL, 0LL);
        exists = BattleSkillInfoData__ExistsNoTargetNoActionType(v77, 0LL);
      }
      else
      {
        v95 = sub_B5299C(int___TypeInfo, 1LL);
        TargetIds = (System_Int32_array *)v95;
        if ( !v95 )
          sub_B52A5C(0LL, v96);
        if ( !*(_DWORD *)(v95 + 24) )
        {
          v159 = sub_B52A88(v95);
          sub_B52A28(v159, 0LL);
        }
        *(_DWORD *)(v95 + 32) = v94;
        v98 = v170;
        exists = 0;
      }
      logicskill = v98->fields.logicskill;
      v101 = (System_Int32_array *)sub_B5299C(int___TypeInfo, 1LL);
      if ( !v101 )
        sub_B52A5C(0LL, v102);
      if ( !v101->max_length )
      {
        v158 = sub_B52A88(v101);
        sub_B52A28(v158, 0LL);
      }
      v101->m_Items[1] = key;
      if ( !logicskill )
        sub_B52A5C(v101, v102);
      v104 = (System_Collections_ICollection_o *)BattleLogicSkill__taskSkill(
                                                   logicskill,
                                                   v77,
                                                   v101,
                                                   TargetIds,
                                                   1,
                                                   exists,
                                                   0,
                                                   v103);
      v65 = v170;
      v106 = (BattleLogicTask_array *)v104;
      if ( (v73 & 1) != 0 )
      {
        IsNullOrEmpty = BasicHelper__IsNullOrEmpty(v104, 0LL);
        if ( IsNullOrEmpty )
        {
          v73 = 1;
          goto LABEL_155;
        }
        if ( !v106 )
          sub_B52A5C(IsNullOrEmpty, v105);
        if ( !v106->max_length )
        {
          v164 = sub_B52A88(IsNullOrEmpty);
          sub_B52A28(v164, 0LL);
        }
        v109 = v106->m_Items[0];
        if ( !v109 )
          sub_B52A5C(0LL, v105);
        BattleLogicTask__SetDisplayTriggerIntervalBuff(v109, ServantData, value, v108);
      }
      v73 = 0;
LABEL_155:
      v110 = v170->fields.logic;
      if ( !v110 )
        sub_B52A5C(0LL, v105);
      BattleLogic__addBattleLogicTask(v110, v106, 0LL);
LABEL_157:
      monitor = value->max_length;
      if ( (int)++v72 >= monitor )
        continue;
      goto LABEL_121;
    }
  }
  v172[0] = 1261;
  v173 = 1;
  System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
    &v174,
    (const MethodInfo_288970C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____Dispose__);
  v173 = 0;
  Instance = (__int64)v166;
  if ( !v166 )
    goto LABEL_209;
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
    &v171,
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v166,
    (const MethodInfo_2F282EC *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____GetEnumerator__);
  v174 = v171;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
            &v174,
            (const MethodInfo_28895A0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____MoveNext__) )
  {
    v112 = v170->fields.data;
    if ( !v112 )
      sub_B52A5C(0LL, v111);
    v113 = (int32_t)v174.fields.current.fields.key;
    v114 = v174.fields.current.fields.value;
    isEndAct = BattleData__getServantData(v112, (int32_t)v174.fields.current.fields.key, 0LL);
    selfConcatSvtIndividualities_k__BackingField = isEndAct;
    if ( isEndAct )
    {
      v118 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B52A54(BattleBuffData_CheckIndividualitiesData_TypeInfo);
      BattleBuffData_CheckIndividualitiesData___ctor(
        v118,
        selfConcatSvtIndividualities_k__BackingField,
        0LL,
        0LL,
        0LL,
        0LL,
        0LL);
      if ( !v118 )
        sub_B52A5C(isEndAct, v116);
      selfConcatSvtIndividualities_k__BackingField = (BattleServantData_o *)v118->fields._selfConcatSvtIndividualities_k__BackingField;
    }
    if ( !v114 )
      sub_B52A5C(isEndAct, v116);
    v119 = (int)v114[1].monitor;
    if ( v119 >= 1 )
    {
      for ( i = 0; i < v119; ++i )
      {
        if ( i >= (unsigned int)v119 )
        {
          v153 = sub_B52A88(isEndAct);
          sub_B52A28(v153, 0LL);
        }
        v121 = (BattleBuffData_BuffData_o *)*((_QWORD *)&v114[2].klass + i);
        if ( !v121 )
          sub_B52A5C(isEndAct, v116);
        if ( !v121->fields._isRemove )
        {
          if ( !v14 )
            sub_B52A5C(isEndAct, v116);
          isEndAct = (BattleServantData_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                              v14,
                                              v121->fields.buffId,
                                              (const MethodInfo_23E22D8 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
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
                v122 = (BattleSkillInfoData_o *)sub_B52A54(BattleSkillInfoData_TypeInfo);
                BattleSkillInfoData___ctor(v122, 0LL);
                if ( !v122 )
                  sub_B52A5C(v123, v124);
                v122->fields.svtUniqueId = v113;
                v125 = v121->fields.vals;
                if ( !v125 )
                  sub_B52A5C(v123, v124);
                if ( !v125->max_length )
                {
                  v161 = sub_B52A88(v123);
                  sub_B52A28(v161, 0LL);
                }
                v126 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))v122->klass->vtable._4_set_skillId.method)(
                         v122,
                         (unsigned int)v125->m_Items[1],
                         v122->klass->vtable._5_get_skillId.methodPtr);
                v128 = v121->fields.vals;
                if ( !v128 )
                  sub_B52A5C(v126, v127);
                if ( v128->max_length <= 1 )
                {
                  v160 = sub_B52A88(v126);
                  sub_B52A28(v160, 0LL);
                }
                v122->fields.skilllv = v128->m_Items[2];
                v129 = v170->fields.data;
                if ( !v129 )
                  sub_B52A5C(0LL, v127);
                v130 = BattleData__getServantData(v129, v122->fields.svtUniqueId, 0LL);
                v131 = ((unsigned __int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))v122->klass->vtable._5_get_skillId.method)(
                         v122,
                         v122->klass->vtable._6_get_IndividualityArray.methodPtr);
                if ( !v169 )
                  sub_B52A5C(0LL, v131);
                v132 = SkillLvMaster__GetEntity(v169, v131, v122->fields.skilllv, 0LL);
                if ( !v130 )
                  sub_B52A5C(v132, v133);
                v134 = v132;
                v135 = v170->fields.data;
                if ( !v135 )
                  sub_B52A5C(0LL, v133);
                v136 = BattleData__checkAliveOther(v135, v130->fields.uniqueId, 0LL);
                if ( v136 )
                  goto LABEL_191;
                if ( !v134 )
                  sub_B52A5C(v136, v137);
                v138 = v170->fields.logic;
                if ( !v138 )
                  sub_B52A5C(0LL, v137);
                isEndAct = (BattleServantData_o *)BattleLogic__checkPtTargetFunction(v138, v134->fields.funcId, 0LL);
                if ( ((unsigned __int8)isEndAct & 1) != 0 )
                {
LABEL_191:
                  v139 = BattleServantData__GetRevengeIdCheckOpponentOnly(v130, v121, 0LL);
                  if ( (v139 & 0x80000000) != 0 )
                  {
                    v142 = Target__getTargetIds(v170->fields.data, v122->fields.svtUniqueId, -1, v113, 13, 0LL, 0LL);
                    v143 = BattleSkillInfoData__ExistsNoTargetNoActionType(v122, 0LL);
                  }
                  else
                  {
                    v140 = sub_B5299C(int___TypeInfo, 1LL);
                    v142 = (System_Int32_array *)v140;
                    if ( !v140 )
                      sub_B52A5C(0LL, v141);
                    if ( !*(_DWORD *)(v140 + 24) )
                    {
                      v162 = sub_B52A88(v140);
                      sub_B52A28(v162, 0LL);
                    }
                    v143 = 0;
                    *(_DWORD *)(v140 + 32) = v139;
                  }
                  v144 = v170->fields.logicskill;
                  v145 = (System_Int32_array *)sub_B5299C(int___TypeInfo, 1LL);
                  if ( !v145 )
                    sub_B52A5C(0LL, v146);
                  if ( !v145->max_length )
                  {
                    v163 = sub_B52A88(v145);
                    sub_B52A28(v163, 0LL);
                  }
                  v145->m_Items[1] = v113;
                  if ( !v144 )
                    sub_B52A5C(v145, v146);
                  v148 = BattleLogicSkill__taskSkill(v144, v122, v145, v142, 1, v143, 0, v147);
                  v149 = v170->fields.logic;
                  if ( !v149 )
                    sub_B52A5C(0LL, v148);
                  BattleLogic__addBattleLogicTask(v149, v148, 0LL);
                }
              }
            }
          }
        }
        v119 = (int)v114[1].monitor;
      }
    }
  }
  v172[0] = 1722;
  v150 = ++v173;
  System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
    &v174,
    (const MethodInfo_288970C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____Dispose__);
  if ( v150 && v172[v150 - 1] == 1722 )
    v173 = v150 - 1;
  Instance = (__int64)v170->fields.logic;
  if ( !Instance )
    goto LABEL_209;
  if ( (v168 & 1) != 0 )
    v151 = baseActData;
  else
    v151 = 0LL;
  return BattleLogic__PrevReturnCreateActionData((BattleLogic_o *)Instance, v151, baseActData, 0LL);
}


BattleActionData_o *__fastcall BattleLogicNomal__createEndTurnPlayer(
        BattleLogicNomal_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  __int64 v4; // x24
  __int64 Instance; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  const MethodInfo *v13; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v14; // x21
  System_Int32_array **v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Int32_array **QuestIndividualities; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Collections_Generic_List_int__o *v29; // x26
  int v30; // w8
  __int64 v31; // x28
  unsigned int v32; // w20
  __int64 v33; // x19
  __int64 *v34; // x19
  __int64 v35; // t1
  bool v36; // w3
  char v37; // w23
  WarBoardEvalValueSquare_EvalValueSquare_o *v38; // x2
  __int64 v39; // x23
  int v40; // w8
  unsigned int v41; // w19
  __int64 v42; // x22
  __int64 v43; // x8
  __int64 v44; // x22
  __int64 v45; // t1
  struct BattleLogic_o *logic; // x8
  struct BattleData_o *data; // x8
  int32_t v48; // w9
  struct BattleData_o *v49; // x8
  __int64 v50; // x23
  int v51; // w8
  unsigned int v52; // w19
  __int64 v53; // x25
  __int64 *v54; // x25
  __int64 v55; // t1
  __int64 v56; // x27
  struct BaseBattleEvent_o *battleEvent; // x20
  struct BattleData_o *v58; // x8
  struct BattlePerformance_o *perf; // x9
  struct BattleData_o *v60; // x8
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *aiNpcDataList; // x20
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v62; // x23
  BattleLogicNomal_o *v63; // x20
  struct BattleData_o *v64; // x8
  const MethodInfo *v65; // x2
  struct BattleData_o *v66; // x8
  BattleBuffData_BuffData_array *value; // x24
  int monitor; // w8
  int32_t key; // w25
  unsigned int v70; // w22
  char v71; // w19
  BattleBuffData_BuffData_o *v72; // x23
  WarEntity_o *v73; // x0
  __int64 v74; // x1
  BattleSkillInfoData_o *v75; // x26
  __int64 v76; // x0
  __int64 v77; // x1
  struct System_Int32_array *vals; // x8
  __int64 v79; // x0
  __int64 v80; // x1
  struct System_Int32_array *v81; // x8
  BattleData_o *v82; // x0
  BattleServantData_o *ServantData; // x27
  __int64 v84; // x1
  SkillLvEntity_o *v85; // x0
  __int64 v86; // x1
  SkillLvEntity_o *v87; // x28
  BattleData_o *v88; // x0
  _BOOL8 v89; // x0
  __int64 v90; // x1
  BattleLogic_o *v91; // x0
  int32_t v92; // w20
  __int64 v93; // x0
  __int64 v94; // x1
  System_Int32_array *TargetIds; // x23
  BattleLogicNomal_o *v96; // x20
  bool exists; // w28
  BattleLogicSkill_o *logicskill; // x20
  System_Int32_array *v99; // x0
  __int64 v100; // x1
  const MethodInfo *v101; // x7
  System_Collections_ICollection_o *v102; // x0
  __int64 v103; // x1
  BattleLogicTask_array *v104; // x23
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v106; // x3
  BattleLogicTask_o *v107; // x0
  BattleLogic_o *v108; // x0
  BattleLogicNomal_o *v109; // x20
  __int64 v110; // x1
  BattleData_o *v111; // x0
  int32_t v112; // w23
  Il2CppObject *v113; // x22
  BattleServantData_o *isEndAct; // x0
  __int64 v115; // x1
  BattleServantData_o *selfConcatSvtIndividualities_k__BackingField; // x24
  BattleBuffData_CheckIndividualitiesData_o *v117; // x20
  int v118; // w8
  int i; // w19
  BattleBuffData_BuffData_o *v120; // x26
  BattleSkillInfoData_o *v121; // x25
  __int64 v122; // x0
  __int64 v123; // x1
  struct System_Int32_array *v124; // x8
  __int64 v125; // x0
  __int64 v126; // x1
  struct System_Int32_array *v127; // x8
  BattleData_o *v128; // x0
  BattleServantData_o *v129; // x27
  __int64 v130; // x1
  SkillLvEntity_o *v131; // x0
  __int64 v132; // x1
  SkillLvEntity_o *v133; // x28
  BattleData_o *v134; // x0
  _BOOL8 v135; // x0
  __int64 v136; // x1
  BattleLogic_o *v137; // x0
  int32_t v138; // w20
  __int64 v139; // x0
  __int64 v140; // x1
  System_Int32_array *v141; // x26
  BattleLogicNomal_o *v142; // x20
  bool v143; // w27
  BattleLogicSkill_o *v144; // x20
  System_Int32_array *v145; // x0
  __int64 v146; // x1
  const MethodInfo *v147; // x7
  BattleLogicTask_array *v148; // x1
  BattleLogic_o *v149; // x0
  int v150; // w19
  BattleActionData_o *v151; // x1
  __int64 v153; // x0
  __int64 v154; // x0
  __int64 v155; // x0
  __int64 v156; // x0
  __int64 v157; // x0
  __int64 v158; // x0
  __int64 v159; // x0
  __int64 v160; // x0
  __int64 v161; // x0
  __int64 v162; // x0
  __int64 v163; // x0
  __int64 v164; // x0
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v165; // [xsp+8h] [xbp-F8h]
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v166; // [xsp+10h] [xbp-F0h]
  BattleActionData_o *actiondata; // [xsp+18h] [xbp-E8h]
  char v168; // [xsp+24h] [xbp-DCh]
  SkillLvMaster_o *v169; // [xsp+28h] [xbp-D8h]
  BattleLogicNomal_o *v170; // [xsp+30h] [xbp-D0h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v171; // [xsp+38h] [xbp-C8h] BYREF
  int v172[2]; // [xsp+60h] [xbp-A0h]
  int v173; // [xsp+68h] [xbp-98h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v174; // [xsp+70h] [xbp-90h] BYREF
  WarEntity_o *entity; // [xsp+A0h] [xbp-60h] BYREF

  if ( (byte_42B3258 & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_AiNpcBattleServantData___ctor__);
    sub_B52984(&System_Action_AiNpcBattleServantData__TypeInfo);
    sub_B52984(&BattleActionData_TypeInfo);
    sub_B52984(&BattleSkillInfoData_TypeInfo);
    sub_B52984(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_BuffMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_B52984(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    sub_B52984(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData_____ctor__);
    sub_B52984(&System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____Dispose__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____get_Current__);
    sub_B52984(&int___TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_KeyValuePair_int__BattleBuffData_BuffData____get_Key__);
    sub_B52984(&Method_System_Collections_Generic_KeyValuePair_int__BattleBuffData_BuffData____get_Value__);
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_AiNpcBattleServantData__ForEach__);
    sub_B52984(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_BattleLogicNomal___c__DisplayClass31_0__createEndTurnPlayer_b__0__);
    sub_B52984(&BattleLogicNomal___c__DisplayClass31_0_TypeInfo);
    sub_B52984(&StringLiteral_8856/*"MOTION_PLAYER_TURN_END"*/);
    byte_42B3258 = 1;
  }
  v170 = this;
  entity = 0LL;
  memset(&v174, 0, sizeof(v174));
  v173 = 0;
  v4 = sub_B52A54(BattleLogicNomal___c__DisplayClass31_0_TypeInfo);
  BattleLogicNomal___c__DisplayClass31_0___ctor((BattleLogicNomal___c__DisplayClass31_0_o *)v4, 0LL);
  if ( !v4 )
    goto LABEL_207;
  *(_QWORD *)(v4 + 32) = this;
  sub_B52920((BattleServantConfConponent_o *)(v4 + 32), (System_Int32_array **)this, v7, v8, v9, v10, v11, v12);
  BattleLogicNomal__SetNextTargetId(this, v13);
  actiondata = (BattleActionData_o *)sub_B52A54(BattleActionData_TypeInfo);
  BattleActionData___ctor(actiondata, 0LL);
  *(_BYTE *)(v4 + 16) = 0;
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_207;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_BuffMaster___);
  if ( !this->fields.logic )
    goto LABEL_207;
  v14 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  BattleLogic__resetReducedHpAll(this->fields.logic, 0LL);
  Instance = (__int64)this->fields.logic;
  if ( !Instance )
    goto LABEL_207;
  BattleLogic__updateResultServant((BattleLogic_o *)Instance, 0LL);
  if ( !actiondata )
    goto LABEL_207;
  BattleActionData__setStateField(actiondata, 0LL);
  v15 = (System_Int32_array **)StringLiteral_8856/*"MOTION_PLAYER_TURN_END"*/;
  actiondata->fields.motionname = (struct System_String_o *)StringLiteral_8856/*"MOTION_PLAYER_TURN_END"*/;
  sub_B52920((BattleServantConfConponent_o *)&actiondata->fields.motionname, v15, v16, v17, v18, v19, v20, v21);
  v166 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B52A54(System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v166,
    (const MethodInfo_2F27154 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData_____ctor__);
  v165 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B52A54(System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v165,
    (const MethodInfo_2F27154 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData_____ctor__);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_207;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  v169 = (SkillLvMaster_o *)Instance;
  if ( !this->fields.data )
    goto LABEL_207;
  QuestIndividualities = (System_Int32_array **)BattleData__getQuestIndividualities(this->fields.data, 0LL);
  *(_QWORD *)(v4 + 24) = QuestIndividualities;
  sub_B52920((BattleServantConfConponent_o *)(v4 + 24), QuestIndividualities, v23, v24, v25, v26, v27, v28);
  v29 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v29,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (__int64)this->fields.data;
  if ( !Instance )
    goto LABEL_207;
  Instance = (__int64)BattleData__getFieldPlayerServantList((BattleData_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_207;
  v30 = *(_DWORD *)(Instance + 24);
  v31 = Instance;
  if ( v30 >= 1 )
  {
    v168 = 0;
    v32 = 0;
    while ( 1 )
    {
      if ( v32 >= v30 )
        goto LABEL_212;
      v33 = v31 + 8LL * (int)v32;
      v35 = *(_QWORD *)(v33 + 32);
      v34 = (__int64 *)(v33 + 32);
      Instance = v35;
      if ( !v35 )
        goto LABEL_207;
      Instance = BattleServantData__isAlive((BattleServantData_o *)Instance, 0, 0LL);
      if ( (Instance & 1) != 0 )
      {
        Instance = (__int64)v170->fields.data;
        if ( !Instance )
          goto LABEL_207;
        Instance = BattleData__checkAliveEnemys((BattleData_o *)Instance, 0LL);
        if ( (Instance & 1) != 0 )
        {
          v36 = 1;
        }
        else
        {
          Instance = (__int64)v170->fields.data;
          if ( !Instance )
            goto LABEL_207;
          Instance = BattleData__checkDefeatPoint((BattleData_o *)Instance, 1, 0LL);
          v36 = Instance & 1;
        }
        if ( v32 >= *(_DWORD *)(v31 + 24) )
          goto LABEL_212;
        Instance = *v34;
        if ( !*v34 )
          goto LABEL_207;
        Instance = BattleServantData__turnProgressing(
                     (BattleServantData_o *)Instance,
                     *(System_Int32_array **)(v4 + 24),
                     v170->fields.logic,
                     v36,
                     actiondata,
                     0LL);
        if ( v32 >= *(_DWORD *)(v31 + 24) )
          goto LABEL_212;
        v37 = Instance;
        Instance = *v34;
        if ( !*v34 )
          goto LABEL_207;
        Instance = BattleServantData__isAliveLogic((BattleServantData_o *)Instance, 0, 0LL);
        if ( (Instance & 1) != 0 )
        {
          if ( v32 >= *(_DWORD *)(v31 + 24) )
            goto LABEL_212;
          Instance = *v34;
          if ( !*v34 )
            goto LABEL_207;
          Instance = (__int64)BattleServantData__getTTurnEndBufflist((BattleServantData_o *)Instance, 0LL);
          if ( !Instance )
            goto LABEL_207;
          v38 = (WarBoardEvalValueSquare_EvalValueSquare_o *)Instance;
          if ( *(_QWORD *)(Instance + 24) )
          {
            if ( v32 >= *(_DWORD *)(v31 + 24) )
              goto LABEL_212;
            Instance = (__int64)v165;
            if ( !*v34 || !v165 )
              goto LABEL_207;
            System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
              v165,
              *(_DWORD *)(*v34 + 24),
              v38,
              (const MethodInfo_2F27D08 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
          }
        }
        if ( v32 >= *(_DWORD *)(v31 + 24) )
          goto LABEL_212;
        if ( !*v34 )
          goto LABEL_207;
        Instance = *(_QWORD *)(*v34 + 760);
        if ( !Instance )
          goto LABEL_207;
        v168 |= v37;
        Instance = (__int64)BattleBuffData__usedProgressing((BattleBuffData_o *)Instance, 0LL);
      }
      if ( v32 >= *(_DWORD *)(v31 + 24) )
        goto LABEL_212;
      Instance = *v34;
      if ( !*v34 )
        goto LABEL_207;
      if ( *(_BYTE *)(Instance + 516) )
      {
        Instance = (__int64)BattleServantData__turnBuffProgressing(
                              (BattleServantData_o *)Instance,
                              *(_BYTE *)(v4 + 16),
                              *(System_Int32_array **)(v4 + 24),
                              v170->fields.logic,
                              0LL,
                              0LL);
        if ( v32 >= *(_DWORD *)(v31 + 24) )
          goto LABEL_212;
        v39 = Instance;
        Instance = *v34;
        if ( !*v34 )
          goto LABEL_207;
        Instance = BattleServantData__isAlive((BattleServantData_o *)Instance, 0, 0LL);
        if ( (Instance & 1) != 0 )
        {
          if ( v32 >= *(_DWORD *)(v31 + 24) )
            goto LABEL_212;
          Instance = *v34;
          if ( !*v34 )
            goto LABEL_207;
          Instance = BattleServantData__isAliveLogic((BattleServantData_o *)Instance, 0, 0LL);
          if ( (Instance & 1) != 0 )
          {
            if ( !v39 )
              goto LABEL_207;
            if ( *(_QWORD *)(v39 + 24) )
            {
              if ( v32 >= *(_DWORD *)(v31 + 24) )
                goto LABEL_212;
              Instance = (__int64)v166;
              if ( !*v34 || !v166 )
                goto LABEL_207;
              System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
                v166,
                *(_DWORD *)(*v34 + 24),
                (WarBoardEvalValueSquare_EvalValueSquare_o *)v39,
                (const MethodInfo_2F27D08 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
            }
          }
        }
        if ( v32 >= *(_DWORD *)(v31 + 24) )
          goto LABEL_212;
        if ( !*v34 )
          goto LABEL_207;
        if ( !v29 )
          goto LABEL_207;
        System_Collections_Generic_List_int___Add(
          v29,
          *(_DWORD *)(*v34 + 24),
          (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
        if ( !v39 )
          goto LABEL_207;
        v40 = *(_DWORD *)(v39 + 24);
        if ( v40 >= 1 )
          break;
      }
LABEL_73:
      v30 = *(_DWORD *)(v31 + 24);
      if ( (int)++v32 >= v30 )
        goto LABEL_76;
    }
    v41 = 0;
    while ( v41 < v40 )
    {
      v42 = v39 + 8LL * (int)v41;
      v45 = *(_QWORD *)(v42 + 32);
      v44 = v42 + 32;
      v43 = v45;
      if ( !v45 || !v14 )
        goto LABEL_207;
      Instance = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                   v14,
                   &entity,
                   *(_DWORD *)(v43 + 16),
                   (const MethodInfo_23E2334 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
      if ( (Instance & 1) != 0 )
      {
        Instance = (__int64)entity;
        if ( !entity )
          goto LABEL_207;
        Instance = BuffEntity__checkBuffType((BuffEntity_o *)entity, 142, 0LL);
        if ( (Instance & 1) != 0 )
        {
          logic = v170->fields.logic;
          if ( !logic )
            goto LABEL_207;
          data = logic->fields.data;
          if ( !data )
            goto LABEL_207;
          if ( v41 >= *(_DWORD *)(v39 + 24) )
            break;
          if ( !*(_QWORD *)v44 )
            goto LABEL_207;
          v48 = *(_DWORD *)(*(_QWORD *)v44 + 28LL);
          if ( data->fields.endMasterSkillTurnBuffValue <= v48 )
            data->fields.endMasterSkillTurnBuffValue = v48;
        }
      }
      v40 = *(_DWORD *)(v39 + 24);
      if ( (int)++v41 >= v40 )
        goto LABEL_73;
    }
LABEL_212:
    v155 = sub_B52A88(Instance);
    sub_B52A28(v155, 0LL);
  }
  v168 = 0;
LABEL_76:
  Instance = (__int64)v170->fields.data;
  if ( !Instance )
    goto LABEL_207;
  Instance = (__int64)BattleData__getFieldEnemyServantList((BattleData_o *)Instance, 0, 0LL);
  v49 = v170->fields.data;
  if ( !v49 )
    goto LABEL_207;
  v50 = Instance;
  if ( !v49->fields.leaderDown || !v49->fields.endbattleFlg )
  {
    if ( !Instance )
      goto LABEL_207;
    v51 = *(_DWORD *)(Instance + 24);
    if ( v51 >= 1 )
    {
      v52 = 0;
      while ( v52 < v51 )
      {
        v53 = v50 + 8LL * (int)v52;
        v55 = *(_QWORD *)(v53 + 32);
        v54 = (__int64 *)(v53 + 32);
        Instance = v55;
        if ( !v55 )
          goto LABEL_207;
        if ( *(_BYTE *)(Instance + 516) )
        {
          Instance = (__int64)BattleServantData__turnBuffProgressing(
                                (BattleServantData_o *)Instance,
                                *(_BYTE *)(v4 + 16),
                                *(System_Int32_array **)(v4 + 24),
                                v170->fields.logic,
                                0LL,
                                0LL);
          if ( v52 >= *(_DWORD *)(v50 + 24) )
            goto LABEL_212;
          v56 = Instance;
          Instance = *v54;
          if ( !*v54 )
            goto LABEL_207;
          Instance = BattleServantData__isAlive((BattleServantData_o *)Instance, 0, 0LL);
          if ( (Instance & 1) != 0 )
          {
            if ( v52 >= *(_DWORD *)(v50 + 24) )
              goto LABEL_212;
            Instance = *v54;
            if ( !*v54 )
              goto LABEL_207;
            Instance = BattleServantData__isAliveLogic((BattleServantData_o *)Instance, 0, 0LL);
            if ( (Instance & 1) != 0 )
            {
              if ( !v56 )
                goto LABEL_207;
              if ( *(_QWORD *)(v56 + 24) )
              {
                if ( v52 >= *(_DWORD *)(v50 + 24) )
                  goto LABEL_212;
                Instance = (__int64)v166;
                if ( !*v54 || !v166 )
                  goto LABEL_207;
                System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
                  v166,
                  *(_DWORD *)(*v54 + 24),
                  (WarBoardEvalValueSquare_EvalValueSquare_o *)v56,
                  (const MethodInfo_2F27D08 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
              }
            }
          }
          if ( v52 >= *(_DWORD *)(v50 + 24) )
            goto LABEL_212;
          if ( !*v54 || !v29 )
            goto LABEL_207;
          System_Collections_Generic_List_int___Add(
            v29,
            *(_DWORD *)(*v54 + 24),
            (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
        }
        v51 = *(_DWORD *)(v50 + 24);
        if ( (int)++v52 >= v51 )
          goto LABEL_103;
      }
      goto LABEL_212;
    }
LABEL_103:
    v49 = v170->fields.data;
    if ( !v49 )
      goto LABEL_207;
  }
  if ( !v29 )
    goto LABEL_207;
  battleEvent = v49->fields.battleEvent;
  Instance = (__int64)System_Collections_Generic_List_int___ToArray(
                        v29,
                        (const MethodInfo_30590BC *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !battleEvent )
    goto LABEL_207;
  Instance = ((__int64 (__fastcall *)(struct BaseBattleEvent_o *, __int64, _QWORD, Il2CppMethodPointer))battleEvent->klass->vtable._34_ProgressNoExecJoinServantsBuff.method)(
               battleEvent,
               Instance,
               *(unsigned __int8 *)(v4 + 16),
               battleEvent->klass->vtable._35_IsPossibleAddBuffParam.methodPtr);
  v58 = v170->fields.data;
  if ( !v58 )
    goto LABEL_207;
  perf = v58->fields.perf;
  if ( !perf )
    goto LABEL_207;
  Instance = (__int64)v58->fields.defenceTargetData;
  if ( !Instance )
    goto LABEL_207;
  BattleDefenceTargetData__BuffTurnProgress((BattleDefenceTargetData_o *)Instance, perf->fields.defenceTarget, 0LL);
  v60 = v170->fields.data;
  if ( !v60 )
    goto LABEL_207;
  aiNpcDataList = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v60->fields.aiNpcDataList;
  v62 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B52A54(System_Action_AiNpcBattleServantData__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v62,
    (Il2CppObject *)v4,
    Method_BattleLogicNomal___c__DisplayClass31_0__createEndTurnPlayer_b__0__,
    (const MethodInfo_2627780 *)Method_System_Action_AiNpcBattleServantData___ctor__);
  if ( !aiNpcDataList )
    goto LABEL_207;
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    aiNpcDataList,
    (System_Action_T__o *)v62,
    (const MethodInfo_2FF231C *)Method_System_Collections_Generic_List_AiNpcBattleServantData__ForEach__);
  v63 = v170;
  v64 = v170->fields.data;
  if ( !v64
    || (Instance = (__int64)v64->fields._FieldEnvData_k__BackingField) == 0
    || (BattleFieldEnvironmentData__TurnProgressing(
          (BattleFieldEnvironmentData_o *)Instance,
          v170->fields.logic,
          *(_BYTE *)(v4 + 16),
          0LL),
        BattleLogicNomal__UpdateEndTurnBuff(v170, *(System_Int32_array **)(v4 + 24), v65),
        (v66 = v170->fields.data) == 0LL)
    || (Instance = (__int64)v165, v66->fields.currentTurn = 1, !v165) )
  {
LABEL_207:
    sub_B52A5C(Instance, v6);
  }
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
    &v171,
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v165,
    (const MethodInfo_2F282EC *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____GetEnumerator__);
  v174 = v171;
  while ( 1 )
  {
    v73 = (WarEntity_o *)System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
                           &v174,
                           (const MethodInfo_28895A0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____MoveNext__);
    if ( ((unsigned __int8)v73 & 1) == 0 )
      break;
    value = (BattleBuffData_BuffData_array *)v174.fields.current.fields.value;
    if ( !v174.fields.current.fields.value )
      sub_B52A5C(v73, v74);
    monitor = (int)v174.fields.current.fields.value[1].monitor;
    if ( monitor >= 1 )
    {
      key = (int32_t)v174.fields.current.fields.key;
      v70 = 0;
      v71 = 1;
LABEL_119:
      if ( v70 >= monitor )
      {
        v154 = sub_B52A88(v73);
        sub_B52A28(v154, 0LL);
      }
      v72 = value->m_Items[v70];
      if ( !v72 )
        sub_B52A5C(v73, v74);
      if ( v72->fields._isRemove )
        goto LABEL_155;
      if ( !v14 )
        sub_B52A5C(v73, v74);
      v73 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
              v14,
              v72->fields.buffId,
              (const MethodInfo_23E22D8 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
      if ( !v73 )
        goto LABEL_155;
      v75 = (BattleSkillInfoData_o *)sub_B52A54(BattleSkillInfoData_TypeInfo);
      BattleSkillInfoData___ctor(v75, 0LL);
      if ( !v75 )
        sub_B52A5C(v76, v77);
      v75->fields.svtUniqueId = key;
      vals = v72->fields.vals;
      if ( !vals )
        sub_B52A5C(v76, v77);
      if ( !vals->max_length )
      {
        v156 = sub_B52A88(v76);
        sub_B52A28(v156, 0LL);
      }
      v79 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))v75->klass->vtable._4_set_skillId.method)(
              v75,
              (unsigned int)vals->m_Items[1],
              v75->klass->vtable._5_get_skillId.methodPtr);
      v81 = v72->fields.vals;
      if ( !v81 )
        sub_B52A5C(v79, v80);
      if ( v81->max_length <= 1 )
      {
        v157 = sub_B52A88(v79);
        sub_B52A28(v157, 0LL);
      }
      v75->fields.skilllv = v81->m_Items[2];
      v82 = v63->fields.data;
      if ( !v82 )
        sub_B52A5C(0LL, v80);
      ServantData = BattleData__getServantData(v82, v75->fields.svtUniqueId, 0LL);
      v84 = ((unsigned __int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))v75->klass->vtable._5_get_skillId.method)(
              v75,
              v75->klass->vtable._6_get_IndividualityArray.methodPtr);
      if ( !v169 )
        sub_B52A5C(0LL, v84);
      v85 = SkillLvMaster__GetEntity(v169, v84, v75->fields.skilllv, 0LL);
      if ( !ServantData )
        sub_B52A5C(v85, v86);
      v87 = v85;
      v88 = v63->fields.data;
      if ( !v88 )
        sub_B52A5C(0LL, v86);
      v89 = BattleData__checkAliveOther(v88, ServantData->fields.uniqueId, 0LL);
      if ( !v89 )
      {
        if ( !v87 )
          sub_B52A5C(v89, v90);
        v91 = v63->fields.logic;
        if ( !v91 )
          sub_B52A5C(0LL, v90);
        v73 = (WarEntity_o *)BattleLogic__checkPtTargetFunction(v91, v87->fields.funcId, 0LL);
        if ( ((unsigned __int8)v73 & 1) == 0 )
          goto LABEL_155;
      }
      v92 = BattleServantData__GetRevengeIdCheckOpponentOnly(ServantData, v72, 0LL);
      if ( (v92 & 0x80000000) != 0 )
      {
        v96 = v170;
        TargetIds = Target__getTargetIds(v170->fields.data, v75->fields.svtUniqueId, -1, key, 13, 0LL, 0LL);
        exists = BattleSkillInfoData__ExistsNoTargetNoActionType(v75, 0LL);
      }
      else
      {
        v93 = sub_B5299C(int___TypeInfo, 1LL);
        TargetIds = (System_Int32_array *)v93;
        if ( !v93 )
          sub_B52A5C(0LL, v94);
        if ( !*(_DWORD *)(v93 + 24) )
        {
          v159 = sub_B52A88(v93);
          sub_B52A28(v159, 0LL);
        }
        *(_DWORD *)(v93 + 32) = v92;
        v96 = v170;
        exists = 0;
      }
      logicskill = v96->fields.logicskill;
      v99 = (System_Int32_array *)sub_B5299C(int___TypeInfo, 1LL);
      if ( !v99 )
        sub_B52A5C(0LL, v100);
      if ( !v99->max_length )
      {
        v158 = sub_B52A88(v99);
        sub_B52A28(v158, 0LL);
      }
      v99->m_Items[1] = key;
      if ( !logicskill )
        sub_B52A5C(v99, v100);
      v102 = (System_Collections_ICollection_o *)BattleLogicSkill__taskSkill(
                                                   logicskill,
                                                   v75,
                                                   v99,
                                                   TargetIds,
                                                   1,
                                                   exists,
                                                   0,
                                                   v101);
      v63 = v170;
      v104 = (BattleLogicTask_array *)v102;
      if ( (v71 & 1) != 0 )
      {
        IsNullOrEmpty = BasicHelper__IsNullOrEmpty(v102, 0LL);
        if ( IsNullOrEmpty )
        {
          v71 = 1;
          goto LABEL_153;
        }
        if ( !v104 )
          sub_B52A5C(IsNullOrEmpty, v103);
        if ( !v104->max_length )
        {
          v164 = sub_B52A88(IsNullOrEmpty);
          sub_B52A28(v164, 0LL);
        }
        v107 = v104->m_Items[0];
        if ( !v107 )
          sub_B52A5C(0LL, v103);
        BattleLogicTask__SetDisplayTriggerIntervalBuff(v107, ServantData, value, v106);
      }
      v71 = 0;
LABEL_153:
      v108 = v170->fields.logic;
      if ( !v108 )
        sub_B52A5C(0LL, v103);
      BattleLogic__addBattleLogicTask(v108, v104, 0LL);
LABEL_155:
      monitor = value->max_length;
      if ( (int)++v70 >= monitor )
        continue;
      goto LABEL_119;
    }
  }
  v172[0] = 1264;
  v173 = 1;
  System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
    &v174,
    (const MethodInfo_288970C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____Dispose__);
  v173 = 0;
  v109 = v170;
  Instance = (__int64)v166;
  if ( !v166 )
    goto LABEL_207;
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
    &v171,
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v166,
    (const MethodInfo_2F282EC *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____GetEnumerator__);
  v174 = v171;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
            &v174,
            (const MethodInfo_28895A0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____MoveNext__) )
  {
    v111 = v109->fields.data;
    if ( !v111 )
      sub_B52A5C(0LL, v110);
    v112 = (int32_t)v174.fields.current.fields.key;
    v113 = v174.fields.current.fields.value;
    isEndAct = BattleData__getServantData(v111, (int32_t)v174.fields.current.fields.key, 0LL);
    selfConcatSvtIndividualities_k__BackingField = isEndAct;
    if ( isEndAct )
    {
      v117 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B52A54(BattleBuffData_CheckIndividualitiesData_TypeInfo);
      BattleBuffData_CheckIndividualitiesData___ctor(
        v117,
        selfConcatSvtIndividualities_k__BackingField,
        0LL,
        0LL,
        0LL,
        0LL,
        0LL);
      if ( !v117 )
        sub_B52A5C(isEndAct, v115);
      selfConcatSvtIndividualities_k__BackingField = (BattleServantData_o *)v117->fields._selfConcatSvtIndividualities_k__BackingField;
      v109 = v170;
    }
    if ( !v113 )
      sub_B52A5C(isEndAct, v115);
    v118 = (int)v113[1].monitor;
    if ( v118 >= 1 )
    {
      for ( i = 0; i < v118; ++i )
      {
        if ( i >= (unsigned int)v118 )
        {
          v153 = sub_B52A88(isEndAct);
          sub_B52A28(v153, 0LL);
        }
        v120 = (BattleBuffData_BuffData_o *)*((_QWORD *)&v113[2].klass + i);
        if ( !v120 )
          sub_B52A5C(isEndAct, v115);
        if ( !v120->fields._isRemove )
        {
          if ( !v14 )
            sub_B52A5C(isEndAct, v115);
          isEndAct = (BattleServantData_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                              v14,
                                              v120->fields.buffId,
                                              (const MethodInfo_23E22D8 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
          if ( isEndAct )
          {
            isEndAct = (BattleServantData_o *)BuffEntity__isEndAct(
                                                (BuffEntity_o *)isEndAct,
                                                (System_Int32_array *)selfConcatSvtIndividualities_k__BackingField,
                                                0LL);
            if ( ((unsigned __int8)isEndAct & 1) != 0 )
            {
              isEndAct = (BattleServantData_o *)BattleBuffData_BuffData__checkAct(v120, 1, 0LL);
              if ( ((unsigned __int8)isEndAct & 1) != 0 )
              {
                v121 = (BattleSkillInfoData_o *)sub_B52A54(BattleSkillInfoData_TypeInfo);
                BattleSkillInfoData___ctor(v121, 0LL);
                if ( !v121 )
                  sub_B52A5C(v122, v123);
                v121->fields.svtUniqueId = v112;
                v124 = v120->fields.vals;
                if ( !v124 )
                  sub_B52A5C(v122, v123);
                if ( !v124->max_length )
                {
                  v161 = sub_B52A88(v122);
                  sub_B52A28(v161, 0LL);
                }
                v125 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))v121->klass->vtable._4_set_skillId.method)(
                         v121,
                         (unsigned int)v124->m_Items[1],
                         v121->klass->vtable._5_get_skillId.methodPtr);
                v127 = v120->fields.vals;
                if ( !v127 )
                  sub_B52A5C(v125, v126);
                if ( v127->max_length <= 1 )
                {
                  v160 = sub_B52A88(v125);
                  sub_B52A28(v160, 0LL);
                }
                v121->fields.skilllv = v127->m_Items[2];
                v128 = v109->fields.data;
                if ( !v128 )
                  sub_B52A5C(0LL, v126);
                v129 = BattleData__getServantData(v128, v121->fields.svtUniqueId, 0LL);
                v130 = ((unsigned __int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))v121->klass->vtable._5_get_skillId.method)(
                         v121,
                         v121->klass->vtable._6_get_IndividualityArray.methodPtr);
                if ( !v169 )
                  sub_B52A5C(0LL, v130);
                v131 = SkillLvMaster__GetEntity(v169, v130, v121->fields.skilllv, 0LL);
                if ( !v129 )
                  sub_B52A5C(v131, v132);
                v133 = v131;
                v134 = v109->fields.data;
                if ( !v134 )
                  sub_B52A5C(0LL, v132);
                v135 = BattleData__checkAliveOther(v134, v129->fields.uniqueId, 0LL);
                if ( v135 )
                  goto LABEL_189;
                if ( !v133 )
                  sub_B52A5C(v135, v136);
                v137 = v109->fields.logic;
                if ( !v137 )
                  sub_B52A5C(0LL, v136);
                isEndAct = (BattleServantData_o *)BattleLogic__checkPtTargetFunction(v137, v133->fields.funcId, 0LL);
                if ( ((unsigned __int8)isEndAct & 1) != 0 )
                {
LABEL_189:
                  v138 = BattleServantData__GetRevengeIdCheckOpponentOnly(v129, v120, 0LL);
                  if ( (v138 & 0x80000000) != 0 )
                  {
                    v142 = v170;
                    v141 = Target__getTargetIds(v170->fields.data, v121->fields.svtUniqueId, -1, v112, 13, 0LL, 0LL);
                    v143 = BattleSkillInfoData__ExistsNoTargetNoActionType(v121, 0LL);
                  }
                  else
                  {
                    v139 = sub_B5299C(int___TypeInfo, 1LL);
                    v141 = (System_Int32_array *)v139;
                    if ( !v139 )
                      sub_B52A5C(0LL, v140);
                    if ( !*(_DWORD *)(v139 + 24) )
                    {
                      v162 = sub_B52A88(v139);
                      sub_B52A28(v162, 0LL);
                    }
                    *(_DWORD *)(v139 + 32) = v138;
                    v142 = v170;
                    v143 = 0;
                  }
                  v144 = v142->fields.logicskill;
                  v145 = (System_Int32_array *)sub_B5299C(int___TypeInfo, 1LL);
                  if ( !v145 )
                    sub_B52A5C(0LL, v146);
                  if ( !v145->max_length )
                  {
                    v163 = sub_B52A88(v145);
                    sub_B52A28(v163, 0LL);
                  }
                  v145->m_Items[1] = v112;
                  if ( !v144 )
                    sub_B52A5C(v145, v146);
                  v148 = BattleLogicSkill__taskSkill(v144, v121, v145, v141, 1, v143, 0, v147);
                  v109 = v170;
                  v149 = v170->fields.logic;
                  if ( !v149 )
                    sub_B52A5C(0LL, v148);
                  BattleLogic__addBattleLogicTask(v149, v148, 0LL);
                }
              }
            }
          }
        }
        v118 = (int)v113[1].monitor;
      }
    }
  }
  v172[0] = 1728;
  v150 = ++v173;
  System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
    &v174,
    (const MethodInfo_288970C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____Dispose__);
  if ( v150 && v172[v150 - 1] == 1728 )
    v173 = v150 - 1;
  Instance = (__int64)v109->fields.logic;
  if ( !Instance )
    goto LABEL_207;
  if ( (v168 & 1) != 0 )
    v151 = actiondata;
  else
    v151 = 0LL;
  return BattleLogic__PrevReturnCreateActionData((BattleLogic_o *)Instance, v151, actiondata, 0LL);
}


BattleActionData_o *__fastcall BattleLogicNomal__createPlayMotion(
        BattleLogicNomal_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  __int64 v4; // x20
  __int64 v5; // x0
  const MethodInfo *v6; // x1
  System_Int32_array **motionName; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_Int32_array **motionMessage; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Int32_array **targetObject; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7

  if ( (byte_42B3255 & 1) == 0 )
  {
    sub_B52984(&BattleActionData_TypeInfo);
    byte_42B3255 = 1;
  }
  v4 = sub_B52A54(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v4, 0LL);
  if ( !v4 || (BattleActionData__setStateMotion((BattleActionData_o *)v4, 0LL), !task) )
    sub_B52A5C(v5, v6);
  *(_BYTE *)(v4 + 241) = task->fields.isForcedSpeedOne;
  *(_DWORD *)(v4 + 32) = BattleLogicTask__getActorId(task, v6);
  motionName = (System_Int32_array **)task->fields.motionName;
  *(_QWORD *)(v4 + 64) = motionName;
  sub_B52920((BattleServantConfConponent_o *)(v4 + 64), motionName, v8, v9, v10, v11, v12, v13);
  motionMessage = (System_Int32_array **)task->fields.motionMessage;
  *(_QWORD *)(v4 + 128) = motionMessage;
  sub_B52920((BattleServantConfConponent_o *)(v4 + 128), motionMessage, v15, v16, v17, v18, v19, v20);
  *(_DWORD *)(v4 + 136) = task->fields.messageType;
  targetObject = (System_Int32_array **)task->fields.targetObject;
  *(_QWORD *)(v4 + 72) = targetObject;
  sub_B52920((BattleServantConfConponent_o *)(v4 + 72), targetObject, v22, v23, v24, v25, v26, v27);
  return (BattleActionData_o *)v4;
}


BattleActionData_o *__fastcall BattleLogicNomal__createShiftGuts(
        BattleLogicNomal_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  BattleData_o *data; // x21
  BattleLogicNomal_o *v4; // x20
  BattleServantData_o *v6; // x21
  int32_t ShiftGuts; // w0
  int32_t v8; // w22
  struct BattleData_o *v9; // x8
  System_String_o *v10; // x23
  const MethodInfo *v11; // x6
  struct BattleLogic_o *logic; // x8
  BuffEntity_o *buffEntity; // [xsp+8h] [xbp-28h] BYREF

  buffEntity = 0LL;
  if ( !task )
    goto LABEL_13;
  data = this->fields.data;
  v4 = this;
  this = (BattleLogicNomal_o *)BattleLogicTask__getActorId(task, (const MethodInfo *)task);
  if ( !data )
    goto LABEL_13;
  this = (BattleLogicNomal_o *)BattleData__getServantData(data, (int32_t)this, 0LL);
  if ( !this )
    goto LABEL_13;
  v6 = (BattleServantData_o *)this;
  this = (BattleLogicNomal_o *)BattleServantData__GetCheckIndividualitiesDataArrayForJudgeGuts(
                                 (BattleServantData_o *)this,
                                 0LL);
  buffEntity = 0LL;
  if ( !v6->fields.buffData )
    goto LABEL_13;
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
    v9 = v4->fields.data;
    if ( v9 )
    {
      v10 = (System_String_o *)this;
      this = (BattleLogicNomal_o *)v9->fields.perf;
      if ( this )
      {
        BattlePerformance__PlayShiftGuts((BattlePerformance_o *)this, 0LL);
        this = (BattleLogicNomal_o *)v6->fields.buffData;
        if ( this )
        {
          this = (BattleLogicNomal_o *)BattleBuffData__usedProgressing((BattleBuffData_o *)this, 0LL);
          logic = v4->fields.logic;
          if ( logic )
          {
            if ( logic->fields.logicReaction )
              return BattleLogicReaction__createResurrectionCommon(
                       (BattleLogicReaction_o *)this,
                       v6,
                       buffEntity,
                       v8,
                       task->fields.isForcedSpeedOne,
                       v10,
                       v11);
          }
        }
      }
    }
LABEL_13:
    sub_B52A5C(this, task);
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
  BattleServantData_o *ServantData; // x21
  __int64 v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_Int32_array **v14; // x1
  BattleActionData_ShiftServant_o *v15; // x22

  v4 = this;
  if ( (byte_42B325F & 1) == 0 )
  {
    sub_B52984(&BattleActionData_TypeInfo);
    sub_B52984(&BattleActionData_ShiftServant_TypeInfo);
    this = (BattleLogicNomal_o *)sub_B52984(&StringLiteral_8860/*"MOTION_SHIFT"*/);
    byte_42B325F = 1;
  }
  if ( !task )
    goto LABEL_10;
  data = v4->fields.data;
  this = (BattleLogicNomal_o *)BattleLogicTask__getActorId(task, (const MethodInfo *)task);
  if ( !data )
    goto LABEL_10;
  ServantData = BattleData__getServantData(data, (int32_t)this, 0LL);
  v7 = sub_B52A54(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v7, 0LL);
  if ( !ServantData )
    goto LABEL_10;
  if ( !v7 )
    goto LABEL_10;
  *(_DWORD *)(v7 + 32) = ServantData->fields.uniqueId;
  v14 = (System_Int32_array **)StringLiteral_8860/*"MOTION_SHIFT"*/;
  *(_QWORD *)(v7 + 64) = StringLiteral_8860/*"MOTION_SHIFT"*/;
  sub_B52920((BattleServantConfConponent_o *)(v7 + 64), v14, v8, v9, v10, v11, v12, v13);
  v15 = (BattleActionData_ShiftServant_o *)sub_B52A54(BattleActionData_ShiftServant_TypeInfo);
  BattleActionData_ShiftServant___ctor(v15, 0LL);
  if ( !v15
    || (BattleActionData_ShiftServant__setBeforeSvtData(v15, ServantData, 0LL),
        BattleServantData__setShiftServant(ServantData, v4->fields.data, 1, 0LL),
        BattleServantData__SetIsBattleShift(ServantData, 1, 0LL),
        BattleActionData_ShiftServant__setCheckSvtData(v15, ServantData, 0LL),
        BattleActionData__setShiftServant((BattleActionData_o *)v7, v15, 0LL),
        (this = (BattleLogicNomal_o *)v4->fields.logic) == 0LL) )
  {
LABEL_10:
    sub_B52A5C(this, task);
  }
  BattleLogic__actEnemyPtPassiveSkill((BattleLogic_o *)this, ServantData->fields.uniqueId, 1, 0, 0LL);
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

  if ( (byte_42B3256 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_11174/*"RESET_CAMERA_BAT"*/);
    byte_42B3256 = 1;
  }
  StartTurn = BattleLogicNomal__createStartTurn(this, task, method);
  data = this->fields.data;
  if ( !data )
    goto LABEL_19;
  if ( !data->fields.isMultiTargetBattle || data->fields.justDeadTargetId == -1 )
    return 0LL;
  StartTurn = BattleLogicNomal__DeadChangePos(this, v6);
  v8 = StartTurn;
  if ( StartTurn )
  {
    v9 = this->fields.data;
    if ( !v9 )
      goto LABEL_19;
    perf = v9->fields.perf;
    if ( !perf )
      goto LABEL_19;
    actioncamera = (UnityEngine_Object_o *)perf->fields.actioncamera;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
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
              (System_String_o *)StringLiteral_11174/*"RESET_CAMERA_BAT"*/,
              0LL);
            return v8;
          }
        }
      }
LABEL_19:
      sub_B52A5C(StartTurn, v6);
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
  int v6; // w10
  unsigned int v7; // w8
  __int64 v8; // x10
  struct BattleData_o *v9; // x8
  struct BattleData_o *v10; // x8
  __int64 v12; // x0

  data = this->fields.data;
  if ( !data )
    goto LABEL_13;
  data = BattleData__getFieldServantList((BattleData_o *)data, 0, 0LL);
  if ( !data )
    goto LABEL_13;
  v6 = *((_DWORD *)data + 6);
  if ( v6 >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( v7 >= v6 )
      {
        v12 = sub_B52A88(data);
        sub_B52A28(v12, 0LL);
      }
      v8 = *((_QWORD *)data + (int)v7 + 4);
      if ( !v8 )
        break;
      *(_BYTE *)(v8 + 516) = 1;
      v6 = *((_DWORD *)data + 6);
      if ( (int)++v7 >= v6 )
        goto LABEL_8;
    }
LABEL_13:
    sub_B52A5C(data, task);
  }
LABEL_8:
  v9 = this->fields.data;
  if ( !v9 )
    goto LABEL_13;
  v9->fields.systemflg_skipDeadtemp = 0;
  v10 = this->fields.data;
  if ( !v10 )
    goto LABEL_13;
  if ( !task )
    goto LABEL_13;
  data = v10->fields.battleEvent;
  if ( !data )
    goto LABEL_13;
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
  __int64 v9; // x0

  if ( !svtList )
    sub_B52A5C(this, 0LL);
  v3 = *(_QWORD *)&svtList->max_length;
  if ( (int)v3 < 1 )
    return 0;
  v5 = 0;
  v6 = 0LL;
  do
  {
    if ( v6 >= (unsigned int)v3 )
    {
      v9 = sub_B52A88(this);
      sub_B52A28(v9, 0LL);
    }
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
  __int64 v12; // x0

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
  {
LABEL_15:
    v12 = sub_B52A88(data);
    sub_B52A28(v12, 0LL);
  }
  if ( !*(_QWORD *)v9 )
LABEL_14:
    sub_B52A5C(data, *(_QWORD *)&uniqueId);
  return *(_DWORD *)(*(_QWORD *)v9 + 24LL);
}


BaseBattleEvent_o *__fastcall BattleLogicNomal__get_BattleEvent(BattleLogicNomal_o *this, const MethodInfo *method)
{
  struct BattleData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_B52A5C(this, method);
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

  if ( (byte_42B324A & 1) == 0 )
  {
    sub_B52984(&Method_BattleLogicNomal_shiftServantTaskReaction__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
    sub_B52984(&BattleLogic_reactionFunction_TypeInfo);
    byte_42B324A = 1;
  }
  v5 = (BattleLogic_reactionFunction_o *)sub_B52A54(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v5, (Il2CppObject *)this, Method_BattleLogicNomal_shiftServantTaskReaction__, 0LL);
  if ( !list )
    sub_B52A5C(v6, v7);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)list,
    36,
    (System_String_o *)v5,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
}


BattleLogicTask_array *__fastcall BattleLogicNomal__shiftServantTaskReaction(
        BattleLogicNomal_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  BattleLogicNomal_o *v4; // x21
  int32_t ActorId; // w0
  const MethodInfo *v6; // x2
  int32_t ShiftableUniqueId; // w0
  int32_t v8; // w20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x19
  BattleServantData_o *v10; // x22
  bool IsShiftGuts; // w23
  BattleLogicTask_o *v12; // x22
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x2
  struct BattleLogic_o *logic; // x8
  System_Collections_Generic_IEnumerable_T__o *TaskGuts; // x0
  BattleLogicTask_o *v19; // x21
  const MethodInfo *v20; // x1
  const MethodInfo *v21; // x3

  v4 = this;
  if ( (byte_42B3260 & 1) == 0 )
  {
    sub_B52984(&BattleLogicTask_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    this = (BattleLogicNomal_o *)sub_B52984(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_42B3260 = 1;
  }
  if ( !task )
    goto LABEL_20;
  ActorId = BattleLogicTask__getActorId(task, (const MethodInfo *)task);
  ShiftableUniqueId = BattleLogicNomal__getShiftableUniqueId(v4, ActorId, v6);
  if ( !ShiftableUniqueId )
    return v4->fields.zeroTask;
  v8 = ShiftableUniqueId;
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  this = (BattleLogicNomal_o *)v4->fields.data;
  if ( !this )
    goto LABEL_20;
  this = (BattleLogicNomal_o *)BattleData__getServantData((BattleData_o *)this, v8, 0LL);
  if ( !this )
    goto LABEL_20;
  v10 = (BattleServantData_o *)this;
  this = (BattleLogicNomal_o *)BattleServantData__GetCheckIndividualitiesDataArrayForJudgeGuts(
                                 (BattleServantData_o *)this,
                                 0LL);
  if ( !v10->fields.buffData )
    goto LABEL_20;
  IsShiftGuts = BattleBuffData__IsShiftGuts(
                  v10->fields.buffData,
                  v10,
                  (BattleBuffData_CheckIndividualitiesData_array *)this,
                  0LL);
  v12 = (BattleLogicTask_o *)sub_B52A54(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v12, v13);
  if ( !v12 )
    goto LABEL_20;
  if ( IsShiftGuts )
  {
    v12->fields.actiontype = 62;
    BattleLogicTask__setActor(v12, 3, v8, v14);
    if ( v9 )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v9,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v12,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
      logic = v4->fields.logic;
      if ( logic )
      {
        this = (BattleLogicNomal_o *)logic->fields.logicReaction;
        if ( this )
        {
          TaskGuts = (System_Collections_Generic_IEnumerable_T__o *)BattleLogicReaction__createTaskGuts(
                                                                      (BattleLogicReaction_o *)this,
                                                                      v8,
                                                                      v15);
          if ( TaskGuts )
            System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
              (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v9,
              TaskGuts,
              (const MethodInfo_2FF1854 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
          goto LABEL_18;
        }
      }
    }
LABEL_20:
    sub_B52A5C(this, task);
  }
  v12->fields.actiontype = 37;
  BattleLogicTask__setActor(v12, 3, v8, v14);
  if ( !v9 )
    goto LABEL_20;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v9,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v12,
    (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
LABEL_18:
  v19 = (BattleLogicTask_o *)sub_B52A54(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v19, v20);
  if ( !v19 )
    goto LABEL_20;
  v19->fields.actiontype = 36;
  BattleLogicTask__setActor(v19, 3, v8, v21);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v9,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v19,
    (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v9,
                                    (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *__fastcall BattleLogicNomal__taskAddCommandAttack(
        BattleLogicNomal_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v6; // x20
  BattleData_o *battleEvent; // x0
  __int64 v8; // x1
  struct BattleData_o *v9; // x8
  struct BattleComboData_o *combodata; // x8
  BattleDataDefine_c *v11; // x0
  BattleCommandData_o *v12; // x22
  BattleServantData_o *v13; // x23
  BattleLogicTask_o *v14; // x23
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x3

  if ( (byte_42B324C & 1) == 0 )
  {
    sub_B52984(&BattleDataDefine_TypeInfo);
    sub_B52984(&BattleLogicTask_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_B52984(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_42B324C = 1;
  }
  v6 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v6,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v9 = this->fields.data;
  if ( !v9 )
    goto LABEL_24;
  battleEvent = (BattleData_o *)v9->fields.battleEvent;
  if ( !battleEvent )
    goto LABEL_24;
  battleEvent = (BattleData_o *)((__int64 (__fastcall *)(BattleData_o *, void *))battleEvent->klass[1].vtable._5_isAiTarget.method)(
                                  battleEvent,
                                  battleEvent->klass[2]._1.image);
  if ( ((unsigned __int8)battleEvent & 1) == 0 )
    goto LABEL_22;
  if ( !data )
    goto LABEL_24;
  combodata = data->fields.combodata;
  if ( !combodata )
    goto LABEL_24;
  if ( combodata->fields.samecount < 3 )
    goto LABEL_22;
  v11 = BattleDataDefine_TypeInfo;
  if ( (BYTE3(BattleDataDefine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    v11 = BattleDataDefine_TypeInfo;
  }
  battleEvent = (BattleData_o *)BattleData__getSelectCommand(data, v11->static_fields->COMMAND_CARD_NUM_TO_SELECT, 0LL);
  if ( !battleEvent )
    goto LABEL_24;
  v12 = (BattleCommandData_o *)battleEvent;
  battleEvent = this->fields.data;
  if ( !battleEvent )
    goto LABEL_24;
  battleEvent = (BattleData_o *)BattleData__getServantData(battleEvent, v12->fields.uniqueId, 0LL);
  if ( !battleEvent )
    goto LABEL_24;
  v13 = (BattleServantData_o *)battleEvent;
  battleEvent = (BattleData_o *)BattleServantData__isAlive((BattleServantData_o *)battleEvent, 0, 0LL);
  if ( ((unsigned __int8)battleEvent & 1) == 0
    || !v13->fields.isEntry
    || (battleEvent = (BattleData_o *)BattleServantData__isAction(v13, 0LL), ((unsigned __int8)battleEvent & 1) == 0) )
  {
LABEL_22:
    if ( v6 )
      return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v6,
                                        (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_24:
    sub_B52A5C(battleEvent, v8);
  }
  v14 = (BattleLogicTask_o *)sub_B52A54(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v14, v15);
  if ( !v14 )
    goto LABEL_24;
  BattleLogicTask__setActor(v14, 2, v12->fields.uniqueId, v16);
  battleEvent = (BattleData_o *)this->fields.logictarget;
  if ( !battleEvent )
    goto LABEL_24;
  BattleLogicTarget__getTargetBattleServantData((BattleLogicTarget_o *)battleEvent, v14, v17);
  BattleLogicTask__setAddAttackCommand(v14, data->fields.combodata, v12, v18);
  v14->fields.isCanCounterTask = 1;
  if ( !v6 )
    goto LABEL_24;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v6,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v14,
    (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v6,
                                    (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *__fastcall BattleLogicNomal__taskBuffAdd(
        BattleLogicNomal_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x19
  __int64 v6; // x0
  __int64 v7; // x1
  BattleLogicTask_o *v8; // x20
  const MethodInfo *v9; // x1
  int v10; // w8
  const MethodInfo *v11; // x1

  if ( (byte_42B325C & 1) == 0 )
  {
    sub_B52984(&BattleLogicTask_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_B52984(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_42B325C = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( ltype == 35 )
  {
    v8 = (BattleLogicTask_o *)sub_B52A54(BattleLogicTask_TypeInfo);
    BattleLogicTask___ctor(v8, v11);
    if ( !v8 )
      goto LABEL_13;
    v10 = 19;
  }
  else
  {
    if ( ltype != 34 )
    {
      if ( v5 )
        return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v5,
                                          (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_13:
      sub_B52A5C(v6, v7);
    }
    v8 = (BattleLogicTask_o *)sub_B52A54(BattleLogicTask_TypeInfo);
    BattleLogicTask___ctor(v8, v9);
    if ( !v8 )
      goto LABEL_13;
    v10 = 18;
  }
  v8->fields.actiontype = v10;
  if ( !v5 )
    goto LABEL_13;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v5,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v8,
    (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v5,
                                    (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x19
  __int64 v6; // x1
  BattleLogic_o *logic; // x0
  BattleLogicTask_o *v8; // x20
  const MethodInfo *v9; // x1

  if ( (byte_42B324E & 1) == 0 )
  {
    sub_B52984(&BattleLogicTask_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_B52984(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_42B324E = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  logic = this->fields.logic;
  if ( !logic
    || (BattleLogic__resetOverKill(logic, 0LL),
        v8 = (BattleLogicTask_o *)sub_B52A54(BattleLogicTask_TypeInfo),
        BattleLogicTask___ctor(v8, v9),
        !v8)
    || (v8->fields.actiontype = 7, !v5) )
  {
    sub_B52A5C(logic, v6);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v5,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v8,
    (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v5,
                                    (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
    sub_B52A5C(this, *(_QWORD *)&ltype);
  }
  return v5->fields.zeroTask;
}


BattleLogicTask_array *__fastcall BattleLogicNomal__taskCommandAttack(
        BattleLogicNomal_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x19
  BattleCommandData_o *battleEvent; // x0
  __int64 v9; // x1
  struct BattleData_o *v10; // x8
  int32_t v11; // w22
  BattleCommandData_o *v12; // x23
  BattleServantData_o *v13; // x25
  BattleLogicTask_o *v14; // x24
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x4
  const MethodInfo *v17; // x3
  const MethodInfo *v19; // x3
  const MethodInfo *v20; // x4
  int32_t TreasureDvcId; // w0
  const MethodInfo *v22; // x2
  const MethodInfo *v23; // x2

  if ( (byte_42B324B & 1) == 0 )
  {
    sub_B52984(&BattleLogicTask_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_B52984(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_42B324B = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v10 = this->fields.data;
  if ( !v10 )
    goto LABEL_33;
  battleEvent = (BattleCommandData_o *)v10->fields.battleEvent;
  if ( !battleEvent )
    goto LABEL_33;
  battleEvent = (BattleCommandData_o *)(*(__int64 (__fastcall **)(BattleCommandData_o *, Il2CppClass *))&battleEvent->klass[2]._1.this_arg.bits)(
                                         battleEvent,
                                         battleEvent->klass[2]._1.element_class);
  if ( ((unsigned __int8)battleEvent & 1) != 0 )
  {
    if ( ltype == 3 )
      v11 = 2;
    else
      v11 = ltype == 2;
    this->fields.commandIndex = v11;
    if ( !data )
      goto LABEL_33;
    battleEvent = BattleData__getSelectCommand(data, v11, 0LL);
    if ( !battleEvent )
      goto LABEL_33;
    v12 = battleEvent;
    battleEvent = (BattleCommandData_o *)BattleCommandData__isBlank(battleEvent, 0LL);
    if ( ((unsigned __int8)battleEvent & 1) == 0 )
    {
      battleEvent = (BattleCommandData_o *)this->fields.data;
      if ( !battleEvent )
        goto LABEL_33;
      battleEvent = (BattleCommandData_o *)BattleData__getServantData(
                                             (BattleData_o *)battleEvent,
                                             v12->fields.uniqueId,
                                             0LL);
      if ( !battleEvent )
        goto LABEL_33;
      v13 = (BattleServantData_o *)battleEvent;
      battleEvent = (BattleCommandData_o *)BattleServantData__isAlive((BattleServantData_o *)battleEvent, 0, 0LL);
      if ( ((unsigned __int8)battleEvent & 1) != 0 && v13->fields.isEntry )
      {
        battleEvent = (BattleCommandData_o *)BattleServantData__isAction(v13, 0LL);
        if ( ((unsigned __int8)battleEvent & 1) != 0 )
        {
          battleEvent = (BattleCommandData_o *)BattleServantData__isCardTypeAction(v13, v12, 0LL);
          if ( ((unsigned __int8)battleEvent & 1) != 0 )
          {
            v14 = (BattleLogicTask_o *)sub_B52A54(BattleLogicTask_TypeInfo);
            BattleLogicTask___ctor(v14, v15);
            if ( v14 )
            {
              BattleLogicTask__setActionCommand(v14, data->fields.combodata, v12, v11, v16);
              if ( BattleData__isTutorial(data, 0LL) )
              {
                if ( BattleData__IsTutorialCriticalEnabled(data, 0LL) )
                  BattleCommandData__checkCriticalRate(v12, 0, 0LL);
              }
              else
              {
                BattleCommandData__LotteryPlayerSideCritical(v12, 0LL);
              }
              BattleLogicTask__setActor(v14, 2, v12->fields.uniqueId, v17);
              v14->fields.isCanCounterTask = 1;
              if ( v12->fields.treasureDvc < 1 )
              {
                BattleData__setTDChain(data, 0, 0LL);
                battleEvent = (BattleCommandData_o *)this->fields.logictarget;
                if ( battleEvent )
                {
                  battleEvent = (BattleCommandData_o *)BattleLogicTarget__getTargetBattleServantData(
                                                         (BattleLogicTarget_o *)battleEvent,
                                                         v14,
                                                         v23);
                  if ( v7 )
                  {
                    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                      v7,
                      (EventMissionProgressRequest_Argument_ProgressData_o *)v14,
                      (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
                    return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v7,
                                                      (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
                  }
                }
              }
              else
              {
                battleEvent = (BattleCommandData_o *)this->fields.logic;
                if ( battleEvent )
                {
                  BattleLogic__resetOverKill((BattleLogic_o *)battleEvent, 0LL);
                  BattleLogicTask__setActor(v14, 2, v13->fields.uniqueId, v19);
                  BattleLogicTask__setActionCommand(v14, data->fields.combodata, v12, v11, v20);
                  TreasureDvcId = BattleServantData__getTreasureDvcId(v13, 1, 0LL);
                  v14->fields.actiontype = 4;
                  v14->fields.treasureDvcId = TreasureDvcId;
                  v14->fields.tresureDvcLv = 1;
                  battleEvent = (BattleCommandData_o *)this->fields.logictarget;
                  if ( battleEvent )
                  {
                    battleEvent = (BattleCommandData_o *)BattleLogicTarget__getTargetBattleServantData(
                                                           (BattleLogicTarget_o *)battleEvent,
                                                           v14,
                                                           v22);
                    if ( v7 )
                    {
                      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                        v7,
                        (EventMissionProgressRequest_Argument_ProgressData_o *)v14,
                        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
                      BattleData__setTDChain(data, 1, 0LL);
                      return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v7,
                                                        (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
                    }
                  }
                }
              }
            }
LABEL_33:
            sub_B52A5C(battleEvent, v9);
          }
        }
      }
    }
  }
  if ( !v7 )
    goto LABEL_33;
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v7,
                                    (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *__fastcall BattleLogicNomal__taskCounterFunc(
        BattleLogicNomal_o *this,
        BattleData_o *data,
        bool isEnemy,
        bool isSkillCounter,
        bool isInitLogicHp,
        const MethodInfo *method)
{
  _BOOL4 v6; // w24
  _BOOL4 v7; // w26
  __int64 Instance; // x0
  __int64 wasAttackTargetId; // x1
  __int64 v12; // x8
  __int64 v13; // x23
  __int64 v14; // x8
  unsigned __int64 v15; // x28
  BattleServantData_o *v16; // x27
  BattleServantData_o *v17; // x20
  System_Collections_Generic_IEnumerable_T__o *v18; // x21
  void *monitor; // x8
  __int64 v20; // x24
  BattleBuffData_BuffData_o *v21; // x20
  __int64 v22; // x25
  const MethodInfo *v23; // x1
  const MethodInfo *v24; // x3
  int32_t v25; // w1
  const MethodInfo *v26; // x2
  int32_t counterLv; // w2
  int32_t counterOc; // w8
  __int64 v29; // x22
  BattleSkillInfoData_o *v30; // x26
  int32_t uniqueId; // w8
  BattleSkillInfoData_c *klass; // x9
  System_Int32_array *v33; // x22
  const MethodInfo *v34; // x6
  System_Int32_array **CounterMessage; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  const MethodInfo *v42; // x3
  __int64 v43; // x9
  BattleLogicNomal___c_c *v44; // x0
  struct BattleLogicNomal___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__15_0; // x20
  Il2CppObject *v47; // x21
  struct BattleLogicNomal___c_StaticFields *v48; // x0
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  struct BattleLogic_o *logic; // x8
  __int64 v57; // x0
  _BOOL4 v58; // [xsp+Ch] [xbp-94h]
  BattleLogicNomal_o *v59; // [xsp+10h] [xbp-90h]
  _BOOL4 v60; // [xsp+1Ch] [xbp-84h]
  SkillLvMaster_o *MasterData_WarQuestSelectionMaster; // [xsp+20h] [xbp-80h]
  System_Collections_Generic_HashSet_BattleBuffData_BuffData__o *v62; // [xsp+28h] [xbp-78h]
  DataMasterBase_WarMaster__WarEntity__int__o *v63; // [xsp+30h] [xbp-70h]
  char v64; // [xsp+3Ch] [xbp-64h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v65; // [xsp+40h] [xbp-60h]

  v6 = isInitLogicHp;
  v7 = isSkillCounter;
  if ( (byte_42B324D & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_BattleBuffData_BuffData___ctor__);
    sub_B52984(&System_Action_BattleBuffData_BuffData__TypeInfo);
    sub_B52984(&Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
    sub_B52984(&BattleLogicTask_TypeInfo);
    sub_B52984(&BattleSkillInfoData_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_BuffMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_B52984(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    sub_B52984(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Remove__);
    sub_B52984(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData___ctor___68489960);
    sub_B52984(&System_Collections_Generic_HashSet_BattleBuffData_BuffData__TypeInfo);
    sub_B52984(&int___TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleLogicTask__get_Count__);
    sub_B52984(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_BattleLogicNomal___c__taskCounterFunc_b__15_0__);
    sub_B52984(&BattleLogicNomal___c_TypeInfo);
    byte_42B324D = 1;
  }
  v65 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v65,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_73;
  MasterData_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                            (DataManager_o *)Instance,
                                                            (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_73;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_BuffMaster___);
  v63 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  if ( !data )
    goto LABEL_73;
  v12 = 288LL;
  if ( isEnemy )
    v12 = 296LL;
  v13 = *(__int64 *)((char *)&data->klass + v12);
  if ( !v13 )
    goto LABEL_73;
  v14 = *(_QWORD *)(v13 + 24);
  if ( (int)v14 >= 1 )
  {
    v15 = 0LL;
    do
    {
      if ( v15 >= (unsigned int)v14 )
      {
LABEL_72:
        v57 = sub_B52A88(Instance);
        sub_B52A28(v57, 0LL);
      }
      Instance = (__int64)BattleData__getServantData(data, *(_DWORD *)(v13 + 4 * v15 + 32), 0LL);
      if ( Instance )
      {
        v16 = (BattleServantData_o *)Instance;
        Instance = BattleServantData__isAliveLogic((BattleServantData_o *)Instance, 0, 0LL);
        if ( (Instance & 1) != 0 )
        {
          Instance = BattleServantData__isAction(v16, 0LL);
          if ( (Instance & 1) != 0 )
          {
            wasAttackTargetId = (unsigned int)v16->fields.wasAttackTargetId;
            if ( (_DWORD)wasAttackTargetId != -1 )
            {
              Instance = (__int64)BattleData__getServantData(data, wasAttackTargetId, 0LL);
              if ( Instance )
              {
                v17 = (BattleServantData_o *)Instance;
                if ( v16->fields.isEnemy != (*(_BYTE *)(Instance + 455) != 0) )
                {
                  if ( v6 )
                    BattleServantData__updateResultState((BattleServantData_o *)Instance, 0LL);
                  Instance = BattleServantData__isAliveLogic(v17, 0, 0LL);
                  if ( (Instance & 1) != 0 )
                  {
                    Instance = (__int64)v16->fields.buffData;
                    if ( !Instance )
                      goto LABEL_73;
                    Instance = (__int64)BattleBuffData__GetCounterFuncBuffDataList(
                                          (BattleBuffData_o *)Instance,
                                          v16,
                                          v17,
                                          0,
                                          0LL);
                    if ( !Instance )
                      goto LABEL_73;
                    v18 = (System_Collections_Generic_IEnumerable_T__o *)Instance;
                    if ( *(_QWORD *)(Instance + 24) )
                    {
                      v58 = v6;
                      v59 = this;
                      v62 = (System_Collections_Generic_HashSet_BattleBuffData_BuffData__o *)sub_B52A54(System_Collections_Generic_HashSet_BattleBuffData_BuffData__TypeInfo);
                      System_Collections_Generic_HashSet_BattleBuffData_BuffData____ctor(
                        v62,
                        v18,
                        (const MethodInfo_24E00F4 *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData___ctor___68489960);
                      monitor = v18[1].monitor;
                      if ( (int)monitor >= 1 )
                      {
                        v20 = 4LL;
                        v64 = 1;
                        v60 = v7;
                        do
                        {
                          if ( v20 - 4 >= (unsigned __int64)(unsigned int)monitor )
                            goto LABEL_72;
                          v21 = (BattleBuffData_BuffData_o *)*((_QWORD *)&v18->klass + v20);
                          if ( !v7 )
                            goto LABEL_76;
                          if ( !v21 )
                            goto LABEL_73;
                          if ( v21->fields.isSkillReaction )
                          {
LABEL_76:
                            v22 = sub_B52A54(BattleLogicTask_TypeInfo);
                            BattleLogicTask___ctor((BattleLogicTask_o *)v22, v23);
                            if ( !v22 )
                              goto LABEL_73;
                            v25 = isEnemy ? 3 : 2;
                            BattleLogicTask__setActor((BattleLogicTask_o *)v22, v25, v16->fields.uniqueId, v24);
                            BattleLogicTask__setTarget((BattleLogicTask_o *)v22, v16->fields.wasAttackTargetId, v26);
                            Instance = (__int64)v16->fields.buffData;
                            if ( !Instance )
                              goto LABEL_73;
                            Instance = BattleBuffData__checkBuffSuccessful((BattleBuffData_o *)Instance, v21, 1, 0LL);
                            if ( (Instance & 1) != 0 )
                            {
                              v16->fields.overkillTargetId = -1;
                              if ( !v21 )
                                goto LABEL_73;
                              wasAttackTargetId = (unsigned int)v21->fields.counterId;
                              counterLv = v21->fields.counterLv;
                              if ( v21->fields.isUseTreasureDevice )
                              {
                                counterOc = v21->fields.counterOc;
                                *(_DWORD *)(v22 + 48) = 5;
                                *(_DWORD *)(v22 + 84) = wasAttackTargetId;
                                *(_DWORD *)(v22 + 88) = counterLv;
                                *(_DWORD *)(v22 + 164) = counterOc;
                                *(_BYTE *)(v22 + 81) = 1;
                              }
                              else
                              {
                                Instance = (__int64)MasterData_WarQuestSelectionMaster;
                                if ( !MasterData_WarQuestSelectionMaster )
                                  goto LABEL_73;
                                Instance = (__int64)SkillLvMaster__GetEntity(
                                                      MasterData_WarQuestSelectionMaster,
                                                      wasAttackTargetId,
                                                      counterLv,
                                                      0LL);
                                if ( !Instance )
                                  goto LABEL_54;
                                v29 = Instance;
                                v30 = (BattleSkillInfoData_o *)sub_B52A54(BattleSkillInfoData_TypeInfo);
                                BattleSkillInfoData___ctor(v30, 0LL);
                                if ( !v30 )
                                  goto LABEL_73;
                                v30->fields.type = 20;
                                uniqueId = v16->fields.uniqueId;
                                klass = v30->klass;
                                v30->fields.index = 0;
                                v30->fields.svtUniqueId = uniqueId;
                                ((void (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))klass->vtable._4_set_skillId.method)(
                                  v30,
                                  *(unsigned int *)(v29 + 16),
                                  klass->vtable._5_get_skillId.methodPtr);
                                v30->fields.skilllv = *(_DWORD *)(v29 + 20);
                                Instance = sub_B5299C(int___TypeInfo, 1LL);
                                if ( !Instance )
                                  goto LABEL_73;
                                v33 = (System_Int32_array *)Instance;
                                if ( !*(_DWORD *)(Instance + 24) )
                                  goto LABEL_72;
                                *(_DWORD *)(Instance + 32) = v16->fields.wasAttackTargetId;
                                Instance = sub_B5299C(int___TypeInfo, 1LL);
                                if ( !Instance )
                                  goto LABEL_73;
                                if ( !*(_DWORD *)(Instance + 24) )
                                  goto LABEL_72;
                                *(_DWORD *)(Instance + 32) = v16->fields.uniqueId;
                                BattleLogicTask__setActionSkill(
                                  (BattleLogicTask_o *)v22,
                                  v30,
                                  v33,
                                  (System_Int32_array *)Instance,
                                  1,
                                  0,
                                  v34);
                                v7 = v60;
                              }
                              Instance = (__int64)v63;
                              if ( !v63 )
                                goto LABEL_73;
                              Instance = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                    v63,
                                                    v21->fields.buffId,
                                                    (const MethodInfo_23E22D8 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
                              if ( !Instance )
                                goto LABEL_73;
                              CounterMessage = (System_Int32_array **)BuffEntity__GetCounterMessage(
                                                                        (BuffEntity_o *)Instance,
                                                                        0LL);
                              *(_QWORD *)(v22 + 152) = CounterMessage;
                              sub_B52920(
                                (BattleServantConfConponent_o *)(v22 + 152),
                                CounterMessage,
                                v36,
                                v37,
                                v38,
                                v39,
                                v40,
                                v41);
                              *(_DWORD *)(v22 + 144) = 2;
                              *(_BYTE *)(v22 + 162) = 1;
                              if ( (v64 & 1) != 0 )
                                BattleLogicTask__SetDisplayTriggerIntervalBuff(
                                  (BattleLogicTask_o *)v22,
                                  v16,
                                  (BattleBuffData_BuffData_array *)v18,
                                  v42);
                              Instance = (__int64)v65;
                              if ( !v65 )
                                goto LABEL_73;
                              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                v65,
                                (EventMissionProgressRequest_Argument_ProgressData_o *)v22,
                                (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
                              Instance = (__int64)v62;
                              if ( !v62 )
                                goto LABEL_73;
                              Instance = System_Collections_Generic_HashSet_BattleBuffData_BuffData___Remove(
                                           v62,
                                           v21,
                                           (const MethodInfo_24E0858 *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Remove__);
                              v64 = 0;
                            }
                          }
LABEL_54:
                          LODWORD(monitor) = v18[1].monitor;
                          v43 = v20 - 3;
                          ++v20;
                        }
                        while ( v43 < (int)monitor );
                      }
                      v44 = BattleLogicNomal___c_TypeInfo;
                      if ( (BYTE3(BattleLogicNomal___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !BattleLogicNomal___c_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo);
                        v44 = BattleLogicNomal___c_TypeInfo;
                      }
                      static_fields = v44->static_fields;
                      this = v59;
                      v6 = v58;
                      _9__15_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__15_0;
                      if ( !_9__15_0 )
                      {
                        if ( (BYTE3(v44->vtable._0_Equals.methodPtr) & 4) != 0 && !v44->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(v44);
                          static_fields = BattleLogicNomal___c_TypeInfo->static_fields;
                        }
                        v47 = (Il2CppObject *)static_fields->__9;
                        _9__15_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B52A54(System_Action_BattleBuffData_BuffData__TypeInfo);
                        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
                          _9__15_0,
                          v47,
                          Method_BattleLogicNomal___c__taskCounterFunc_b__15_0__,
                          (const MethodInfo_2627780 *)Method_System_Action_BattleBuffData_BuffData___ctor__);
                        v48 = BattleLogicNomal___c_TypeInfo->static_fields;
                        v48->__9__15_0 = (struct System_Action_BattleBuffData_BuffData__o *)_9__15_0;
                        sub_B52920(
                          (BattleServantConfConponent_o *)&v48->__9__15_0,
                          (System_Int32_array **)_9__15_0,
                          v49,
                          v50,
                          v51,
                          v52,
                          v53,
                          v54);
                      }
                      BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                        (System_Collections_Generic_IEnumerable_T__o *)v62,
                        (System_Action_T__o *)_9__15_0,
                        (const MethodInfo_1A43210 *)Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
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
  if ( !v65 )
    goto LABEL_73;
  if ( v65->fields._size < 1 )
    goto LABEL_70;
  logic = this->fields.logic;
  if ( !logic || (Instance = (__int64)logic->fields.logicEnemyAi) == 0 )
LABEL_73:
    sub_B52A5C(Instance, wasAttackTargetId);
  BattleLogicEnemyAi__SetNextActIncludeTempDeadSvt((BattleLogicEnemyAi_o *)Instance, 1, 0LL);
LABEL_70:
  Instance = (__int64)this->fields.logic;
  if ( !Instance )
    goto LABEL_73;
  BattleLogic__AddUnExecutedUpdateIntervalBuffTasks(
    (BattleLogic_o *)Instance,
    (System_Collections_Generic_List_BattleLogicTask__o *)v65,
    1,
    0LL);
  BattleData__ResetWasAttackTargetId(data, 0LL);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v65,
                                    (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20
  __int64 v9; // x23
  const MethodInfo *v10; // x1
  __int64 v11; // x0
  __int64 v12; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Int32_array **gameObject; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  const MethodInfo *v26; // x3
  int32_t v27; // w1

  if ( (byte_42B3253 & 1) == 0 )
  {
    sub_B52984(&BattleLogicTask_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_B52984(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_42B3253 = 1;
  }
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v9 = sub_B52A54(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor((BattleLogicTask_o *)v9, v10);
  if ( !v9 )
    goto LABEL_11;
  *(_QWORD *)(v9 + 104) = motionName;
  *(_DWORD *)(v9 + 48) = 10;
  sub_B52920(
    (BattleServantConfConponent_o *)(v9 + 104),
    (System_Int32_array **)motionName,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  if ( !Tr )
    goto LABEL_11;
  gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Tr, 0LL);
  *(_QWORD *)(v9 + 112) = gameObject;
  sub_B52920((BattleServantConfConponent_o *)(v9 + 112), gameObject, v20, v21, v22, v23, v24, v25);
  if ( !svtData )
    goto LABEL_11;
  v27 = svtData->fields.isEnemy ? 3 : 2;
  BattleLogicTask__setActor((BattleLogicTask_o *)v9, v27, svtData->fields.uniqueId, v26);
  if ( !v8 )
LABEL_11:
    sub_B52A5C(v11, v12);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v8,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v9,
    (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v8,
                                    (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *__fastcall BattleLogicNomal__taskPlaySubEntryMotion(
        BattleLogicNomal_o *this,
        BattleServantData_o *svtData,
        UnityEngine_Transform_o *Tr,
        bool isTactical,
        const MethodInfo *method)
{
  System_Int32_array ***v9; // x8
  System_Int32_array **v10; // x24
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x20
  __int64 v12; // x21
  const MethodInfo *v13; // x1
  BattleEntity_o *battle_ent; // x0
  __int64 v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Int32_array **gameObject; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  struct BattleData_o *data; // x8
  System_String_o *v30; // x0
  const MethodInfo *v31; // x3
  BattleData_o *v32; // x8
  System_String_o *v33; // x22
  BattleLogicNomal_o *PlayerServantList; // x0
  const MethodInfo *v35; // x2
  Il2CppObject *v36; // x0
  System_String_o *v37; // x0
  int32_t uniqueId; // w2
  System_Int32_array **v39; // x19
  const MethodInfo *v40; // x3
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  struct BattleData_o *v47; // x8
  int32_t EnemyCountStartValue_k__BackingField; // w23
  System_String_o *v49; // x22
  BattleLogicNomal_o *EnemyServantList; // x0
  const MethodInfo *v51; // x2
  Il2CppObject *v52; // x0
  System_Int32_array **v53; // x22
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  int v61; // [xsp+8h] [xbp-38h] BYREF
  int32_t CountSubmember; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42B3254 & 1) == 0 )
  {
    sub_B52984(&BattleLogicTask_TypeInfo);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_B52984(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_2561/*"BATTLE_SUBENTRY_PLAYER"*/);
    sub_B52984(&StringLiteral_8853/*"MOTION_ENTRY"*/);
    sub_B52984(&StringLiteral_2559/*"BATTLE_SUBENTRY_ENEMY"*/);
    sub_B52984(&StringLiteral_2560/*"BATTLE_SUBENTRY_ENEMY_UNKNOWN"*/);
    sub_B52984(&StringLiteral_8854/*"MOTION_ENTRY_TAC"*/);
    byte_42B3254 = 1;
  }
  v9 = (System_Int32_array ***)&StringLiteral_8854/*"MOTION_ENTRY_TAC"*/;
  if ( !isTactical )
    v9 = (System_Int32_array ***)&StringLiteral_8853/*"MOTION_ENTRY"*/;
  v10 = *v9;
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v12 = sub_B52A54(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor((BattleLogicTask_o *)v12, v13);
  if ( !v12 )
    goto LABEL_30;
  *(_QWORD *)(v12 + 104) = v10;
  *(_DWORD *)(v12 + 48) = 10;
  sub_B52920((BattleServantConfConponent_o *)(v12 + 104), v10, v16, v17, v18, v19, v20, v21);
  if ( !Tr )
    goto LABEL_30;
  gameObject = (System_Int32_array **)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Tr, 0LL);
  *(_QWORD *)(v12 + 112) = gameObject;
  sub_B52920((BattleServantConfConponent_o *)(v12 + 112), gameObject, v23, v24, v25, v26, v27, v28);
  if ( !svtData )
    goto LABEL_30;
  if ( svtData->fields.isEnemy )
  {
    data = this->fields.data;
    if ( !data )
      goto LABEL_30;
    battle_ent = data->fields.battle_ent;
    if ( !battle_ent )
      goto LABEL_30;
    battle_ent = (BattleEntity_o *)BattleEntity__GetStageEntityAtWave(battle_ent, data->fields.wavecount, 0LL);
    if ( !battle_ent )
      goto LABEL_30;
    if ( StageEntity__isNotDisplayRemain((StageEntity_o *)battle_ent, 0LL) )
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v30 = LocalizationManager__Get((System_String_o *)StringLiteral_2560/*"BATTLE_SUBENTRY_ENEMY_UNKNOWN"*/, 0LL);
    }
    else
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      battle_ent = (BattleEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2559/*"BATTLE_SUBENTRY_ENEMY"*/, 0LL);
      v47 = this->fields.data;
      if ( !v47 )
        goto LABEL_30;
      EnemyCountStartValue_k__BackingField = v47->fields._EnemyCountStartValue_k__BackingField;
      v49 = (System_String_o *)battle_ent;
      EnemyServantList = (BattleLogicNomal_o *)BattleData__getEnemyServantList(v47, 0LL);
      v61 = BattleLogicNomal__getCountSubmember(EnemyServantList, (BattleServantData_array *)EnemyServantList, v51)
          + EnemyCountStartValue_k__BackingField;
      v52 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v61);
      v30 = System_String__Format(v49, v52, 0LL);
    }
    v53 = (System_Int32_array **)v30;
    BattleLogicTask__setActor((BattleLogicTask_o *)v12, 3, svtData->fields.uniqueId, v31);
    *(_QWORD *)(v12 + 152) = v53;
    sub_B52920((BattleServantConfConponent_o *)(v12 + 152), v53, v54, v55, v56, v57, v58, v59);
    *(_DWORD *)(v12 + 144) = 1;
    if ( v11 )
      goto LABEL_29;
LABEL_30:
    sub_B52A5C(battle_ent, v15);
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  battle_ent = (BattleEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2561/*"BATTLE_SUBENTRY_PLAYER"*/, 0LL);
  v32 = this->fields.data;
  if ( !v32 )
    goto LABEL_30;
  v33 = (System_String_o *)battle_ent;
  PlayerServantList = (BattleLogicNomal_o *)BattleData__getPlayerServantList(v32, 0LL);
  CountSubmember = BattleLogicNomal__getCountSubmember(
                     PlayerServantList,
                     (BattleServantData_array *)PlayerServantList,
                     v35);
  v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &CountSubmember);
  v37 = System_String__Format(v33, v36, 0LL);
  uniqueId = svtData->fields.uniqueId;
  v39 = (System_Int32_array **)v37;
  BattleLogicTask__setActor((BattleLogicTask_o *)v12, 2, uniqueId, v40);
  *(_QWORD *)(v12 + 152) = v39;
  sub_B52920((BattleServantConfConponent_o *)(v12 + 152), v39, v41, v42, v43, v44, v45, v46);
  *(_DWORD *)(v12 + 144) = 1;
  if ( !v11 )
    goto LABEL_30;
LABEL_29:
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v11,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v12,
    (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v11,
                                    (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


void __fastcall BattleLogicNomal___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_42AF50E & 1) == 0 )
  {
    sub_B52984(&BattleLogicNomal___c_TypeInfo);
    byte_42AF50E = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(BattleLogicNomal___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)BattleLogicNomal___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B52920(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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


System_Collections_Generic_List_BattleBuffData_BuffData__o *__fastcall BattleLogicNomal___c___CreateCommandBattle_b__20_3(
        BattleLogicNomal___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x19

  if ( (byte_42AF50F & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
    sub_B52984(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
    byte_42AF50F = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  return (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v3;
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
    sub_B52A5C(this, a);
  return a->fields.addOrder - b->fields.addOrder;
}


void __fastcall BattleLogicNomal___c___createBuffAddPlayer_b__36_0(
        BattleLogicNomal___c_o *this,
        AiNpcBattleServantData_o *npc,
        const MethodInfo *method)
{
  if ( !npc )
    sub_B52A5C(this, 0LL);
  BattleServantData__turnBuffProgressingIncrease((BattleServantData_o *)npc, 0LL);
}


void __fastcall BattleLogicNomal___c___taskCounterFunc_b__15_0(
        BattleLogicNomal___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B52A5C(this, 0LL);
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
  BattleServantData_o *actSvtData; // x20
  BuffList_c *v6; // x0
  BuffList_ACTION_array *CommandCodeFunctionActs; // x21
  BattleBuffData_CheckInvokeBuff_o *v8; // x22

  if ( (byte_42AF510 & 1) == 0 )
  {
    sub_B52984(&BuffList_TypeInfo);
    sub_B52984(&BattleBuffData_CheckInvokeBuff_TypeInfo);
    byte_42AF510 = 1;
  }
  actSvtData = this->fields.actSvtData;
  v6 = BuffList_TypeInfo;
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
    v6 = BuffList_TypeInfo;
  }
  CommandCodeFunctionActs = v6->static_fields->CommandCodeFunctionActs;
  v8 = (BattleBuffData_CheckInvokeBuff_o *)sub_B52A54(BattleBuffData_CheckInvokeBuff_TypeInfo);
  BattleBuffData_CheckInvokeBuff___ctor(v8, actSvtData, targetSvtData, CommandCodeFunctionActs, 0LL);
  return v8;
}


void __fastcall BattleLogicNomal___c__DisplayClass20_0___CreateCommandBattle_b__4(
        BattleLogicNomal___c__DisplayClass20_0_o *this,
        BuffEntity_o *buffEnt,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BattleLogicNomal___c__DisplayClass20_0_o *v6; // x21
  System_Collections_Generic_List_BattleBuffData_BuffData__o *Value_BuffList_TYPE__List_BattleBuffData_BuffData; // x0

  v6 = this;
  if ( (byte_42AF511 & 1) == 0 )
  {
    sub_B52984(&Method_BasicHelper_GetValue_BuffList_TYPE__List_BattleBuffData_BuffData____);
    this = (BattleLogicNomal___c__DisplayClass20_0_o *)sub_B52984(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
    byte_42AF511 = 1;
  }
  if ( !buffEnt )
    sub_B52A5C(this, buffEnt);
  Value_BuffList_TYPE__List_BattleBuffData_BuffData = BasicHelper__GetValue_BuffList_TYPE__List_BattleBuffData_BuffData__(
                                                        (System_Collections_Generic_Dictionary_K__V__o *)v6->fields.commandCodeDict,
                                                        buffEnt->fields.type,
                                                        0LL,
                                                        (const MethodInfo_1A43C4C *)Method_BasicHelper_GetValue_BuffList_TYPE__List_BattleBuffData_BuffData____);
  if ( Value_BuffList_TYPE__List_BattleBuffData_BuffData )
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Value_BuffList_TYPE__List_BattleBuffData_BuffData,
      (EventMissionProgressRequest_Argument_ProgressData_o *)buff,
      (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
}


void __fastcall BattleLogicNomal___c__DisplayClass20_0___CreateCommandBattle_b__5(
        BattleLogicNomal___c__DisplayClass20_0_o *this,
        BuffEntity_o *buffEnt,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BattleLogicNomal___c__DisplayClass20_0_o *v6; // x21
  System_Collections_Generic_List_BattleBuffData_BuffData__o *Value_BuffList_TYPE__List_BattleBuffData_BuffData; // x0

  v6 = this;
  if ( (byte_42AF512 & 1) == 0 )
  {
    sub_B52984(&Method_BasicHelper_GetValue_BuffList_TYPE__List_BattleBuffData_BuffData____);
    this = (BattleLogicNomal___c__DisplayClass20_0_o *)sub_B52984(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
    byte_42AF512 = 1;
  }
  if ( !buffEnt )
    sub_B52A5C(this, buffEnt);
  Value_BuffList_TYPE__List_BattleBuffData_BuffData = BasicHelper__GetValue_BuffList_TYPE__List_BattleBuffData_BuffData__(
                                                        (System_Collections_Generic_Dictionary_K__V__o *)v6->fields.commandCodeDict,
                                                        buffEnt->fields.type,
                                                        0LL,
                                                        (const MethodInfo_1A43C4C *)Method_BasicHelper_GetValue_BuffList_TYPE__List_BattleBuffData_BuffData____);
  if ( Value_BuffList_TYPE__List_BattleBuffData_BuffData )
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Value_BuffList_TYPE__List_BattleBuffData_BuffData,
      (EventMissionProgressRequest_Argument_ProgressData_o *)buff,
      (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
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
    sub_B52A5C(this, targetSvtData);
  }
  result = targetSvtData;
  actiondata->fields.targetId = targetSvtData->fields.uniqueId;
  return result;
}


System_Collections_Generic_IEnumerable_BattleServantData__o *__fastcall BattleLogicNomal___c__DisplayClass20_0___CreateCommandBattle_b__7(
        BattleLogicNomal___c__DisplayClass20_0_o *this,
        bool isOnlyMain,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *mainTarget; // x0
  struct System_Func_BattleServantData__BattleServantData__o *targetTo; // x1

  if ( (byte_42AF513 & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_Select_BattleServantData__BattleServantData___);
    byte_42AF513 = 1;
  }
  if ( isOnlyMain )
  {
    mainTarget = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.mainTarget;
    targetTo = this->fields.targetTo;
  }
  else
  {
    targetTo = this->fields.targetTo;
    mainTarget = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.targetSvtList;
  }
  return (System_Collections_Generic_IEnumerable_BattleServantData__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                                          mainTarget,
                                                                          (System_Func_TSource__TResult__o *)targetTo,
                                                                          (const MethodInfo_1B6A2FC *)Method_System_Linq_Enumerable_Select_BattleServantData__BattleServantData___);
}


BattleServantData_o *__fastcall BattleLogicNomal___c__DisplayClass20_0___CreateCommandBattle_b__8(
        BattleLogicNomal___c__DisplayClass20_0_o *this,
        int32_t id,
        const MethodInfo *method)
{
  struct BattleLogicNomal_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (this = (BattleLogicNomal___c__DisplayClass20_0_o *)_4__this->fields.data) == 0LL )
    sub_B52A5C(this, id);
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
  struct BattleLogicNomal_o *_4__this; // x9
  BattleLogicNomal___c__DisplayClass31_0_o *v4; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (v4 = this, (this = (BattleLogicNomal___c__DisplayClass31_0_o *)npc) == 0LL) )
    sub_B52A5C(this, npc);
  AiNpcBattleServantData__TurnProgress(
    npc,
    v4->fields.isEndEnemyTurn,
    v4->fields.fieldIndiv,
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
  struct BattleLogicNomal_o *_4__this; // x9
  BattleLogicNomal___c__DisplayClass34_0_o *v4; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (v4 = this, (this = (BattleLogicNomal___c__DisplayClass34_0_o *)npc) == 0LL) )
    sub_B52A5C(this, npc);
  AiNpcBattleServantData__TurnProgress(
    npc,
    v4->fields.isEndEnemyTurn,
    v4->fields.fieldIndiv,
    _4__this->fields.logic,
    0LL);
}