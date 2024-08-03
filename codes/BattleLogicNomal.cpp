void __fastcall BattleLogicNomal___ctor(BattleLogicNomal_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct BattleLogicTask_array *v4; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  __int64 v7; // x1
  __int64 v8; // x2
  BattleLogicTask_o *v9; // x20
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_49FEFC4 & 1) == 0 )
  {
    sub_1B640C8(&BattleLogicTask___TypeInfo, method);
    sub_1B640C8(&BattleLogicTask_TypeInfo, v3);
    byte_49FEFC4 = 1;
  }
  v4 = (struct BattleLogicTask_array *)sub_1B64170(BattleLogicTask___TypeInfo, 0LL);
  this->fields.zeroTask = v4;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.zeroTask, (int32_t)v4, v5, v6);
  v9 = (BattleLogicTask_o *)sub_1B64314(BattleLogicTask_TypeInfo, v7, v8);
  BattleLogicTask___ctor(v9, 0LL);
  this->fields.tmpShiftTask = v9;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.tmpShiftTask, (int32_t)v9, v10, v11);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleLogicNomal__CheckDeadEnemy(BattleLogicNomal_o *this, const MethodInfo *method)
{
  struct BattleData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_1B64324(this);
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
  int32_t v56; // w2
  int32_t v57; // w3
  BattleData_o *data; // x21
  BattleServantData_o *ServantData; // x0
  BattleServantData_o **v60; // x26
  int32_t v61; // w2
  int32_t v62; // w3
  __int64 v63; // x1
  __int64 v64; // x2
  BattleActionData_o *v65; // x22
  int32_t v66; // w2
  int32_t v67; // w3
  BattleActionData_o **v68; // x21
  int32_t v69; // w2
  int32_t v70; // w3
  struct BattleCommandData_o *command; // x1
  int32_t v72; // w2
  int32_t v73; // w3
  BattleActionData_o *v74; // x20
  int32_t v75; // w2
  int32_t v76; // w3
  struct System_String_o *motionMessage; // x1
  struct BattleData_o *v78; // x8
  int32_t v79; // w22
  Il2CppObject *v80; // x28
  __int64 v81; // x1
  __int64 v82; // x2
  System_Collections_Generic_List_object__o *v83; // x20
  int32_t v84; // w2
  int32_t v85; // w3
  struct System_Object_array *items; // x8
  _QWORD *v87; // x9
  __int64 size; // x10
  Il2CppClass **v89; // x0
  int32_t v90; // w2
  int32_t v91; // w3
  System_Collections_Generic_IEnumerable_TSource__o **v93; // x25
  int32_t AttackType; // w0
  System_Collections_Generic_IEnumerable_TSource__o *v95; // x0
  System_Collections_Generic_List_object__o **v96; // x27
  System_Collections_Generic_IEnumerable_TSource__o *v97; // x20
  __int64 v98; // x1
  __int64 v99; // x2
  System_Func_T__TResult__o *v100; // x22
  __int64 v101; // x1
  __int64 v102; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v103; // x20
  BattleLogicNomal___c_c *v104; // x8
  System_Func_object__bool__o *_9__22_9; // x24
  Il2CppObject *v106; // x22
  struct BattleLogicNomal___c_StaticFields *static_fields; // x0
  int32_t v108; // w2
  int32_t v109; // w3
  bool IsForceAttackFunctionTargetAll; // w0
  __int64 v111; // x1
  __int64 v112; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v113; // x20
  BattleLogicNomal___c_c *v114; // x8
  System_Func_object__object__o *_9__22_0; // x24
  Il2CppObject *v116; // x22
  struct BattleLogicNomal___c_StaticFields *v117; // x0
  int32_t v118; // w2
  int32_t v119; // w3
  System_Func_object__object__o *v120; // x22
  __int64 v121; // x1
  __int64 v122; // x2
  __int64 v123; // x9
  System_Collections_Generic_Dictionary_object__object__o *v124; // x24
  BuffList_c *v125; // x8
  BattleLogicNomal___c_c *v126; // x0
  System_Collections_Generic_IEnumerable_TSource__o *CommandCodeBuffHash; // x20
  System_Func_T__TResult__o *_9__22_2; // x25
  Il2CppObject *v129; // x22
  struct BattleLogicNomal___c_StaticFields *v130; // x0
  int32_t v131; // w2
  int32_t v132; // w3
  System_Func_T__TResult__o *_9__22_3; // x27
  Il2CppObject *v134; // x22
  struct BattleLogicNomal___c_StaticFields *v135; // x0
  int32_t v136; // w2
  int32_t v137; // w3
  System_Collections_Generic_Dictionary_TKey__TElement__o *v138; // x0
  int32_t v139; // w2
  int32_t v140; // w3
  __int64 v141; // x1
  __int64 v142; // x2
  __int64 v143; // x8
  int64_t v144; // x20
  System_Action_object__object__o *v145; // x22
  BattleServantData_o **v146; // x26
  __int64 v147; // x1
  __int64 v148; // x2
  int64_t commandAssistId; // x20
  System_Action_object__object__o *v150; // x22
  __int64 v151; // x8
  __int64 v152; // x1
  BattleCommandData_o **v153; // x24
  int32_t v154; // w2
  int32_t v155; // w3
  __int64 v156; // x20
  int32_t v157; // w2
  int32_t v158; // w3
  __int64 v159; // x1
  __int64 v160; // x2
  System_Func_object__object__o *v161; // x20
  int32_t v162; // w2
  int32_t v163; // w3
  __int64 v164; // x1
  __int64 v165; // x2
  Il2CppObject *MasterData_object; // x25
  __int64 v167; // x1
  __int64 v168; // x2
  BattleLogicFunction_AttackSideEffectFunctionArgument_o *v169; // x23
  __int64 v170; // x2
  const MethodInfo *v171; // x5
  __int64 v172; // x9
  __int64 v173; // x8
  unsigned __int64 v174; // x22
  int v175; // w20
  int32_t v176; // w3
  System_Collections_Generic_List_BattleBuffData_BuffData__o *v177; // x28
  __int64 v178; // x8
  __int64 v179; // x20
  __int64 v180; // x9
  int *v181; // x10
  __int64 v182; // x0
  __int64 v183; // x0
  __int64 v184; // x20
  __int64 v185; // x8
  __int64 v186; // x9
  int *v187; // x10
  __int64 v188; // x0
  __int64 v189; // x8
  __int64 v190; // x9
  int *v191; // x10
  __int64 v192; // x0
  Il2CppObject *v193; // x1
  Il2CppObject *Item; // x1
  __int64 v195; // x8
  __int64 v196; // x9
  int *v197; // x10
  __int64 v198; // x0
  unsigned __int64 v199; // x10
  int v200; // w20
  int v201; // w8
  BuffList_ACTION_array *v202; // x28
  int v203; // w8
  __int64 v204; // x8
  __int64 v205; // x20
  __int64 v206; // x9
  int *v207; // x10
  __int64 v208; // x0
  __int64 v209; // x20
  __int64 v210; // x8
  __int64 v211; // x9
  int *v212; // x10
  __int64 v213; // x0
  __int64 v214; // x8
  __int64 v215; // x9
  int *v216; // x10
  __int64 v217; // x0
  BattleServantData_o *v218; // x3
  BattleBuffData_BuffData_array *AttackSideEffectBuffList_42514128; // x0
  __int64 v220; // x1
  BattleBuffData_BuffData_array *v221; // x27
  __int64 v222; // x8
  unsigned __int64 v223; // x26
  BattleBuffData_BuffData_o *v224; // x29
  BattleLogicFunction_o *logicfunction; // x22
  BattleActionData_o *SideEffectActionData; // x0
  __int64 v227; // x8
  __int64 v228; // x9
  int *v229; // x10
  __int64 v230; // x0
  __int64 v231; // x8
  __int64 v232; // x20
  __int64 v233; // x9
  int *v234; // x10
  __int64 v235; // x0
  __int64 v236; // x0
  __int64 v237; // x20
  BattleActionData_DamageData_o *v238; // x28
  __int64 v239; // x8
  __int64 v240; // x9
  int *v241; // x10
  __int64 v242; // x0
  __int64 v243; // x8
  __int64 v244; // x9
  int *v245; // x10
  __int64 v246; // x0
  BattleServantData_o *v247; // x27
  BattleLogic_o *logic; // x0
  BattleActionData_DamageData_o *Damagelist; // x0
  BattleActionData_DamageData_o *v250; // x29
  struct BattleBuffData_o *buffData; // x8
  BattleActionData_o *v252; // x22
  BattleActionData_o *v253; // x0
  _BOOL8 v254; // x0
  __int64 v255; // x8
  __int64 v256; // x9
  int *v257; // x10
  __int64 v258; // x0
  BattleActionData_o *v259; // x20
  BattleCommandData_o *v260; // x1
  BattleActionData_o *v261; // x20
  BattleActionData_o *v262; // x20
  struct BattleData_o *v263; // x8
  struct BattlePerformance_o *perf; // x9
  BattleActionData_o *v265; // x20
  const MethodInfo *v266; // x5
  __int64 v267; // x9
  __int64 v268; // x8
  unsigned __int64 v269; // x26
  unsigned int v270; // w20
  int32_t v271; // w3
  System_Collections_Generic_List_BattleBuffData_BuffData__o *TargetCommandCodeBuffList; // x28
  __int64 v273; // x8
  __int64 v274; // x20
  __int64 v275; // x9
  int *v276; // x10
  __int64 v277; // x0
  __int64 v278; // x0
  __int64 v279; // x20
  __int64 v280; // x8
  __int64 v281; // x9
  int *v282; // x10
  __int64 v283; // x0
  __int64 v284; // x8
  __int64 v285; // x9
  int *v286; // x10
  __int64 v287; // x0
  Il2CppObject *v288; // x1
  Il2CppObject *v289; // x1
  __int64 v290; // x8
  __int64 v291; // x9
  int *v292; // x10
  __int64 v293; // x0
  unsigned __int64 v294; // x26
  int v295; // w20
  int v296; // w8
  BuffList_ACTION_array *v297; // x24
  int v298; // w8
  __int64 v299; // x8
  __int64 v300; // x20
  __int64 v301; // x9
  int *v302; // x10
  __int64 v303; // x0
  __int64 v304; // x20
  __int64 v305; // x8
  __int64 v306; // x9
  int *v307; // x10
  __int64 v308; // x0
  __int64 v309; // x8
  __int64 v310; // x9
  int *v311; // x10
  __int64 v312; // x0
  BattleServantData_o *v313; // x3
  BattleBuffData_BuffData_array *v314; // x0
  __int64 v315; // x1
  BattleBuffData_BuffData_array *v316; // x27
  __int64 v317; // x8
  unsigned __int64 v318; // x22
  BattleLogicFunction_o *v319; // x0
  __int64 v320; // x8
  __int64 v321; // x9
  int *v322; // x10
  __int64 v323; // x0
  __int64 v324; // x8
  __int64 v325; // x20
  __int64 v326; // x9
  int *v327; // x10
  __int64 v328; // x0
  __int64 v329; // x0
  __int64 v330; // x20
  __int64 v331; // x8
  __int64 v332; // x9
  int *v333; // x10
  __int64 v334; // x0
  __int64 v335; // x8
  __int64 v336; // x9
  int *v337; // x10
  __int64 v338; // x0
  __int64 v339; // x0
  __int64 v340; // x8
  __int64 v341; // x9
  int *v342; // x10
  __int64 v343; // x0
  _BOOL8 v344; // x0
  Il2CppObject *current; // x8
  Il2CppClass *klass; // x9
  BattleData_o *v347; // x0
  BattleActionData_o *v348; // x8
  __int64 v349; // x0
  const MethodInfo *v350; // [xsp+0h] [xbp-120h]
  __int64 *v351; // [xsp+10h] [xbp-110h]
  bool v352; // [xsp+1Ch] [xbp-104h]
  BattleLogicTask_o *v353; // [xsp+20h] [xbp-100h]
  __int64 v354; // [xsp+28h] [xbp-F8h]
  int32_t targetId; // [xsp+34h] [xbp-ECh]
  System_Collections_Generic_Dictionary_BuffList_TYPE__List_BattleBuffData_BuffData___o **v356; // [xsp+38h] [xbp-E8h]
  BattleBuffData_o *v357; // [xsp+40h] [xbp-E0h]
  BattleLogic_DamageProcessArgs_o *processArgs; // [xsp+48h] [xbp-D8h]
  BattleLogic_DamageProcessArgs_o *processArgsa; // [xsp+48h] [xbp-D8h]
  Il2CppObject *v360; // [xsp+50h] [xbp-D0h]
  bool v361; // [xsp+5Ch] [xbp-C4h]
  __int64 v362; // [xsp+60h] [xbp-C0h]
  __int64 v363; // [xsp+68h] [xbp-B8h]
  BattleServantData_o **v364; // [xsp+70h] [xbp-B0h]
  BattleCommandData_o **v365; // [xsp+78h] [xbp-A8h]
  System_Collections_Generic_Dictionary_object__object__o *v366; // [xsp+80h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v367; // [xsp+88h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v368; // [xsp+A0h] [xbp-80h] BYREF

  if ( (byte_49FEFB0 & 1) == 0 )
  {
    sub_1B640C8(&BuffList_ACTION___TypeInfo, task);
    sub_1B640C8(&System_Action_BuffEntity__BattleBuffData_BuffData__TypeInfo, v7);
    sub_1B640C8(&BattleLogicFunction_AttackSideEffectFunctionArgument_TypeInfo, v8);
    sub_1B640C8(&BattleActionData_TypeInfo, v9);
    sub_1B640C8(&BattleServantData___TypeInfo, v10);
    sub_1B640C8(&bool___TypeInfo, v11);
    sub_1B640C8(&BuffList_TypeInfo, v12);
    sub_1B640C8(&BattleLogic_DamageProcessArgs_TypeInfo, v13);
    sub_1B640C8(&Method_DataManager_GetMasterData_SkillLvMaster___, v14);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_BattleServantData__BattleBuffData_CheckInvokeBuff__get_Item__,
      v15);
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_int__BattleServantData___, v16);
    sub_1B640C8(
      &Method_System_Linq_Enumerable_ToDictionary_BattleServantData__BattleServantData__BattleBuffData_CheckInvokeBuff___,
      v17);
    sub_1B640C8(
      &Method_System_Linq_Enumerable_ToDictionary_BuffList_TYPE__BuffList_TYPE__List_BattleBuffData_BuffData____,
      v18);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToList_int___, v19);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_BattleServantData___, v20);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__, v21);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__, v22);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__get_Current__, v23);
    sub_1B640C8(&System_Func_BattleServantData__BattleBuffData_CheckInvokeBuff__TypeInfo, v24);
    sub_1B640C8(&System_Func_BattleServantData__BattleServantData__TypeInfo, v25);
    sub_1B640C8(&System_Func_int__BattleServantData__TypeInfo, v26);
    sub_1B640C8(&System_Func_BuffList_TYPE__BuffList_TYPE__TypeInfo, v27);
    sub_1B640C8(&System_Func_BattleServantData__bool__TypeInfo, v28);
    sub_1B640C8(&System_Func_BuffList_TYPE__List_BattleBuffData_BuffData___TypeInfo, v29);
    sub_1B640C8(&System_Func_bool__bool__IEnumerable_BattleServantData___TypeInfo, v30);
    sub_1B640C8(&System_IDisposable_TypeInfo, v31);
    sub_1B640C8(&System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, v32);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, v33);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v34);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleServantData__AddRange__, v35);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleServantData__Add__, v36);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__, v37);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Remove__, v38);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleServantData___ctor__, v39);
    sub_1B640C8(&System_Collections_Generic_List_BattleServantData__TypeInfo, v40);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v41);
    sub_1B640C8(&Method_BattleLogicNomal___c__CreateCommandBattle_b__22_0__, v42);
    sub_1B640C8(&Method_BattleLogicNomal___c__CreateCommandBattle_b__22_2__, v43);
    sub_1B640C8(&Method_BattleLogicNomal___c__CreateCommandBattle_b__22_3__, v44);
    sub_1B640C8(&Method_BattleLogicNomal___c__CreateCommandBattle_b__22_9__, v45);
    sub_1B640C8(&Method_BattleLogicNomal___c__DisplayClass22_0__CreateCommandBattle_b__1__, v46);
    sub_1B640C8(&Method_BattleLogicNomal___c__DisplayClass22_0__CreateCommandBattle_b__4__, v47);
    sub_1B640C8(&Method_BattleLogicNomal___c__DisplayClass22_0__CreateCommandBattle_b__5__, v48);
    sub_1B640C8(&Method_BattleLogicNomal___c__DisplayClass22_0__CreateCommandBattle_b__6__, v49);
    sub_1B640C8(&Method_BattleLogicNomal___c__DisplayClass22_0__CreateCommandBattle_b__7__, v50);
    sub_1B640C8(&Method_BattleLogicNomal___c__DisplayClass22_0__CreateCommandBattle_b__8__, v51);
    sub_1B640C8(&BattleLogicNomal___c__DisplayClass22_0_TypeInfo, v52);
    sub_1B640C8(&BattleLogicNomal___c_TypeInfo, v53);
    byte_49FEFB0 = 1;
  }
  memset(&v368, 0, sizeof(v368));
  v54 = sub_1B64314(BattleLogicNomal___c__DisplayClass22_0_TypeInfo, task, baseActionData);
  System_Object___ctor((Il2CppObject *)v54, 0LL);
  if ( !v54 )
    goto LABEL_369;
  *(_QWORD *)(v54 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v54 + 16), (int32_t)this, v56, v57);
  if ( !task )
    goto LABEL_369;
  data = this->fields.data;
  ActorId = BattleLogicTask__getActorId(task, 0LL);
  if ( !data )
    goto LABEL_369;
  ServantData = BattleData__getServantData(data, ActorId, 0LL);
  *(_QWORD *)(v54 + 24) = ServantData;
  v60 = (BattleServantData_o **)(v54 + 24);
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v54 + 24), (int32_t)ServantData, v61, v62);
  v65 = (BattleActionData_o *)sub_1B64314(BattleActionData_TypeInfo, v63, v64);
  BattleActionData___ctor(v65, 0LL);
  *baseActionData = v65;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)baseActionData, (int32_t)v65, v66, v67);
  *(_QWORD *)(v54 + 48) = v65;
  v68 = (BattleActionData_o **)(v54 + 48);
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v54 + 48), (int32_t)v65, v69, v70);
  command = task->fields.command;
  *(_QWORD *)(v54 + 40) = command;
  v365 = (BattleCommandData_o **)(v54 + 40);
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v54 + 40), (int32_t)command, v72, v73);
  ActorId = (__int64)this->fields.data;
  if ( !ActorId )
    goto LABEL_369;
  BattleData__ResetWasAttackTargetId((BattleData_o *)ActorId, 0LL);
  ActorId = (__int64)this->fields.logic;
  if ( !ActorId )
    goto LABEL_369;
  BattleLogic__updateResultServant((BattleLogic_o *)ActorId, 0LL);
  v74 = *v68;
  ActorId = BattleLogicTask__getActorId(task, 0LL);
  if ( !v74 )
    goto LABEL_369;
  v74->fields.actorId = ActorId;
  ActorId = (__int64)*v68;
  if ( !*v68 )
    goto LABEL_369;
  motionMessage = task->fields.motionMessage;
  *(_QWORD *)(ActorId + 128) = motionMessage;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(ActorId + 128), (int32_t)motionMessage, v75, v76);
  ActorId = BattleLogicTask__getTarget(task, 0LL);
  v78 = this->fields.data;
  if ( !v78 )
    goto LABEL_369;
  v79 = ActorId;
  if ( (int)ActorId <= 0 )
  {
    BattleData__setCommandAttack(this->fields.data, 0, 0, 0LL);
    return 0LL;
  }
  if ( v78->fields.leaderDown || v78->fields.endbattleFlg )
    return 0LL;
  v80 = (Il2CppObject *)BattleData__getServantData(this->fields.data, ActorId, 0LL);
  v83 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_BattleServantData__TypeInfo,
                                                       v81,
                                                       v82);
  System_Collections_Generic_List_object____ctor(
    v83,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_BattleServantData___ctor__);
  if ( !v83 )
    goto LABEL_369;
  items = v83->fields._items;
  v87 = Method_System_Collections_Generic_List_BattleServantData__Add__;
  ++v83->fields._version;
  if ( !items )
    goto LABEL_369;
  size = v83->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v83,
      v80,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v87[4] + 192LL) + 112LL));
  }
  else
  {
    v89 = &items->obj.klass + size;
    v83->fields._size = size + 1;
    v89[4] = (Il2CppClass *)v80;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v89 + 4), (int32_t)v80, v84, v85);
  }
  *(_QWORD *)(v54 + 56) = v83;
  v93 = (System_Collections_Generic_IEnumerable_TSource__o **)(v54 + 56);
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v54 + 56), (int32_t)v83, v90, v91);
  ActorId = *(_QWORD *)(v54 + 40);
  if ( !ActorId )
    goto LABEL_369;
  BattleCommandData__ResetCriticalStoreDict((BattleCommandData_o *)ActorId, 0LL);
  ActorId = (__int64)*v365;
  if ( !*v365 )
    goto LABEL_369;
  BattleCommandData__UpdateCritical(
    (BattleCommandData_o *)ActorId,
    *v60,
    (BattleServantData_o *)v80,
    this->fields.data,
    0LL);
  ActorId = (__int64)*v365;
  if ( !*v365 )
    goto LABEL_369;
  BattleCommandData__UpdateCommandType((BattleCommandData_o *)ActorId, 0LL);
  ActorId = (__int64)*v60;
  if ( !*v60 )
    goto LABEL_369;
  AttackType = BattleServantData__getAttackType((BattleServantData_o *)ActorId, *v365, 0LL);
  v352 = AttackType == 2;
  v353 = task;
  targetId = v79;
  if ( AttackType == 2 )
  {
    ActorId = (__int64)this->fields.data;
    if ( !ActorId )
      goto LABEL_369;
    ActorId = BattleData__isEnemyID((BattleData_o *)ActorId, v79, 0LL);
    if ( !this->fields.data )
      goto LABEL_369;
    v95 = (System_Collections_Generic_IEnumerable_TSource__o *)((ActorId & 1) != 0
                                                              ? BattleData__getFieldEnemyServantIDList(
                                                                  this->fields.data,
                                                                  1,
                                                                  0LL)
                                                              : BattleData__getFieldPlayerServantIDList(
                                                                  this->fields.data,
                                                                  0LL,
                                                                  0LL));
    v96 = (System_Collections_Generic_List_object__o **)(v54 + 56);
    ActorId = (__int64)System_Linq_Enumerable__ToList_int_(
                         v95,
                         (const MethodInfo_2E74DB0 *)Method_System_Linq_Enumerable_ToList_int___);
    if ( !ActorId )
      goto LABEL_369;
    v97 = (System_Collections_Generic_IEnumerable_TSource__o *)ActorId;
    System_Collections_Generic_List_int___Remove(
      (System_Collections_Generic_List_int__o *)ActorId,
      v79,
      (const MethodInfo_3491478 *)Method_System_Collections_Generic_List_int__Remove__);
    v100 = (System_Func_T__TResult__o *)sub_1B64314(System_Func_int__BattleServantData__TypeInfo, v98, v99);
    System_Func_int__object____ctor(
      v100,
      (Il2CppObject *)v54,
      Method_BattleLogicNomal___c__DisplayClass22_0__CreateCommandBattle_b__8__,
      0LL);
    v103 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__object_(
                                                                  v97,
                                                                  (System_Func_TSource__TResult__o *)v100,
                                                                  (const MethodInfo_2E66FCC *)Method_System_Linq_Enumerable_Select_int__BattleServantData___);
    v104 = BattleLogicNomal___c_TypeInfo;
    if ( !BattleLogicNomal___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo);
      v104 = BattleLogicNomal___c_TypeInfo;
    }
    _9__22_9 = (System_Func_object__bool__o *)v104->static_fields->__9__22_9;
    if ( !_9__22_9 )
    {
      if ( !v104->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v104);
        v104 = BattleLogicNomal___c_TypeInfo;
      }
      v106 = (Il2CppObject *)v104->static_fields->__9;
      _9__22_9 = (System_Func_object__bool__o *)sub_1B64314(System_Func_BattleServantData__bool__TypeInfo, v101, v102);
      System_Func_object__bool____ctor(_9__22_9, v106, Method_BattleLogicNomal___c__CreateCommandBattle_b__22_9__, 0LL);
      static_fields = BattleLogicNomal___c_TypeInfo->static_fields;
      static_fields->__9__22_9 = (struct System_Func_BattleServantData__bool__o *)_9__22_9;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__22_9, (int32_t)_9__22_9, v108, v109);
    }
    ActorId = (__int64)System_Linq_Enumerable__Where_object_(
                         v103,
                         (System_Func_TSource__bool__o *)_9__22_9,
                         (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_BattleServantData___);
    if ( !*v96 )
      goto LABEL_369;
    v93 = (System_Collections_Generic_IEnumerable_TSource__o **)(v54 + 56);
    System_Collections_Generic_List_object___AddRange(
      *v96,
      (System_Collections_Generic_IEnumerable_T__o *)ActorId,
      (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
  }
  v364 = (BattleServantData_o **)(v54 + 24);
  ActorId = (__int64)*v365;
  if ( !*v365 )
    goto LABEL_369;
  IsForceAttackFunctionTargetAll = BattleCommandData__IsForceAttackFunctionTargetAll(
                                     (BattleCommandData_o *)ActorId,
                                     0LL);
  v113 = *v93;
  v361 = IsForceAttackFunctionTargetAll;
  v114 = BattleLogicNomal___c_TypeInfo;
  if ( !BattleLogicNomal___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo);
    v114 = BattleLogicNomal___c_TypeInfo;
  }
  _9__22_0 = (System_Func_object__object__o *)v114->static_fields->__9__22_0;
  if ( !_9__22_0 )
  {
    if ( !v114->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v114);
      v114 = BattleLogicNomal___c_TypeInfo;
    }
    v116 = (Il2CppObject *)v114->static_fields->__9;
    _9__22_0 = (System_Func_object__object__o *)sub_1B64314(
                                                  System_Func_BattleServantData__BattleServantData__TypeInfo,
                                                  v111,
                                                  v112);
    System_Func_object__object____ctor(_9__22_0, v116, Method_BattleLogicNomal___c__CreateCommandBattle_b__22_0__, 0LL);
    v117 = BattleLogicNomal___c_TypeInfo->static_fields;
    v117->__9__22_0 = (struct System_Func_BattleServantData__BattleServantData__o *)_9__22_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v117->__9__22_0, (int32_t)_9__22_0, v118, v119);
  }
  v120 = (System_Func_object__object__o *)sub_1B64314(
                                            System_Func_BattleServantData__BattleBuffData_CheckInvokeBuff__TypeInfo,
                                            v111,
                                            v112);
  System_Func_object__object____ctor(
    v120,
    (Il2CppObject *)v54,
    Method_BattleLogicNomal___c__DisplayClass22_0__CreateCommandBattle_b__1__,
    0LL);
  ActorId = (__int64)System_Linq_Enumerable__ToDictionary_object__object__object_(
                       v113,
                       (System_Func_TSource__TKey__o *)_9__22_0,
                       (System_Func_TSource__TElement__o *)v120,
                       (const MethodInfo_2E71B44 *)Method_System_Linq_Enumerable_ToDictionary_BattleServantData__BattleServantData__BattleBuffData_CheckInvokeBuff___);
  v123 = *(_QWORD *)(v54 + 24);
  if ( !v123 )
    goto LABEL_369;
  v124 = (System_Collections_Generic_Dictionary_object__object__o *)ActorId;
  v125 = BuffList_TypeInfo;
  v357 = *(BattleBuffData_o **)(v123 + 784);
  if ( !BuffList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
    v125 = BuffList_TypeInfo;
  }
  v126 = BattleLogicNomal___c_TypeInfo;
  v351 = (__int64 *)v93;
  CommandCodeBuffHash = (System_Collections_Generic_IEnumerable_TSource__o *)v125->static_fields->CommandCodeBuffHash;
  if ( !BattleLogicNomal___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo);
    v126 = BattleLogicNomal___c_TypeInfo;
  }
  _9__22_2 = (System_Func_T__TResult__o *)v126->static_fields->__9__22_2;
  if ( !_9__22_2 )
  {
    if ( !v126->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v126);
      v126 = BattleLogicNomal___c_TypeInfo;
    }
    v129 = (Il2CppObject *)v126->static_fields->__9;
    _9__22_2 = (System_Func_T__TResult__o *)sub_1B64314(System_Func_BuffList_TYPE__BuffList_TYPE__TypeInfo, v121, v122);
    System_Func_Int32Enum__Int32Enum____ctor(
      _9__22_2,
      v129,
      Method_BattleLogicNomal___c__CreateCommandBattle_b__22_2__,
      0LL);
    v130 = BattleLogicNomal___c_TypeInfo->static_fields;
    v130->__9__22_2 = (struct System_Func_BuffList_TYPE__BuffList_TYPE__o *)_9__22_2;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v130->__9__22_2, (int32_t)_9__22_2, v131, v132);
    v126 = BattleLogicNomal___c_TypeInfo;
  }
  if ( !v126->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v126);
    v126 = BattleLogicNomal___c_TypeInfo;
  }
  _9__22_3 = (System_Func_T__TResult__o *)v126->static_fields->__9__22_3;
  if ( !_9__22_3 )
  {
    if ( !v126->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v126);
      v126 = BattleLogicNomal___c_TypeInfo;
    }
    v134 = (Il2CppObject *)v126->static_fields->__9;
    _9__22_3 = (System_Func_T__TResult__o *)sub_1B64314(
                                              System_Func_BuffList_TYPE__List_BattleBuffData_BuffData___TypeInfo,
                                              v121,
                                              v122);
    System_Func_Int32Enum__object____ctor(
      _9__22_3,
      v134,
      Method_BattleLogicNomal___c__CreateCommandBattle_b__22_3__,
      0LL);
    v135 = BattleLogicNomal___c_TypeInfo->static_fields;
    v135->__9__22_3 = (struct System_Func_BuffList_TYPE__List_BattleBuffData_BuffData___o *)_9__22_3;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v135->__9__22_3, (int32_t)_9__22_3, v136, v137);
  }
  v366 = v124;
  v138 = System_Linq_Enumerable__ToDictionary_Int32Enum__Int32Enum__object_(
           CommandCodeBuffHash,
           (System_Func_TSource__TKey__o *)_9__22_2,
           (System_Func_TSource__TElement__o *)_9__22_3,
           (const MethodInfo_2E7194C *)Method_System_Linq_Enumerable_ToDictionary_BuffList_TYPE__BuffList_TYPE__List_BattleBuffData_BuffData____);
  *(_QWORD *)(v54 + 32) = v138;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v54 + 32), (int32_t)v138, v139, v140);
  v143 = *(_QWORD *)(v54 + 40);
  v356 = (System_Collections_Generic_Dictionary_BuffList_TYPE__List_BattleBuffData_BuffData___o **)(v54 + 32);
  if ( !v143 )
    goto LABEL_369;
  v144 = *(_QWORD *)(v143 + 72);
  v145 = (System_Action_object__object__o *)sub_1B64314(
                                              System_Action_BuffEntity__BattleBuffData_BuffData__TypeInfo,
                                              v141,
                                              v142);
  System_Action_object__object____ctor(
    v145,
    (Il2CppObject *)v54,
    Method_BattleLogicNomal___c__DisplayClass22_0__CreateCommandBattle_b__4__,
    0LL);
  v146 = (BattleServantData_o **)(v54 + 24);
  if ( !v357 )
    goto LABEL_369;
  BattleBuffData__SetCommandCodeBuffActiveFlg(
    v357,
    v144,
    (System_Action_BuffEntity__BattleBuffData_BuffData__o *)v145,
    1,
    0LL);
  if ( !*v365 )
    goto LABEL_369;
  commandAssistId = (*v365)->fields.commandAssistId;
  v150 = (System_Action_object__object__o *)sub_1B64314(
                                              System_Action_BuffEntity__BattleBuffData_BuffData__TypeInfo,
                                              v147,
                                              v148);
  System_Action_object__object____ctor(
    v150,
    (Il2CppObject *)v54,
    Method_BattleLogicNomal___c__DisplayClass22_0__CreateCommandBattle_b__5__,
    0LL);
  v151 = *(_QWORD *)(v54 + 40);
  if ( !v151 )
    goto LABEL_369;
  BattleBuffData__SetCommandAssistBuffActiveFlg(
    v357,
    commandAssistId,
    (System_Action_BuffEntity__BattleBuffData_BuffData__o *)v150,
    1,
    *(_DWORD *)(v151 + 88),
    0LL);
  ActorId = sub_1B64170(bool___TypeInfo, 2LL);
  v153 = (BattleCommandData_o **)(v54 + 40);
  if ( !ActorId )
    goto LABEL_369;
  if ( !*(_DWORD *)(ActorId + 24) )
    goto LABEL_370;
  v363 = ActorId;
  *(_BYTE *)(ActorId + 32) = 1;
  ActorId = sub_1B64170(BattleServantData___TypeInfo, 1LL);
  if ( !ActorId )
    goto LABEL_369;
  v156 = ActorId;
  if ( v80 )
  {
    ActorId = sub_1B64204(v80, *(_QWORD *)(*(_QWORD *)ActorId + 64LL));
    if ( !ActorId )
    {
      v349 = sub_1B64348(0LL);
      sub_1B641F0(v349, 0LL);
    }
  }
  if ( !*(_DWORD *)(v156 + 24) )
    goto LABEL_370;
  *(_QWORD *)(v156 + 32) = v80;
  v360 = v80;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v156 + 32), (int32_t)v80, v154, v155);
  *(_QWORD *)(v54 + 72) = v156;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v54 + 72), v156, v157, v158);
  v161 = (System_Func_object__object__o *)sub_1B64314(
                                            System_Func_BattleServantData__BattleServantData__TypeInfo,
                                            v159,
                                            v160);
  System_Func_object__object____ctor(
    v161,
    (Il2CppObject *)v54,
    Method_BattleLogicNomal___c__DisplayClass22_0__CreateCommandBattle_b__6__,
    0LL);
  *(_QWORD *)(v54 + 64) = v161;
  v354 = v54 + 64;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v54 + 64), (int32_t)v161, v162, v163);
  v362 = sub_1B64314(System_Func_bool__bool__IEnumerable_BattleServantData___TypeInfo, v164, v165);
  System_Func_bool__bool__object____ctor(
    (System_Func_T1__T2__TResult__o *)v362,
    (Il2CppObject *)v54,
    Method_BattleLogicNomal___c__DisplayClass22_0__CreateCommandBattle_b__7__,
    0LL);
  ActorId = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !ActorId )
    goto LABEL_369;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)ActorId,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_SkillLvMaster___);
  v169 = (BattleLogicFunction_AttackSideEffectFunctionArgument_o *)sub_1B64314(
                                                                     BattleLogicFunction_AttackSideEffectFunctionArgument_TypeInfo,
                                                                     v167,
                                                                     v168);
  BattleLogicFunction_AttackSideEffectFunctionArgument___ctor(v169, 0LL);
  v172 = v363;
  v173 = *(_QWORD *)(v363 + 24);
  if ( (int)v173 >= 1 )
  {
    v174 = 0LL;
    do
    {
      if ( v174 >= (unsigned int)v173 )
        goto LABEL_370;
      v175 = *(unsigned __int8 *)(v172 + v174 + 32);
      if ( *(_BYTE *)(v172 + v174 + 32) )
        v176 = 177;
      else
        v176 = 138;
      ActorId = (__int64)BattleLogicNomal__GetTargetCommandCodeBuffList(
                           (BattleLogicNomal_o *)ActorId,
                           *v356,
                           v357,
                           v176,
                           *v365,
                           v171);
      if ( !v362 )
        goto LABEL_369;
      v177 = (System_Collections_Generic_List_BattleBuffData_BuffData__o *)ActorId;
      ActorId = (*(__int64 (__fastcall **)(_QWORD, bool, bool, _QWORD))(v362 + 24))(
                  *(_QWORD *)(v362 + 64),
                  v175 != 0,
                  v361,
                  *(_QWORD *)(v362 + 40));
      if ( !ActorId )
        goto LABEL_369;
      v178 = *(_QWORD *)ActorId;
      v179 = ActorId;
      v180 = *(unsigned __int16 *)(*(_QWORD *)ActorId + 302LL);
      if ( *(_WORD *)(*(_QWORD *)ActorId + 302LL) )
      {
        v181 = (int *)(*(_QWORD *)(v178 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)v181 - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
        {
          --v180;
          v181 += 4;
          if ( !v180 )
            goto LABEL_85;
        }
        v182 = v178 + 16LL * *v181 + 312;
      }
      else
      {
LABEL_85:
        v182 = sub_1BB60A8(ActorId, System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, 0LL);
      }
      v183 = (*(__int64 (__fastcall **)(__int64, _QWORD))v182)(v179, *(_QWORD *)(v182 + 8));
      v184 = v183;
      while ( 1 )
      {
        if ( !v184 )
          sub_1B64324(v183);
        v185 = *(_QWORD *)v184;
        v186 = *(unsigned __int16 *)(*(_QWORD *)v184 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v184 + 302LL) )
        {
          v187 = (int *)(*(_QWORD *)(v185 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v187 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v186;
            v187 += 4;
            if ( !v186 )
              goto LABEL_93;
          }
          v188 = v185 + 16LL * *v187 + 312;
        }
        else
        {
LABEL_93:
          v188 = sub_1BB60A8(v184, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v188)(v184, *(_QWORD *)(v188 + 8)) & 1) == 0 )
          break;
        v189 = *(_QWORD *)v184;
        v190 = *(unsigned __int16 *)(*(_QWORD *)v184 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v184 + 302LL) )
        {
          v191 = (int *)(*(_QWORD *)(v189 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v191 - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
          {
            --v190;
            v191 += 4;
            if ( !v190 )
              goto LABEL_100;
          }
          v192 = v189 + 16LL * *v191 + 312;
        }
        else
        {
LABEL_100:
          v192 = sub_1BB60A8(v184, System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, 0LL);
        }
        v193 = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64, _QWORD))v192)(v184, *(_QWORD *)(v192 + 8));
        if ( !v366 )
          sub_1B64324(0LL);
        Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                 v366,
                 v193,
                 (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_BattleServantData__BattleBuffData_CheckInvokeBuff__get_Item__);
        BattleLogicNomal__commandCodeBuffProcess(
          this,
          (BattleBuffData_CheckInvokeBuff_o *)Item,
          (SkillLvMaster_o *)MasterData_object,
          *v365,
          v177,
          *v68,
          0,
          v169,
          v350);
      }
      v195 = *(_QWORD *)v184;
      v196 = *(unsigned __int16 *)(*(_QWORD *)v184 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v184 + 302LL) )
      {
        v197 = (int *)(*(_QWORD *)(v195 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v197 - 1) != System_IDisposable_TypeInfo )
        {
          --v196;
          v197 += 4;
          if ( !v196 )
            goto LABEL_108;
        }
        v198 = v195 + 16LL * *v197 + 312;
      }
      else
      {
LABEL_108:
        v198 = sub_1BB60A8(v184, System_IDisposable_TypeInfo, 0LL);
      }
      ActorId = (*(__int64 (__fastcall **)(__int64, _QWORD))v198)(v184, *(_QWORD *)(v198 + 8));
      v172 = v363;
      LODWORD(v173) = *(_DWORD *)(v363 + 24);
      ++v174;
    }
    while ( (__int64)v174 < (int)v173 );
    if ( (int)v173 >= 1 )
    {
      v199 = 0LL;
      while ( v199 < (unsigned int)v173 )
      {
        processArgs = (BattleLogic_DamageProcessArgs_o *)v199;
        v200 = *(unsigned __int8 *)(v172 + v199 + 32);
        ActorId = sub_1B64170(BuffList_ACTION___TypeInfo, 2LL);
        if ( !ActorId )
          goto LABEL_369;
        v201 = *(_DWORD *)(ActorId + 24);
        v202 = (BuffList_ACTION_array *)ActorId;
        if ( v200 )
        {
          if ( !v201 )
            break;
          *(_DWORD *)(ActorId + 32) = 118;
          if ( v201 == 1 )
            break;
          v203 = 120;
        }
        else
        {
          if ( !v201 )
            break;
          *(_DWORD *)(ActorId + 32) = 88;
          if ( v201 == 1 )
            break;
          v203 = 98;
        }
        *(_DWORD *)(ActorId + 36) = v203;
        ActorId = (*(__int64 (__fastcall **)(_QWORD, bool, bool, _QWORD))(v362 + 24))(
                    *(_QWORD *)(v362 + 64),
                    v200 != 0,
                    v361,
                    *(_QWORD *)(v362 + 40));
        if ( !ActorId )
          goto LABEL_369;
        v204 = *(_QWORD *)ActorId;
        v205 = ActorId;
        v206 = *(unsigned __int16 *)(*(_QWORD *)ActorId + 302LL);
        if ( *(_WORD *)(*(_QWORD *)ActorId + 302LL) )
        {
          v207 = (int *)(*(_QWORD *)(v204 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)v207 - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
          {
            --v206;
            v207 += 4;
            if ( !v206 )
              goto LABEL_130;
          }
          v208 = v204 + 16LL * *v207 + 312;
        }
        else
        {
LABEL_130:
          v208 = sub_1BB60A8(ActorId, System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, 0LL);
        }
        v209 = (*(__int64 (__fastcall **)(__int64, _QWORD))v208)(v205, *(_QWORD *)(v208 + 8));
        if ( !v209 )
          sub_1B64324(0LL);
        while ( 1 )
        {
          v210 = *(_QWORD *)v209;
          v211 = *(unsigned __int16 *)(*(_QWORD *)v209 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v209 + 302LL) )
          {
            v212 = (int *)(*(_QWORD *)(v210 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v212 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v211;
              v212 += 4;
              if ( !v211 )
                goto LABEL_137;
            }
            v146 = v364;
            v153 = v365;
            v213 = v210 + 16LL * *v212 + 312;
          }
          else
          {
LABEL_137:
            v146 = v364;
            v153 = v365;
            v213 = sub_1BB60A8(v209, System_Collections_IEnumerator_TypeInfo, 0LL);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v213)(v209, *(_QWORD *)(v213 + 8)) & 1) == 0 )
            break;
          v214 = *(_QWORD *)v209;
          v215 = *(unsigned __int16 *)(*(_QWORD *)v209 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v209 + 302LL) )
          {
            v216 = (int *)(*(_QWORD *)(v214 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v216 - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
            {
              --v215;
              v216 += 4;
              if ( !v215 )
                goto LABEL_144;
            }
            v217 = v214 + 16LL * *v216 + 312;
          }
          else
          {
LABEL_144:
            v217 = sub_1BB60A8(v209, System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, 0LL);
          }
          v218 = (BattleServantData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v217)(v209, *(_QWORD *)(v217 + 8));
          if ( !*v146 )
            sub_1B64324(0LL);
          AttackSideEffectBuffList_42514128 = BattleServantData__getAttackSideEffectBuffList_42514128(
                                                *v146,
                                                v202,
                                                *v153,
                                                v218,
                                                0LL);
          v221 = AttackSideEffectBuffList_42514128;
          if ( !AttackSideEffectBuffList_42514128 )
            sub_1B64324(0LL);
          v222 = *(_QWORD *)&AttackSideEffectBuffList_42514128->max_length;
          if ( (int)v222 >= 1 )
          {
            v223 = 0LL;
            do
            {
              if ( v223 >= (unsigned int)v222 )
                sub_1B6432C(AttackSideEffectBuffList_42514128, v220);
              if ( !*v68 )
                sub_1B64324(0LL);
              v224 = v221->m_Items[v223];
              logicfunction = this->fields.logicfunction;
              SideEffectActionData = BattleActionData__MakeSideEffectActionData(*v68, 3, 0LL);
              if ( !logicfunction )
                sub_1B64324(SideEffectActionData);
              BattleLogicFunction__SetSideEffectBuff(
                logicfunction,
                (SkillLvMaster_o *)MasterData_object,
                SideEffectActionData,
                v224,
                (BattleLogicFunction_CommonSideEffectFunctionArgument_o *)v169,
                0,
                0LL);
              LODWORD(v222) = v221->max_length;
              ++v223;
            }
            while ( (__int64)v223 < (int)v222 );
          }
        }
        v227 = *(_QWORD *)v209;
        v228 = *(unsigned __int16 *)(*(_QWORD *)v209 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v209 + 302LL) )
        {
          v229 = (int *)(*(_QWORD *)(v227 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v229 - 1) != System_IDisposable_TypeInfo )
          {
            --v228;
            v229 += 4;
            if ( !v228 )
              goto LABEL_159;
          }
          v230 = v227 + 16LL * *v229 + 312;
        }
        else
        {
LABEL_159:
          v230 = sub_1BB60A8(v209, System_IDisposable_TypeInfo, 0LL);
        }
        ActorId = (*(__int64 (__fastcall **)(__int64, _QWORD))v230)(v209, *(_QWORD *)(v230 + 8));
        v172 = v363;
        LODWORD(v173) = *(_DWORD *)(v363 + 24);
        v199 = (unsigned __int64)&processArgs->klass + 1;
        if ( (__int64)&processArgs->klass + 1 >= (int)v173 )
          goto LABEL_169;
      }
LABEL_370:
      sub_1B6432C(ActorId, v152);
    }
  }
LABEL_169:
  processArgsa = (BattleLogic_DamageProcessArgs_o *)sub_1B64314(BattleLogic_DamageProcessArgs_TypeInfo, v152, v170);
  BattleLogic_DamageProcessArgs___ctor(processArgsa, 1, -1, 0LL);
  if ( !v362 )
    goto LABEL_369;
  ActorId = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v362 + 24))(
              *(_QWORD *)(v362 + 64),
              0LL,
              0LL,
              *(_QWORD *)(v362 + 40));
  if ( !ActorId )
    goto LABEL_369;
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
        goto LABEL_175;
    }
    v235 = v231 + 16LL * *v234 + 312;
  }
  else
  {
LABEL_175:
    v235 = sub_1BB60A8(ActorId, System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, 0LL);
  }
  v236 = (*(__int64 (__fastcall **)(__int64, _QWORD))v235)(v232, *(_QWORD *)(v235 + 8));
  v237 = v236;
  v238 = 0LL;
  while ( 1 )
  {
    if ( !v237 )
      sub_1B64324(v236);
    v239 = *(_QWORD *)v237;
    v240 = *(unsigned __int16 *)(*(_QWORD *)v237 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v237 + 302LL) )
    {
      v241 = (int *)(*(_QWORD *)(v239 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v241 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v240;
        v241 += 4;
        if ( !v240 )
          goto LABEL_183;
      }
      v242 = v239 + 16LL * *v241 + 312;
    }
    else
    {
LABEL_183:
      v242 = sub_1BB60A8(v237, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v242)(v237, *(_QWORD *)(v242 + 8)) & 1) == 0 )
      break;
    v243 = *(_QWORD *)v237;
    v244 = *(unsigned __int16 *)(*(_QWORD *)v237 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v237 + 302LL) )
    {
      v245 = (int *)(*(_QWORD *)(v243 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v245 - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
      {
        --v244;
        v245 += 4;
        if ( !v244 )
          goto LABEL_190;
      }
      v246 = v243 + 16LL * *v245 + 312;
    }
    else
    {
LABEL_190:
      v246 = sub_1BB60A8(v237, System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, 0LL);
    }
    v247 = (BattleServantData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v246)(v237, *(_QWORD *)(v246 + 8));
    logic = this->fields.logic;
    if ( !logic )
      sub_1B64324(0LL);
    Damagelist = BattleLogic__getDamagelist(logic, *v146, v247, *v153, processArgsa, 0LL);
    v250 = Damagelist;
    if ( v247 == (BattleServantData_o *)v360 )
      v238 = Damagelist;
    if ( !v247 )
      sub_1B64324(Damagelist);
    buffData = v247->fields.buffData;
    if ( !buffData )
      sub_1B64324(Damagelist);
    if ( !buffData->fields.isNoDamage )
    {
      v252 = *v68;
      v253 = BattleBuffData__UseProgressingDoNotAct(v247->fields.buffData, v247, 0, 0LL);
      if ( !v252 )
        sub_1B64324(v253);
      BattleActionData__addSideEffectActionData(v252, v253, 1, 0LL);
    }
    if ( !*v146 )
      sub_1B64324(0LL);
    v254 = BattleServantData__checkPlayer(*v146, 0LL);
    if ( v254 )
    {
      if ( !*v146 )
        sub_1B64324(v254);
      v247->fields.overkillTargetId = (*v146)->fields.uniqueId;
    }
    if ( !*v68 )
      sub_1B64324(0LL);
    BattleActionData__setDamageData(*v68, v250, 0LL, 0, 0, 0LL);
  }
  v255 = *(_QWORD *)v237;
  v256 = *(unsigned __int16 *)(*(_QWORD *)v237 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v237 + 302LL) )
  {
    v257 = (int *)(*(_QWORD *)(v255 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v257 - 1) != System_IDisposable_TypeInfo )
    {
      --v256;
      v257 += 4;
      if ( !v256 )
        goto LABEL_210;
    }
    v258 = v255 + 16LL * *v257 + 312;
  }
  else
  {
LABEL_210:
    v258 = sub_1BB60A8(v237, System_IDisposable_TypeInfo, 0LL);
  }
  ActorId = (*(__int64 (__fastcall **)(__int64, _QWORD))v258)(v237, *(_QWORD *)(v258 + 8));
  if ( !*(_QWORD *)v354 )
    goto LABEL_369;
  (*(void (__fastcall **)(_QWORD, Il2CppObject *, _QWORD))(*(_QWORD *)v354 + 24LL))(
    *(_QWORD *)(*(_QWORD *)v354 + 64LL),
    v360,
    *(_QWORD *)(*(_QWORD *)v354 + 40LL));
  ActorId = (__int64)*v153;
  if ( !*v153 )
    goto LABEL_369;
  v259 = *v68;
  ActorId = BattleCommandData__get_type((BattleCommandData_o *)ActorId, 0LL);
  if ( !v259 )
    goto LABEL_369;
  v259->fields.type = ActorId;
  ActorId = (__int64)*v68;
  if ( !*v68 )
    goto LABEL_369;
  BattleActionData__setCommand((BattleActionData_o *)ActorId, *v153, 0LL);
  v260 = *v153;
  if ( !*v153 )
    goto LABEL_369;
  v261 = *v68;
  if ( !*v68 )
    goto LABEL_369;
  v261->fields.actionIndex = v260->fields.actionIndex;
  ActorId = (__int64)*v146;
  if ( !*v146 )
    goto LABEL_369;
  ActorId = BattleServantData__getMotionId((BattleServantData_o *)ActorId, v260, 0LL);
  v261->fields.motionId = ActorId;
  if ( !v238 )
    goto LABEL_369;
  v262 = *v68;
  ActorId = BattleActionData_DamageData__getAttackCount(v238, 0LL);
  if ( !v262 )
    goto LABEL_369;
  v262->fields.attackcount = ActorId;
  v263 = this->fields.data;
  if ( !v263 )
    goto LABEL_369;
  perf = v263->fields.perf;
  if ( !perf )
    goto LABEL_369;
  if ( !*v153 )
    goto LABEL_369;
  ActorId = (__int64)perf->fields.commandPerf;
  if ( !ActorId )
    goto LABEL_369;
  BattlePerformanceCommandCard__UpdateRemainingCardBuff(
    (BattlePerformanceCommandCard_o *)ActorId,
    (*v153)->fields.actionIndex,
    0LL);
  if ( !*v146 )
    goto LABEL_369;
  ActorId = (__int64)this->fields.data;
  if ( !ActorId )
    goto LABEL_369;
  v265 = *v68;
  ActorId = BattleData__isPrevAttackMe((BattleData_o *)ActorId, (*v146)->fields.uniqueId, targetId, 0LL);
  if ( !v265 )
    goto LABEL_369;
  v267 = v363;
  v265->fields.prevattackme = ActorId & 1;
  v268 = *(_QWORD *)(v363 + 24);
  if ( (int)v268 >= 1 )
  {
    v269 = 0LL;
    do
    {
      if ( v269 >= (unsigned int)v268 )
        goto LABEL_370;
      v270 = *(unsigned __int8 *)(v267 + v269 + 32);
      if ( *(_BYTE *)(v267 + v269 + 32) )
        v271 = 178;
      else
        v271 = 159;
      TargetCommandCodeBuffList = BattleLogicNomal__GetTargetCommandCodeBuffList(
                                    (BattleLogicNomal_o *)ActorId,
                                    *v356,
                                    v357,
                                    v271,
                                    *v365,
                                    v266);
      ActorId = (*(__int64 (__fastcall **)(_QWORD, _QWORD, bool, _QWORD))(v362 + 24))(
                  *(_QWORD *)(v362 + 64),
                  v270,
                  v361,
                  *(_QWORD *)(v362 + 40));
      if ( !ActorId )
        goto LABEL_369;
      v273 = *(_QWORD *)ActorId;
      v274 = ActorId;
      v275 = *(unsigned __int16 *)(*(_QWORD *)ActorId + 302LL);
      if ( *(_WORD *)(*(_QWORD *)ActorId + 302LL) )
      {
        v276 = (int *)(*(_QWORD *)(v273 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)v276 - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
        {
          --v275;
          v276 += 4;
          if ( !v275 )
            goto LABEL_239;
        }
        v277 = v273 + 16LL * *v276 + 312;
      }
      else
      {
LABEL_239:
        v277 = sub_1BB60A8(ActorId, System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, 0LL);
      }
      v278 = (*(__int64 (__fastcall **)(__int64, _QWORD))v277)(v274, *(_QWORD *)(v277 + 8));
      v279 = v278;
      while ( 1 )
      {
        if ( !v279 )
          sub_1B64324(v278);
        v280 = *(_QWORD *)v279;
        v281 = *(unsigned __int16 *)(*(_QWORD *)v279 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v279 + 302LL) )
        {
          v282 = (int *)(*(_QWORD *)(v280 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v282 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v281;
            v282 += 4;
            if ( !v281 )
              goto LABEL_247;
          }
          v283 = v280 + 16LL * *v282 + 312;
        }
        else
        {
LABEL_247:
          v283 = sub_1BB60A8(v279, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v283)(v279, *(_QWORD *)(v283 + 8)) & 1) == 0 )
          break;
        v284 = *(_QWORD *)v279;
        v285 = *(unsigned __int16 *)(*(_QWORD *)v279 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v279 + 302LL) )
        {
          v286 = (int *)(*(_QWORD *)(v284 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v286 - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
          {
            --v285;
            v286 += 4;
            if ( !v285 )
              goto LABEL_254;
          }
          v287 = v284 + 16LL * *v286 + 312;
        }
        else
        {
LABEL_254:
          v287 = sub_1BB60A8(v279, System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, 0LL);
        }
        v288 = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64, _QWORD))v287)(v279, *(_QWORD *)(v287 + 8));
        if ( !v366 )
          sub_1B64324(0LL);
        v289 = System_Collections_Generic_Dictionary_object__object___get_Item(
                 v366,
                 v288,
                 (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_BattleServantData__BattleBuffData_CheckInvokeBuff__get_Item__);
        BattleLogicNomal__commandCodeBuffProcess(
          this,
          (BattleBuffData_CheckInvokeBuff_o *)v289,
          (SkillLvMaster_o *)MasterData_object,
          *v365,
          TargetCommandCodeBuffList,
          *v68,
          1,
          v169,
          v350);
      }
      v290 = *(_QWORD *)v279;
      v291 = *(unsigned __int16 *)(*(_QWORD *)v279 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v279 + 302LL) )
      {
        v292 = (int *)(*(_QWORD *)(v290 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v292 - 1) != System_IDisposable_TypeInfo )
        {
          --v291;
          v292 += 4;
          if ( !v291 )
            goto LABEL_262;
        }
        v293 = v290 + 16LL * *v292 + 312;
      }
      else
      {
LABEL_262:
        v293 = sub_1BB60A8(v279, System_IDisposable_TypeInfo, 0LL);
      }
      ActorId = (*(__int64 (__fastcall **)(__int64, _QWORD))v293)(v279, *(_QWORD *)(v293 + 8));
      v267 = v363;
      LODWORD(v268) = *(_DWORD *)(v363 + 24);
      ++v269;
    }
    while ( (__int64)v269 < (int)v268 );
    if ( (int)v268 >= 1 )
    {
      v294 = 0LL;
      while ( v294 < (unsigned int)v268 )
      {
        v295 = *(unsigned __int8 *)(v267 + v294 + 32);
        ActorId = sub_1B64170(BuffList_ACTION___TypeInfo, 2LL);
        if ( !ActorId )
          goto LABEL_369;
        v296 = *(_DWORD *)(ActorId + 24);
        v297 = (BuffList_ACTION_array *)ActorId;
        if ( v295 )
        {
          if ( !v296 )
            goto LABEL_370;
          *(_DWORD *)(ActorId + 32) = 119;
          if ( v296 == 1 )
            goto LABEL_370;
          v298 = 121;
        }
        else
        {
          if ( !v296 )
            goto LABEL_370;
          *(_DWORD *)(ActorId + 32) = 57;
          if ( v296 == 1 )
            goto LABEL_370;
          v298 = 80;
        }
        *(_DWORD *)(ActorId + 36) = v298;
        ActorId = (*(__int64 (__fastcall **)(_QWORD, bool, bool, _QWORD))(v362 + 24))(
                    *(_QWORD *)(v362 + 64),
                    v295 != 0,
                    v361,
                    *(_QWORD *)(v362 + 40));
        if ( !ActorId )
          goto LABEL_369;
        v299 = *(_QWORD *)ActorId;
        v300 = ActorId;
        v301 = *(unsigned __int16 *)(*(_QWORD *)ActorId + 302LL);
        if ( *(_WORD *)(*(_QWORD *)ActorId + 302LL) )
        {
          v302 = (int *)(*(_QWORD *)(v299 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)v302 - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
          {
            --v301;
            v302 += 4;
            if ( !v301 )
              goto LABEL_284;
          }
          v303 = v299 + 16LL * *v302 + 312;
        }
        else
        {
LABEL_284:
          v303 = sub_1BB60A8(ActorId, System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, 0LL);
        }
        v304 = (*(__int64 (__fastcall **)(__int64, _QWORD))v303)(v300, *(_QWORD *)(v303 + 8));
        if ( !v304 )
          sub_1B64324(0LL);
        while ( 1 )
        {
          v305 = *(_QWORD *)v304;
          v306 = *(unsigned __int16 *)(*(_QWORD *)v304 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v304 + 302LL) )
          {
            v307 = (int *)(*(_QWORD *)(v305 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v307 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v306;
              v307 += 4;
              if ( !v306 )
                goto LABEL_291;
            }
            v308 = v305 + 16LL * *v307 + 312;
          }
          else
          {
LABEL_291:
            v308 = sub_1BB60A8(v304, System_Collections_IEnumerator_TypeInfo, 0LL);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v308)(v304, *(_QWORD *)(v308 + 8)) & 1) == 0 )
            break;
          v309 = *(_QWORD *)v304;
          v310 = *(unsigned __int16 *)(*(_QWORD *)v304 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v304 + 302LL) )
          {
            v311 = (int *)(*(_QWORD *)(v309 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v311 - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
            {
              --v310;
              v311 += 4;
              if ( !v310 )
                goto LABEL_298;
            }
            v312 = v309 + 16LL * *v311 + 312;
          }
          else
          {
LABEL_298:
            v312 = sub_1BB60A8(v304, System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, 0LL);
          }
          v313 = (BattleServantData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v312)(v304, *(_QWORD *)(v312 + 8));
          if ( !*v364 )
            sub_1B64324(0LL);
          v314 = BattleServantData__getAttackSideEffectBuffList_42514128(*v364, v297, *v365, v313, 0LL);
          v316 = v314;
          if ( !v314 )
            sub_1B64324(0LL);
          v317 = *(_QWORD *)&v314->max_length;
          if ( (int)v317 >= 1 )
          {
            v318 = 0LL;
            do
            {
              if ( v318 >= (unsigned int)v317 )
                sub_1B6432C(v314, v315);
              v319 = this->fields.logicfunction;
              if ( !v319 )
                sub_1B64324(0LL);
              BattleLogicFunction__SetSideEffectBuff(
                v319,
                (SkillLvMaster_o *)MasterData_object,
                *v68,
                v316->m_Items[v318],
                (BattleLogicFunction_CommonSideEffectFunctionArgument_o *)v169,
                1,
                0LL);
              LODWORD(v317) = v316->max_length;
              ++v318;
            }
            while ( (__int64)v318 < (int)v317 );
          }
        }
        v320 = *(_QWORD *)v304;
        v321 = *(unsigned __int16 *)(*(_QWORD *)v304 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v304 + 302LL) )
        {
          v322 = (int *)(*(_QWORD *)(v320 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v322 - 1) != System_IDisposable_TypeInfo )
          {
            --v321;
            v322 += 4;
            if ( !v321 )
              goto LABEL_312;
          }
          v323 = v320 + 16LL * *v322 + 312;
        }
        else
        {
LABEL_312:
          v323 = sub_1BB60A8(v304, System_IDisposable_TypeInfo, 0LL);
        }
        ActorId = (*(__int64 (__fastcall **)(__int64, _QWORD))v323)(v304, *(_QWORD *)(v323 + 8));
        v267 = v363;
        LODWORD(v268) = *(_DWORD *)(v363 + 24);
        if ( (__int64)++v294 >= (int)v268 )
          goto LABEL_321;
      }
      goto LABEL_370;
    }
  }
LABEL_321:
  ActorId = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v362 + 24))(
              *(_QWORD *)(v362 + 64),
              0LL,
              0LL,
              *(_QWORD *)(v362 + 40));
  if ( !ActorId )
    goto LABEL_369;
  v324 = *(_QWORD *)ActorId;
  v325 = ActorId;
  v326 = *(unsigned __int16 *)(*(_QWORD *)ActorId + 302LL);
  if ( *(_WORD *)(*(_QWORD *)ActorId + 302LL) )
  {
    v327 = (int *)(*(_QWORD *)(v324 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)v327 - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
    {
      --v326;
      v327 += 4;
      if ( !v326 )
        goto LABEL_326;
    }
    v328 = v324 + 16LL * *v327 + 312;
  }
  else
  {
LABEL_326:
    v328 = sub_1BB60A8(ActorId, System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, 0LL);
  }
  v329 = (*(__int64 (__fastcall **)(__int64, _QWORD))v328)(v325, *(_QWORD *)(v328 + 8));
  v330 = v329;
  while ( 1 )
  {
    if ( !v330 )
      sub_1B64324(v329);
    v331 = *(_QWORD *)v330;
    v332 = *(unsigned __int16 *)(*(_QWORD *)v330 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v330 + 302LL) )
    {
      v333 = (int *)(*(_QWORD *)(v331 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v333 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v332;
        v333 += 4;
        if ( !v332 )
          goto LABEL_334;
      }
      v334 = v331 + 16LL * *v333 + 312;
    }
    else
    {
LABEL_334:
      v334 = sub_1BB60A8(v330, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v334)(v330, *(_QWORD *)(v334 + 8)) & 1) == 0 )
      break;
    v335 = *(_QWORD *)v330;
    v336 = *(unsigned __int16 *)(*(_QWORD *)v330 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v330 + 302LL) )
    {
      v337 = (int *)(*(_QWORD *)(v335 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v337 - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
      {
        --v336;
        v337 += 4;
        if ( !v336 )
          goto LABEL_341;
      }
      v338 = v335 + 16LL * *v337 + 312;
    }
    else
    {
LABEL_341:
      v338 = sub_1BB60A8(v330, System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, 0LL);
    }
    v339 = (*(__int64 (__fastcall **)(__int64, _QWORD))v338)(v330, *(_QWORD *)(v338 + 8));
    if ( !*v364 )
      sub_1B64324(v339);
    if ( !v339 )
      sub_1B64324(0LL);
    if ( !this->fields.logic )
      sub_1B64324(v339);
    v329 = BattleLogic__setDamageSideEffect(
             this->fields.logic,
             *v68,
             (*v364)->fields.uniqueId,
             *(_DWORD *)(v339 + 24),
             *v365,
             0LL);
  }
  v340 = *(_QWORD *)v330;
  v341 = *(unsigned __int16 *)(*(_QWORD *)v330 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v330 + 302LL) )
  {
    v342 = (int *)(*(_QWORD *)(v340 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v342 - 1) != System_IDisposable_TypeInfo )
    {
      --v341;
      v342 += 4;
      if ( !v341 )
        goto LABEL_351;
    }
    v343 = v340 + 16LL * *v342 + 312;
  }
  else
  {
LABEL_351:
    v343 = sub_1BB60A8(v330, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v343)(v330, *(_QWORD *)(v343 + 8));
  ActorId = *v351;
  if ( !*v351 )
    goto LABEL_369;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v367,
    (System_Collections_Generic_List_object__o *)ActorId,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
  v368 = v367;
  while ( 1 )
  {
    v344 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v368,
             (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    if ( !v344 )
      break;
    current = v368.fields._current;
    if ( !v368.fields._current )
      sub_1B64324(v344);
    klass = v368.fields._current[49].klass;
    if ( !klass )
      sub_1B64324(v344);
    LOBYTE(klass->_1.methods) = 0;
    if ( v353->fields.isCanCounterTask )
    {
      if ( !*v364 )
        sub_1B64324(v344);
      v347 = this->fields.data;
      if ( !v347 )
        sub_1B64324(0LL);
      BattleData__SetWasAttackTargetId(v347, (*v364)->fields.uniqueId, (int32_t)current[1].monitor, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v368,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
  if ( !*(_QWORD *)v354 )
    goto LABEL_369;
  ActorId = (*(__int64 (__fastcall **)(_QWORD, Il2CppObject *, _QWORD))(*(_QWORD *)v354 + 24LL))(
              *(_QWORD *)(*(_QWORD *)v354 + 64LL),
              v360,
              *(_QWORD *)(*(_QWORD *)v354 + 40LL));
  v348 = *v68;
  if ( !*v68
    || (v348->fields.isForcedSpeedOne = v353->fields.isForcedSpeedOne, v348->fields.isAllAttack = v352, !*v364)
    || (ActorId = (__int64)this->fields.data) == 0
    || (BattleData__setCommandAttack((BattleData_o *)ActorId, (*v364)->fields.uniqueId, targetId, 0LL),
        (ActorId = (__int64)this->fields.logic) == 0)
    || (BattleLogic__checkUsedBuff((BattleLogic_o *)ActorId, 0LL), (ActorId = (__int64)this->fields.logic) == 0) )
  {
LABEL_369:
    sub_1B64324(ActorId);
  }
  BattleLogic__updateConditionsBuffAll((BattleLogic_o *)ActorId, 0LL);
  return *v68;
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
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x20
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w1

  if ( (byte_49FEFC2 & 1) == 0 )
  {
    sub_1B640C8(&BattleActionData_TypeInfo, task);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    sub_1B640C8(&StringLiteral_8678/*"MOTION_DO_NOT_ACT"*/, v6);
    byte_49FEFC2 = 1;
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
  v15 = 0LL;
  if ( !v12 )
  {
    v15 = sub_1B64314(BattleActionData_TypeInfo, v13, v14);
    BattleActionData___ctor((BattleActionData_o *)v15, 0LL);
    if ( task )
    {
      data = (BattleData_o *)BattleLogicTask__getActorId(task, 0LL);
      if ( v15 )
      {
        *(_DWORD *)(v15 + 32) = (_DWORD)data;
        v18 = StringLiteral_8678/*"MOTION_DO_NOT_ACT"*/;
        *(_QWORD *)(v15 + 64) = StringLiteral_8678/*"MOTION_DO_NOT_ACT"*/;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v15 + 64), v18, v16, v17);
        data = (BattleData_o *)task->fields.command;
        if ( data )
        {
          *(_DWORD *)(v15 + 60) = BattleCommandData__get_type((BattleCommandData_o *)data, 0LL);
          return (BattleActionData_o *)v15;
        }
      }
    }
LABEL_16:
    sub_1B64324(data);
  }
  return (BattleActionData_o *)v15;
}


BattleActionData_o *__fastcall BattleLogicNomal__CreateProgressIntervalTurn(
        BattleLogicNomal_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  ProgressIntervalTurnActionData_o *v4; // x20
  BattleData_o *data; // x0
  BattleServantData_array *FieldEnemyServantList; // x0

  if ( (byte_49FEFC1 & 1) == 0 )
  {
    sub_1B640C8(&ProgressIntervalTurnActionData_TypeInfo, task);
    byte_49FEFC1 = 1;
  }
  v4 = (ProgressIntervalTurnActionData_o *)sub_1B64314(ProgressIntervalTurnActionData_TypeInfo, task, method);
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
    sub_1B64324(data);
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
  __int64 v14; // x1
  __int64 v15; // x2
  struct BattleData_o *v16; // x8
  BattleActorControl_o *v17; // x22
  struct BattleData_o *v18; // x8
  int32_t uniqueID; // w9
  __int64 *v20; // x10
  BattleActorControl_o *v21; // x22
  int32_t v22; // w8
  int32_t v23; // w2
  int32_t v24; // w3

  if ( (byte_49FEFB7 & 1) == 0 )
  {
    sub_1B640C8(&BattleActionData_TypeInfo, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    sub_1B640C8(&StringLiteral_6373/*"FOCUS_UNDER"*/, v4);
    sub_1B640C8(&StringLiteral_6371/*"FOCUS_CENTER"*/, v5);
    sub_1B640C8(&StringLiteral_6375/*"FOCUS_UP"*/, v6);
    byte_49FEFB7 = 1;
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
    v12 = StringLiteral_6371/*"FOCUS_CENTER"*/;
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
        v16 = this->fields.data;
        if ( !v16 )
          goto LABEL_42;
        v12 = StringLiteral_6371/*"FOCUS_CENTER"*/;
        v16->fields.globaltargetId = PartsActor->fields.uniqueID;
      }
    }
    if ( v11 == 2 )
    {
      data = this->fields.data;
      if ( !data )
        goto LABEL_42;
      v21 = BattleData__GetPartsActor(data, 2, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      data = (BattleData_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v21, 0LL, 0LL);
      if ( ((unsigned __int8)data & 1) == 0 )
        goto LABEL_39;
      if ( !v21 )
        goto LABEL_42;
      data = (BattleData_o *)v21->fields.battleSvtData;
      if ( !data )
        goto LABEL_42;
      data = (BattleData_o *)BattleServantData__isAlive((BattleServantData_o *)data, 0, 0LL);
      if ( ((unsigned __int8)data & 1) == 0 )
        goto LABEL_39;
      v18 = this->fields.data;
      if ( !v18 )
        goto LABEL_42;
      uniqueID = v21->fields.uniqueID;
      v20 = &StringLiteral_6373/*"FOCUS_UNDER"*/;
    }
    else
    {
      if ( v11 )
        goto LABEL_39;
      data = this->fields.data;
      if ( !data )
        goto LABEL_42;
      v17 = BattleData__GetPartsActor(data, 0, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      data = (BattleData_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v17, 0LL, 0LL);
      if ( ((unsigned __int8)data & 1) == 0 )
        goto LABEL_39;
      if ( !v17 )
        goto LABEL_42;
      data = (BattleData_o *)v17->fields.battleSvtData;
      if ( !data )
        goto LABEL_42;
      data = (BattleData_o *)BattleServantData__isAlive((BattleServantData_o *)data, 0, 0LL);
      if ( ((unsigned __int8)data & 1) == 0 )
        goto LABEL_39;
      v18 = this->fields.data;
      if ( !v18 )
        goto LABEL_42;
      uniqueID = v17->fields.uniqueID;
      v20 = &StringLiteral_6375/*"FOCUS_UP"*/;
    }
    v12 = *v20;
    v18->fields.globaltargetId = uniqueID;
LABEL_39:
    v10 = sub_1B64314(BattleActionData_TypeInfo, v14, v15);
    BattleActionData___ctor((BattleActionData_o *)v10, 0LL);
    if ( v10 )
    {
      v22 = v9->fields.uniqueId;
      *(_DWORD *)(v10 + 32) = v22;
      *(_DWORD *)(v10 + 36) = v22;
      BattleActionData__setStateField((BattleActionData_o *)v10, 0LL);
      *(_QWORD *)(v10 + 64) = v12;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v10 + 64), v12, v23, v24);
      return (BattleActionData_o *)v10;
    }
LABEL_42:
    sub_1B64324(data);
  }
  return (BattleActionData_o *)v10;
}


System_Collections_Generic_IEnumerable_BattleLogicTask__o *__fastcall BattleLogicNomal__GetConfirmCommandFunctionBuffTask(
        BattleLogicNomal_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_49FEFAD & 1) == 0 )
  {
    sub_1B640C8(&BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__18_TypeInfo, method);
    byte_49FEFAD = 1;
  }
  v4 = sub_1B64314(BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__18_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  *(_DWORD *)(v4 + 16) = -2;
  *(_DWORD *)(v4 + 32) = System_Environment__get_CurrentManagedThreadId(0LL);
  *(_QWORD *)(v4 + 40) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v4 + 40), (int32_t)this, v5, v6);
  return (System_Collections_Generic_IEnumerable_BattleLogicTask__o *)v4;
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
  __int64 v20; // x2
  BattleLogicNomal___c_c *v21; // x0
  System_Comparison_T__o *_9__20_0; // x20
  Il2CppObject *v23; // x21
  struct BattleLogicNomal___c_StaticFields *static_fields; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  Il2CppObject *value; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_49FEFAF & 1) == 0 )
  {
    sub_1B640C8(&System_Comparison_BattleBuffData_BuffData__TypeInfo, passiveBuffDict);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_BuffList_TYPE__List_BattleBuffData_BuffData___TryGetValue__,
      v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Sort__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v13);
    sub_1B640C8(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v14);
    sub_1B640C8(&Method_BattleLogicNomal___c__GetTargetCommandCodeBuffList_b__20_0__, v15);
    sub_1B640C8(&BattleLogicNomal___c_TypeInfo, v16);
    byte_49FEFAF = 1;
  }
  value = 0LL;
  v17 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo,
                                                       passiveBuffDict,
                                                       actSvtBuffData);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  if ( !passiveBuffDict )
    goto LABEL_16;
  CommandCardBuffArray = (BattleBuffData_BuffData_array *)System_Collections_Generic_Dictionary_Int32Enum__object___TryGetValue(
                                                            (System_Collections_Generic_Dictionary_TKey__TValue__o *)passiveBuffDict,
                                                            type,
                                                            &value,
                                                            (const MethodInfo_3153FB4 *)Method_System_Collections_Generic_Dictionary_BuffList_TYPE__List_BattleBuffData_BuffData___TryGetValue__);
  if ( ((unsigned __int8)CommandCardBuffArray & 1) != 0 )
  {
    if ( !v17 )
      goto LABEL_16;
    System_Collections_Generic_List_object___AddRange(
      v17,
      (System_Collections_Generic_IEnumerable_T__o *)value,
      (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  }
  if ( !actSvtBuffData
    || (CommandCardBuffArray = BattleBuffData__GetCommandCardBuffArray(actSvtBuffData, command, type, 0LL), !v17) )
  {
LABEL_16:
    sub_1B64324(CommandCardBuffArray);
  }
  System_Collections_Generic_List_object___AddRange(
    v17,
    (System_Collections_Generic_IEnumerable_T__o *)CommandCardBuffArray,
    (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  v21 = BattleLogicNomal___c_TypeInfo;
  if ( !BattleLogicNomal___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo);
    v21 = BattleLogicNomal___c_TypeInfo;
  }
  _9__20_0 = (System_Comparison_T__o *)v21->static_fields->__9__20_0;
  if ( !_9__20_0 )
  {
    if ( !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      v21 = BattleLogicNomal___c_TypeInfo;
    }
    v23 = (Il2CppObject *)v21->static_fields->__9;
    _9__20_0 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_BattleBuffData_BuffData__TypeInfo, v19, v20);
    System_Comparison_object____ctor(
      _9__20_0,
      v23,
      Method_BattleLogicNomal___c__GetTargetCommandCodeBuffList_b__20_0__,
      0LL);
    static_fields = BattleLogicNomal___c_TypeInfo->static_fields;
    static_fields->__9__20_0 = (struct System_Comparison_BattleBuffData_BuffData__o *)_9__20_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__20_0, (int32_t)_9__20_0, v25, v26);
  }
  System_Collections_Generic_List_object___Sort_55243320(
    v17,
    _9__20_0,
    (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Sort__);
  return (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v17;
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
      && BattleServantData__isCardTypeAction(attackSvtData, command, 0LL);
}


void __fastcall BattleLogicNomal__SetNextTargetId(BattleLogicNomal_o *this, const MethodInfo *method)
{
  BattleData_o *data; // x0
  int32_t justDeadTargetId; // w1
  BattleServantData_o *ServantData; // x0
  BattleActorControl_o *PartsActor; // x20
  struct BattleData_o *v7; // x8

  if ( (byte_49FEFB9 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FEFB9 = 1;
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
          sub_1B64324(data);
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
  if ( (byte_49FEFBA & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_Empty_int___, prevFieldIndiv);
    sub_1B640C8(&Method_System_Linq_Enumerable_SequenceEqual_int___, v5);
    byte_49FEFBA = 1;
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
      sub_1BB6000(Method_System_Array_Empty_int___);
      v9 = v8[7];
    }
    v10 = *(_QWORD *)(v9 + 16);
    if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
      v10 = sub_1BB5FA4(v10);
    if ( !*(_DWORD *)(v10 + 224) )
      j_il2cpp_runtime_class_init_0(v10);
    v11 = *(_QWORD *)(v8[7] + 16LL);
    if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
      v11 = sub_1BB5FA4(v11);
    QuestIndividualities = **(System_Collections_Generic_IEnumerable_TSource__o ***)(v11 + 184);
  }
  if ( !v3 )
  {
    v12 = Method_System_Array_Empty_int___;
    v13 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v13 )
    {
      sub_1BB6000(Method_System_Array_Empty_int___);
      v13 = v12[7];
    }
    v14 = *(_QWORD *)(v13 + 16);
    if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
      v14 = sub_1BB5FA4(v14);
    if ( !*(_DWORD *)(v14 + 224) )
      j_il2cpp_runtime_class_init_0(v14);
    v15 = *(_QWORD *)(v12[7] + 16LL);
    if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
      v15 = sub_1BB5FA4(v15);
    v3 = **(System_Collections_Generic_IEnumerable_TSource__o ***)(v15 + 184);
  }
  if ( !System_Linq_Enumerable__SequenceEqual_int_(
          QuestIndividualities,
          v3,
          (const MethodInfo_2E6BD68 *)Method_System_Linq_Enumerable_SequenceEqual_int___) )
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
    sub_1B64324(data);
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
    sub_1B64324(data);
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
  __int64 v21; // x2
  int max_length; // w8
  BattleBuffData_BuffData_array *v23; // x23
  unsigned int v24; // w28
  BattleBuffData_BuffData_o *v25; // x24
  BattleSkillInfoData_o *v26; // x25
  struct System_Int32_array *vals; // x8
  __int64 v28; // x2
  struct System_Int32_array *v29; // x8
  BattleLogicTask_o *v30; // x24
  BattleLogic_o *logic; // x25
  __int64 v32; // x26
  int32_t v33; // w2
  int32_t v34; // w3
  int32_t v35; // w2
  int32_t v36; // w3
  struct System_Object_array *items; // x8
  _QWORD *v38; // x9
  __int64 size; // x10
  Il2CppClass **v40; // x0
  __int64 v42; // x0
  bool isFirstAdd; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_49FEFBE & 1) == 0 )
  {
    sub_1B640C8(&BattleLogicTask___TypeInfo, *(_QWORD *)&ltype);
    sub_1B640C8(&BattleLogicTask_TypeInfo, v6);
    sub_1B640C8(&BattleSkillInfoData_TypeInfo, v7);
    sub_1B640C8(&Method_DataManager_GetMasterData_SkillLvMaster___, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v11);
    sub_1B640C8(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v12);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_49FEFBE = 1;
  }
  isFirstAdd = 0;
  v14 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                       *(_QWORD *)&ltype,
                                                       data);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_44;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_SkillLvMaster___);
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
          v23 = (BattleBuffData_BuffData_array *)Instance;
          if ( max_length >= 1 )
          {
            v24 = 0;
            while ( v24 < max_length )
            {
              v25 = v23->m_Items[v24];
              v26 = (BattleSkillInfoData_o *)sub_1B64314(BattleSkillInfoData_TypeInfo, v16, v21);
              BattleSkillInfoData___ctor(v26, 0LL);
              if ( !v26 )
                goto LABEL_44;
              v26->fields.svtUniqueId = v20->fields.uniqueId;
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
              v29 = v25->fields.vals;
              if ( !v29 )
                goto LABEL_44;
              if ( v29->max_length <= 1 )
                break;
              v26->fields.skilllv = v29->m_Items[2];
              v30 = (BattleLogicTask_o *)sub_1B64314(BattleLogicTask_TypeInfo, v16, v28);
              BattleLogicTask___ctor(v30, 0LL);
              if ( !v30 )
                goto LABEL_44;
              BattleLogicTask__setReservationSkill(v30, v26, 0, 0LL);
              logic = this->fields.logic;
              Instance = sub_1B64170(BattleLogicTask___TypeInfo, 1LL);
              if ( !Instance )
                goto LABEL_44;
              v32 = Instance;
              Instance = sub_1B64204(v30, *(_QWORD *)(*(_QWORD *)Instance + 64LL));
              if ( !Instance )
              {
                v42 = sub_1B64348(0LL);
                sub_1B641F0(v42, 0LL);
              }
              if ( !*(_DWORD *)(v32 + 24) )
                break;
              *(_QWORD *)(v32 + 32) = v30;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v32 + 32), (int32_t)v30, v33, v34);
              if ( !logic )
                goto LABEL_44;
              BattleLogic__SetFirstDisplayTriggerIntervalBuffArray(
                logic,
                &isFirstAdd,
                v20,
                v23,
                (BattleLogicTask_array *)v32,
                0LL);
              if ( !v14 )
                goto LABEL_44;
              items = v14->fields._items;
              v38 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
              ++v14->fields._version;
              if ( !items )
                goto LABEL_44;
              size = v14->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v14,
                  (Il2CppObject *)v30,
                  *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
              }
              else
              {
                v40 = &items->obj.klass + size;
                v14->fields._size = size + 1;
                v40[4] = (Il2CppClass *)v30;
                sub_1B6406C((ServantStatusBattleListViewItem_o *)(v40 + 4), (int32_t)v30, v35, v36);
              }
              max_length = v23->max_length;
              if ( (int)++v24 >= max_length )
                goto LABEL_38;
            }
LABEL_45:
            sub_1B6432C(Instance, v16);
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
    sub_1B64324(Instance);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v14,
                                    (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  BattleBuffData_BuffData_o *current; // x27
  _BOOL8 IsEnableCommandCode; // x0
  __int64 v22; // x0
  __int64 v23; // x1
  struct System_Int32_array *vals; // x8
  il2cpp_array_size_t max_length; // w9
  SkillLvEntity_o *Entity; // x0
  SkillLvEntity_o *v27; // x29
  BattleLogicFunction_o *logicfunction; // x27
  BattleActionData_o *SideEffectActionData; // x0
  System_Int32_array *funcId; // x26
  BattleActionData_o *v31; // x28
  DataVals_array *DataValsList; // x0
  BattleLogicFunction_o *v33; // x0
  int32_t type; // [xsp+38h] [xbp-A8h]
  BattleLogicNomal_o *v36; // [xsp+40h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+48h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v38; // [xsp+60h] [xbp-80h] BYREF

  v36 = this;
  if ( (byte_49FEFC3 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, checkInvokeBuff);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v16);
    this = (BattleLogicNomal_o *)sub_1B640C8(
                                   &Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__,
                                   v17);
    byte_49FEFC3 = 1;
  }
  memset(&v38, 0, sizeof(v38));
  if ( !commandCodeBuffList )
    sub_1B64324(this);
  System_Collections_Generic_List_object___GetEnumerator(
    &v37,
    (System_Collections_Generic_List_object__o *)commandCodeBuffList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  v38.fields._current = v37.fields._current;
  if ( isCommandAfter )
    v18 = 1;
  else
    v18 = 3;
  *(_OWORD *)&v38.fields._list = *(_OWORD *)&v37.fields._list;
  type = v18;
  while ( 1 )
  {
    v19 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v38,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v19 )
      break;
    if ( !command )
      sub_1B64324(v19);
    current = (BattleBuffData_BuffData_o *)v38.fields._current;
    IsEnableCommandCode = BattleCommandData__IsEnableCommandCode(command, 0LL);
    if ( !IsEnableCommandCode )
    {
      if ( !current )
        sub_1B64324(IsEnableCommandCode);
      IsEnableCommandCode = BattleBuffData_BuffData__isEnableCommandCardBuff(current, command, 0LL);
      if ( !IsEnableCommandCode )
      {
        IsEnableCommandCode = BattleCommandData__IsEnableCommandAssist(command, 0LL);
        if ( !IsEnableCommandCode )
          continue;
      }
    }
    if ( !checkInvokeBuff )
      sub_1B64324(IsEnableCommandCode);
    v22 = ((__int64 (__fastcall *)(BattleBuffData_CheckInvokeBuff_o *, BattleBuffData_BuffData_o *, BattleCommandData_o *, void *))checkInvokeBuff->klass->vtable._4_IsInvoke.method)(
            checkInvokeBuff,
            current,
            command,
            checkInvokeBuff->klass[1]._1.image);
    if ( (v22 & 1) != 0 )
    {
      if ( arg == 0LL || !isCommandAfter )
      {
        if ( !current )
          sub_1B64324(v22);
        vals = current->fields.vals;
        if ( !vals )
          sub_1B64324(v22);
        max_length = vals->max_length;
        if ( !max_length )
          sub_1B6432C(v22, v23);
        if ( max_length == 1 )
          sub_1B6432C(v22, v23);
        if ( !skillLvMst )
          sub_1B64324(v22);
        Entity = SkillLvMaster__GetEntity(skillLvMst, vals->m_Items[1], vals->m_Items[2], 0LL);
        v27 = Entity;
        if ( Entity )
        {
          if ( !arg )
            sub_1B64324(Entity);
          *(&arg->fields._SkillTiming_k__BackingField + 1) = current->fields.addOrder;
          if ( !actionData )
            sub_1B64324(Entity);
          logicfunction = v36->fields.logicfunction;
          SideEffectActionData = BattleActionData__MakeSideEffectActionData(actionData, type, 0LL);
          funcId = v27->fields.funcId;
          v31 = SideEffectActionData;
          DataValsList = SkillLvEntity__getDataValsList(v27, 0LL);
          if ( !logicfunction )
            sub_1B64324(DataValsList);
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
        v33 = v36->fields.logicfunction;
        if ( !v33 )
          sub_1B64324(0LL);
        BattleLogicFunction__SetSideEffectBuff(
          v33,
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
    &v38,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
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
  int32_t v7; // w2
  int32_t v8; // w3
  int32_t v9; // w1

  if ( (byte_49FEFB1 & 1) == 0 )
  {
    sub_1B640C8(&BattleActionData_TypeInfo, *(_QWORD *)&uniqueId);
    sub_1B640C8(&StringLiteral_8670/*"MOTION_BACK"*/, v4);
    byte_49FEFB1 = 1;
  }
  v5 = sub_1B64314(BattleActionData_TypeInfo, *(_QWORD *)&uniqueId, method);
  BattleActionData___ctor((BattleActionData_o *)v5, 0LL);
  if ( !v5 )
    sub_1B64324(v6);
  *(_DWORD *)(v5 + 32) = uniqueId;
  v9 = StringLiteral_8670/*"MOTION_BACK"*/;
  *(_QWORD *)(v5 + 64) = StringLiteral_8670/*"MOTION_BACK"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v5 + 64), v9, v7, v8);
  return (BattleActionData_o *)v5;
}


BattleActionData_o *__fastcall BattleLogicNomal__createBuffAddEnemy(
        BattleLogicNomal_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  BattleData_o *data; // x0
  __int64 v5; // x1
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
            sub_1B6432C(data, v5);
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
    sub_1B64324(data);
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
  __int64 v8; // x1
  __int64 v9; // x2
  struct BattleData_o *v10; // x8
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x10
  BattleData_o *v12; // x20
  _BOOL4 v13; // w9
  unsigned __int64 v14; // x22
  struct PlayMakerFSM_o **p_rootfsm; // x23
  int32_t v16; // w21
  System_Collections_Generic_List_object__o *aiNpcDataList; // x19
  System_Action_object__o *monitor; // x20
  Il2CppObject *klass; // x21
  struct BattleLogicNomal___c_StaticFields *static_fields; // x0
  int32_t v21; // w2
  int32_t v22; // w3

  if ( (byte_49FEFBD & 1) == 0 )
  {
    sub_1B640C8(&System_Action_AiNpcBattleServantData__TypeInfo, task);
    sub_1B640C8(&Method_System_Collections_Generic_List_AiNpcBattleServantData__ForEach__, v4);
    sub_1B640C8(&Method_BattleLogicNomal___c__createBuffAddPlayer_b__38_0__, v5);
    sub_1B640C8(&BattleLogicNomal___c_TypeInfo, v6);
    byte_49FEFBD = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_31;
  data = (BattleData_o *)BattleData__getFieldPlayerServantList(data, 0LL);
  if ( !data )
    goto LABEL_31;
  v10 = this->fields.data;
  m_CancellationTokenSource = data->fields.m_CancellationTokenSource;
  v12 = data;
  v13 = v10 == 0LL;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v14 = 0LL;
    p_rootfsm = &data->fields.rootfsm;
    while ( !v13 )
    {
      if ( v14 >= (unsigned int)m_CancellationTokenSource )
        goto LABEL_32;
      data = (BattleData_o *)v10->fields.battleEvent;
      if ( !data )
        break;
      data = (BattleData_o *)((__int64 (__fastcall *)(BattleData_o *, struct PlayMakerFSM_o *, Il2CppClass *))data->klass[2]._1.castClass)(
                               data,
                               p_rootfsm[v14],
                               data->klass[2]._1.declaringType);
      if ( ((unsigned __int8)data & 1) != 0 )
      {
        if ( v14 >= LODWORD(v12->fields.m_CancellationTokenSource) )
          goto LABEL_32;
        data = (BattleData_o *)p_rootfsm[v14];
        if ( !data )
          break;
        data = (BattleData_o *)BattleServantData__getMaxHp((BattleServantData_o *)data, 0LL);
        if ( v14 >= LODWORD(v12->fields.m_CancellationTokenSource) )
          goto LABEL_32;
        v16 = (int)data;
        data = (BattleData_o *)p_rootfsm[v14];
        if ( !data )
          break;
        BattleServantData__turnBuffProgressingIncrease((BattleServantData_o *)data, 0LL);
        if ( v14 >= LODWORD(v12->fields.m_CancellationTokenSource) )
          goto LABEL_32;
        data = (BattleData_o *)p_rootfsm[v14];
        if ( !data )
          break;
        data = (BattleData_o *)BattleServantData__checkUpdateUpdownHp((BattleServantData_o *)data, v16, 1, 0LL);
        if ( ((unsigned __int8)data & 1) != 0 )
        {
          if ( v14 >= LODWORD(v12->fields.m_CancellationTokenSource) )
LABEL_32:
            sub_1B6432C(data, v8);
          data = (BattleData_o *)p_rootfsm[v14];
          if ( !data )
            break;
          BattleServantData__updateHp((BattleServantData_o *)data, 0LL);
        }
      }
      v10 = this->fields.data;
      LODWORD(m_CancellationTokenSource) = v12->fields.m_CancellationTokenSource;
      ++v14;
      v13 = v10 == 0LL;
      if ( (__int64)v14 >= (int)m_CancellationTokenSource )
        goto LABEL_22;
    }
LABEL_31:
    sub_1B64324(data);
  }
LABEL_22:
  if ( v13 )
    goto LABEL_31;
  aiNpcDataList = (System_Collections_Generic_List_object__o *)v10->fields.aiNpcDataList;
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
    monitor = (System_Action_object__o *)sub_1B64314(System_Action_AiNpcBattleServantData__TypeInfo, v8, v9);
    System_Action_object____ctor(monitor, klass, Method_BattleLogicNomal___c__createBuffAddPlayer_b__38_0__, 0LL);
    static_fields = BattleLogicNomal___c_TypeInfo->static_fields;
    static_fields->__9__38_0 = (struct System_Action_AiNpcBattleServantData__o *)monitor;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__38_0, (int32_t)monitor, v21, v22);
  }
  if ( !aiNpcDataList )
    goto LABEL_31;
  System_Collections_Generic_List_object___ForEach(
    aiNpcDataList,
    (System_Action_T__o *)monitor,
    (const MethodInfo_34AE1B4 *)Method_System_Collections_Generic_List_AiNpcBattleServantData__ForEach__);
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
  __int64 v14; // x2
  struct System_Int32_array *targetIdlist; // x23
  __int64 v16; // x21
  int32_t v17; // w2
  int32_t v18; // w3
  int v19; // w8
  __int64 v20; // x1
  ServantStatusBattleListViewItem_o *v21; // x0
  System_Array_o *v22; // x22
  int32_t v23; // w2
  int32_t v24; // w3
  __int64 *v25; // x8
  __int64 v26; // x1
  __int64 v27; // x8
  char v28; // w21
  unsigned __int64 v29; // x22
  System_Array_o *v31; // x22
  int32_t v32; // w2
  int32_t v33; // w3
  System_RuntimeFieldHandle_o v34; // 0:w1.4
  System_RuntimeFieldHandle_o v35; // 0:w1.4

  if ( (byte_49FEFB2 & 1) == 0 )
  {
    sub_1B640C8(&BattleActionData_TypeInfo, task);
    sub_1B640C8(&FunctionEntity_TypeInfo, v5);
    sub_1B640C8(&int___TypeInfo, v6);
    sub_1B640C8(
      &Field__PrivateImplementationDetails__2C0F32A9C0CD29445188C9F9109E1308D5A59BD9D3C2479B8251491000F0DB36,
      v7);
    sub_1B640C8(
      &Field__PrivateImplementationDetails__6E462A3A512B9CB4A6185FA60D2DAE01F4222A66EA50EDA56030DA3910331E5F,
      v8);
    sub_1B640C8(&StringLiteral_6351/*"FIELD_PLAYER"*/, v9);
    sub_1B640C8(&StringLiteral_6350/*"FIELD_ENEMY"*/, v10);
    byte_49FEFB2 = 1;
  }
  v11 = sub_1B64314(BattleActionData_TypeInfo, task, method);
  BattleActionData___ctor((BattleActionData_o *)v11, 0LL);
  if ( !v11 )
    goto LABEL_29;
  BattleActionData__setStateField((BattleActionData_o *)v11, 0LL);
  if ( !task )
    goto LABEL_29;
  targetIdlist = task->fields.targetIdlist;
  v16 = sub_1B64314(FunctionEntity_TypeInfo, v13, v14);
  FunctionEntity___ctor((FunctionEntity_o *)v16, 0LL);
  if ( BattleLogicTask__isArts(task, 0LL) )
  {
    BattleActionData__setTypeOrderArts((BattleActionData_o *)v11, 0LL);
    isBuster = sub_1B64170(int___TypeInfo, 2LL);
    if ( isBuster )
    {
      v19 = *(_DWORD *)(isBuster + 24);
      v20 = isBuster;
      if ( !v19 || (*(_DWORD *)(isBuster + 32) = 102, v19 == 1) )
LABEL_30:
        sub_1B6432C(isBuster, v20);
      *(_DWORD *)(isBuster + 36) = 1;
      if ( v16 )
      {
        *(_QWORD *)(v16 + 32) = isBuster;
        v21 = (ServantStatusBattleListViewItem_o *)(v16 + 32);
LABEL_14:
        sub_1B6406C(v21, v20, v17, v18);
        v25 = &StringLiteral_6351/*"FIELD_PLAYER"*/;
LABEL_15:
        v26 = *v25;
        *(_QWORD *)(v11 + 64) = *v25;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v11 + 64), v26, v23, v24);
        goto LABEL_16;
      }
    }
LABEL_29:
    sub_1B64324(isBuster);
  }
  if ( BattleLogicTask__isQuick(task, 0LL) )
  {
    BattleActionData__setTypeOrderQuick((BattleActionData_o *)v11, 0LL);
    v22 = (System_Array_o *)sub_1B64170(int___TypeInfo, 3LL);
    v34.fields.value = Field__PrivateImplementationDetails__6E462A3A512B9CB4A6185FA60D2DAE01F4222A66EA50EDA56030DA3910331E5F;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61282732(v22, v34, 0LL);
    if ( !v16 )
      goto LABEL_29;
    *(_QWORD *)(v16 + 32) = v22;
    v21 = (ServantStatusBattleListViewItem_o *)(v16 + 32);
    LODWORD(v20) = (_DWORD)v22;
    goto LABEL_14;
  }
  isBuster = BattleLogicTask__isBuster(task, 0LL);
  if ( (isBuster & 1) != 0 )
  {
    BattleActionData__setTypeOrderBuster((BattleActionData_o *)v11, 0LL);
    v31 = (System_Array_o *)sub_1B64170(int___TypeInfo, 3LL);
    v35.fields.value = Field__PrivateImplementationDetails__2C0F32A9C0CD29445188C9F9109E1308D5A59BD9D3C2479B8251491000F0DB36;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61282732(v31, v35, 0LL);
    if ( v16 )
    {
      *(_QWORD *)(v16 + 32) = v31;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v16 + 32), (int32_t)v31, v32, v33);
      v25 = &StringLiteral_6350/*"FIELD_ENEMY"*/;
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
  BattleActionData_o *baseActionData; // [xsp+8h] [xbp-18h] BYREF

  baseActionData = 0LL;
  logic = this->fields.logic;
  v5 = BattleLogicNomal__CreateCommandBattle(this, task, &baseActionData, v3);
  if ( !logic )
    sub_1B64324(v5);
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
  int32_t v32; // w2
  int32_t v33; // w3
  __int64 v34; // x1
  __int64 v35; // x2
  DataMasterBase_TMaster__TEntity__PKType__o *v36; // x21
  int32_t v37; // w1
  int32_t v38; // w2
  int32_t v39; // w3
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  System_Collections_Generic_Dictionary_int__object__o *v44; // x23
  BattleData_o *data; // x8
  System_Int32_array *QuestIndividualities; // x0
  int32_t v47; // w2
  int32_t v48; // w3
  __int64 v49; // x1
  __int64 v50; // x2
  System_Collections_Generic_List_int__o *v51; // x26
  __int64 v52; // x1
  int v53; // w8
  __int64 v54; // x28
  unsigned int v55; // w22
  __int64 v56; // x25
  __int64 *v57; // x25
  __int64 v58; // t1
  Il2CppObject *v59; // x29
  struct System_Int32_array *items; // x8
  _QWORD *v61; // x9
  __int64 size; // x10
  int monitor; // w8
  unsigned int v64; // w25
  Il2CppClass **v65; // x27
  Il2CppClass *v66; // x8
  char *v67; // x27
  Il2CppClass *v68; // t1
  struct BattleLogic_o *logic; // x8
  struct BattleData_o *v70; // x8
  int32_t v71; // w9
  struct BattleData_o *v72; // x8
  __int64 v73; // x28
  int v74; // w8
  unsigned int v75; // w22
  __int64 v76; // x23
  __int64 *v77; // x23
  __int64 v78; // t1
  bool v79; // w3
  char v80; // w29
  Il2CppObject *v81; // x29
  struct System_Int32_array *v82; // x8
  _QWORD *v83; // x9
  __int64 v84; // x10
  struct BaseBattleEvent_o *battleEvent; // x20
  struct BattleData_o *v86; // x8
  struct BattlePerformance_o *perf; // x9
  __int64 v88; // x1
  __int64 v89; // x2
  struct BattleData_o *v90; // x8
  System_Collections_Generic_List_object__o *aiNpcDataList; // x20
  System_Action_object__o *v92; // x26
  struct BattleData_o *v93; // x8
  const MethodInfo *v94; // x2
  struct BattleData_o *v95; // x8
  Il2CppObject *v96; // x0
  __int64 v97; // x1
  BattleBuffData_BuffData_array *value; // x24
  int max_length; // w8
  int32_t key; // w25
  unsigned int v101; // w23
  char v102; // w22
  BattleBuffData_BuffData_o *v103; // x28
  __int64 v104; // x2
  BattleSkillInfoData_o *v105; // x26
  __int64 v106; // x0
  __int64 v107; // x1
  struct System_Int32_array *vals; // x8
  __int64 v109; // x0
  __int64 v110; // x1
  struct System_Int32_array *v111; // x8
  BattleData_o *v112; // x0
  BattleServantData_o *ServantData; // x27
  int32_t v114; // w1
  SkillLvEntity_o *v115; // x0
  SkillLvEntity_o *v116; // x29
  BattleData_o *v117; // x0
  _BOOL8 v118; // x0
  BattleLogic_o *v119; // x0
  int32_t v120; // w20
  __int64 v121; // x0
  __int64 v122; // x1
  System_Int32_array *TargetIds; // x28
  bool exists; // w29
  BattleLogicSkill_o *logicskill; // x20
  System_Int32_array *v126; // x0
  __int64 v127; // x1
  System_Collections_ICollection_o *v128; // x0
  BattleLogicTask_array *v129; // x26
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v131; // x1
  BattleLogicTask_o *v132; // x0
  BattleLogic_o *v133; // x0
  BattleData_o *v134; // x0
  int32_t v135; // w23
  Il2CppObject *v136; // x29
  BattleServantData_o *isEndAct; // x0
  __int64 v138; // x1
  __int64 v139; // x2
  BattleServantData_o *selfConcatSvtIndividualities_k__BackingField; // x24
  BattleBuffData_CheckIndividualitiesData_o *v141; // x20
  int v142; // w8
  int i; // w22
  BattleBuffData_BuffData_o *v144; // x26
  __int64 v145; // x2
  BattleSkillInfoData_o *v146; // x25
  __int64 v147; // x0
  __int64 v148; // x1
  struct System_Int32_array *v149; // x8
  __int64 v150; // x0
  __int64 v151; // x1
  struct System_Int32_array *v152; // x8
  BattleData_o *v153; // x0
  BattleServantData_o *v154; // x27
  int32_t v155; // w1
  SkillLvEntity_o *v156; // x0
  SkillLvEntity_o *v157; // x28
  BattleData_o *v158; // x0
  _BOOL8 v159; // x0
  BattleLogic_o *v160; // x0
  int32_t v161; // w20
  __int64 v162; // x0
  __int64 v163; // x1
  System_Int32_array *v164; // x26
  bool v165; // w27
  BattleLogicSkill_o *v166; // x20
  System_Int32_array *v167; // x0
  __int64 v168; // x1
  BattleLogicTask_array *v169; // x1
  BattleLogic_o *v170; // x0
  struct BattleData_o *v171; // x8
  BattleActionData_o *v172; // x1
  const MethodInfo *v174; // [xsp+8h] [xbp-F8h]
  System_Collections_Generic_Dictionary_int__object__o *v175; // [xsp+18h] [xbp-E8h]
  System_Collections_Generic_Dictionary_int__object__o *v176; // [xsp+20h] [xbp-E0h]
  BattleActionData_o *baseActData; // [xsp+30h] [xbp-D0h]
  char v178; // [xsp+3Ch] [xbp-C4h]
  SkillLvMaster_o *v179; // [xsp+40h] [xbp-C0h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v180; // [xsp+48h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v181; // [xsp+70h] [xbp-90h] BYREF
  Il2CppObject *entity; // [xsp+98h] [xbp-68h] BYREF

  if ( (byte_49FEFBB & 1) == 0 )
  {
    sub_1B640C8(&System_Action_AiNpcBattleServantData__TypeInfo, task);
    sub_1B640C8(&BattleActionData_TypeInfo, v4);
    sub_1B640C8(&BattleSkillInfoData_TypeInfo, v5);
    sub_1B640C8(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v6);
    sub_1B640C8(&Method_DataManager_GetMasterData_BuffMaster___, v7);
    sub_1B640C8(&Method_DataManager_GetMasterData_SkillLvMaster___, v8);
    sub_1B640C8(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v9);
    sub_1B640C8(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____GetEnumerator__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData_____ctor__, v13);
    sub_1B640C8(&System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____TypeInfo, v14);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____Dispose__, v15);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____MoveNext__,
      v16);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____get_Current__,
      v17);
    sub_1B640C8(&int___TypeInfo, v18);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_int__BattleBuffData_BuffData____get_Key__, v19);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_int__BattleBuffData_BuffData____get_Value__, v20);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v21);
    sub_1B640C8(&Method_System_Collections_Generic_List_AiNpcBattleServantData__ForEach__, v22);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, v23);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v24);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v25);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v26);
    sub_1B640C8(&Method_BattleLogicNomal___c__DisplayClass36_0__createEndTurnEnemy_b__0__, v27);
    sub_1B640C8(&BattleLogicNomal___c__DisplayClass36_0_TypeInfo, v28);
    sub_1B640C8(&StringLiteral_8680/*"MOTION_ENEMY_TURN_END"*/, v29);
    byte_49FEFBB = 1;
  }
  entity = 0LL;
  memset(&v181, 0, sizeof(v181));
  v30 = sub_1B64314(BattleLogicNomal___c__DisplayClass36_0_TypeInfo, task, method);
  System_Object___ctor((Il2CppObject *)v30, 0LL);
  if ( !v30 )
    goto LABEL_215;
  *(_QWORD *)(v30 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v30 + 32), (int32_t)this, v32, v33);
  baseActData = (BattleActionData_o *)sub_1B64314(BattleActionData_TypeInfo, v34, v35);
  BattleActionData___ctor(baseActData, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_215;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_BuffMaster___);
  *(_BYTE *)(v30 + 16) = 1;
  if ( !this->fields.logic )
    goto LABEL_215;
  v36 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  BattleLogic__resetReducedHpAll(this->fields.logic, 0LL);
  Instance = (__int64)this->fields.logic;
  if ( !Instance )
    goto LABEL_215;
  BattleLogic__updateResultServant((BattleLogic_o *)Instance, 0LL);
  if ( !baseActData )
    goto LABEL_215;
  BattleActionData__setStateField(baseActData, 0LL);
  v37 = StringLiteral_8680/*"MOTION_ENEMY_TURN_END"*/;
  baseActData->fields.motionname = (struct System_String_o *)StringLiteral_8680/*"MOTION_ENEMY_TURN_END"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&baseActData->fields.motionname, v37, v38, v39);
  v176 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B64314(
                                                                   System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____TypeInfo,
                                                                   v40,
                                                                   v41);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v176,
    (const MethodInfo_3122FB0 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData_____ctor__);
  v44 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B64314(
                                                                  System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____TypeInfo,
                                                                  v42,
                                                                  v43);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v44,
    (const MethodInfo_3122FB0 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData_____ctor__);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_215;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_SkillLvMaster___);
  data = this->fields.data;
  v179 = (SkillLvMaster_o *)Instance;
  if ( !data )
    goto LABEL_215;
  QuestIndividualities = BattleData__getQuestIndividualities(data, 0LL);
  *(_QWORD *)(v30 + 24) = QuestIndividualities;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v30 + 24), (int32_t)QuestIndividualities, v47, v48);
  v51 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v49, v50);
  System_Collections_Generic_List_int____ctor(
    v51,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (__int64)this->fields.data;
  if ( !Instance )
    goto LABEL_215;
  v175 = v44;
  Instance = (__int64)BattleData__getFieldPlayerServantList((BattleData_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_215;
  v53 = *(_DWORD *)(Instance + 24);
  v54 = Instance;
  if ( v53 >= 1 )
  {
    v55 = 0;
    while ( 1 )
    {
      if ( v55 >= v53 )
        goto LABEL_220;
      v56 = v54 + 8LL * (int)v55;
      v58 = *(_QWORD *)(v56 + 32);
      v57 = (__int64 *)(v56 + 32);
      Instance = v58;
      if ( !v58 )
        goto LABEL_215;
      if ( *(_BYTE *)(Instance + 532) )
      {
        Instance = (__int64)BattleServantData__turnBuffProgressing(
                              (BattleServantData_o *)Instance,
                              *(_BYTE *)(v30 + 16),
                              *(System_Int32_array **)(v30 + 24),
                              this->fields.logic,
                              0LL,
                              0LL);
        if ( v55 >= *(_DWORD *)(v54 + 24) )
          goto LABEL_220;
        v59 = (Il2CppObject *)Instance;
        Instance = *v57;
        if ( !*v57 )
          goto LABEL_215;
        Instance = BattleServantData__isAlive((BattleServantData_o *)Instance, 0, 0LL);
        if ( (Instance & 1) != 0 )
        {
          if ( v55 >= *(_DWORD *)(v54 + 24) )
            goto LABEL_220;
          Instance = *v57;
          if ( !*v57 )
            goto LABEL_215;
          Instance = BattleServantData__isAliveLogic((BattleServantData_o *)Instance, 0, 0LL);
          if ( (Instance & 1) != 0 )
          {
            if ( !v59 )
              goto LABEL_215;
            if ( v59[1].monitor )
            {
              if ( v55 >= *(_DWORD *)(v54 + 24) )
                goto LABEL_220;
              Instance = (__int64)v176;
              if ( !*v57 || !v176 )
                goto LABEL_215;
              System_Collections_Generic_Dictionary_int__object___Add(
                v176,
                *(_DWORD *)(*v57 + 24),
                v59,
                (const MethodInfo_3123984 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
            }
          }
        }
        if ( v55 >= *(_DWORD *)(v54 + 24) )
          goto LABEL_220;
        if ( !*v57 )
          goto LABEL_215;
        if ( !v51 )
          goto LABEL_215;
        v52 = *(unsigned int *)(*v57 + 24);
        items = v51->fields._items;
        v61 = Method_System_Collections_Generic_List_int__Add__;
        ++v51->fields._version;
        if ( !items )
          goto LABEL_215;
        size = v51->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v51,
            v52,
            *(const MethodInfo_348FEDC **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
        }
        else
        {
          v51->fields._size = size + 1;
          items->m_Items[size + 1] = v52;
        }
        if ( !v59 )
          goto LABEL_215;
        monitor = (int)v59[1].monitor;
        if ( monitor >= 1 )
          break;
      }
LABEL_52:
      v53 = *(_DWORD *)(v54 + 24);
      if ( (int)++v55 >= v53 )
        goto LABEL_53;
    }
    v64 = 0;
    while ( v64 < monitor )
    {
      v65 = &v59->klass + (int)v64;
      v68 = v65[4];
      v67 = (char *)(v65 + 4);
      v66 = v68;
      if ( !v68 || !v36 )
        goto LABEL_215;
      Instance = DataMasterBase_object__object__int___TryGetEntity(
                   v36,
                   &entity,
                   (int32_t)v66->_1.name,
                   (const MethodInfo_30D3EF8 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
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
          v70 = logic->fields.data;
          if ( !v70 )
            goto LABEL_215;
          if ( v64 >= LODWORD(v59[1].monitor) )
            break;
          if ( !*(_QWORD *)v67 )
            goto LABEL_215;
          v71 = *(_DWORD *)(*(_QWORD *)v67 + 28LL);
          if ( v70->fields.endMasterSkillTurnBuffValue <= v71 )
            v70->fields.endMasterSkillTurnBuffValue = v71;
        }
      }
      monitor = (int)v59[1].monitor;
      if ( (int)++v64 >= monitor )
        goto LABEL_52;
    }
LABEL_220:
    sub_1B6432C(Instance, v52);
  }
LABEL_53:
  Instance = (__int64)this->fields.data;
  if ( !Instance )
    goto LABEL_215;
  Instance = (__int64)BattleData__getFieldEnemyServantList((BattleData_o *)Instance, 0, 0LL);
  v72 = this->fields.data;
  if ( !v72 )
    goto LABEL_215;
  v73 = Instance;
  if ( v72->fields.leaderDown && v72->fields.endbattleFlg )
  {
    v178 = 0;
  }
  else
  {
    if ( !Instance )
      goto LABEL_215;
    v74 = *(_DWORD *)(Instance + 24);
    if ( v74 >= 1 )
    {
      v75 = 0;
      v178 = 0;
      while ( v75 < v74 )
      {
        v76 = v73 + 8LL * (int)v75;
        v78 = *(_QWORD *)(v76 + 32);
        v77 = (__int64 *)(v76 + 32);
        Instance = v78;
        if ( !v78 )
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
            v79 = 1;
          }
          else
          {
            Instance = (__int64)this->fields.data;
            if ( !Instance )
              goto LABEL_215;
            Instance = BattleData__checkDefeatPoint((BattleData_o *)Instance, 0, 0LL);
            v79 = Instance & 1;
          }
          if ( v75 >= *(_DWORD *)(v73 + 24) )
            goto LABEL_220;
          Instance = *v77;
          if ( !*v77 )
            goto LABEL_215;
          Instance = BattleServantData__turnProgressing(
                       (BattleServantData_o *)Instance,
                       *(System_Int32_array **)(v30 + 24),
                       this->fields.logic,
                       v79,
                       baseActData,
                       0LL);
          if ( v75 >= *(_DWORD *)(v73 + 24) )
            goto LABEL_220;
          v80 = Instance;
          Instance = *v77;
          if ( !*v77 )
            goto LABEL_215;
          Instance = BattleServantData__isAliveLogic((BattleServantData_o *)Instance, 0, 0LL);
          if ( (Instance & 1) != 0 )
          {
            if ( v75 >= *(_DWORD *)(v73 + 24) )
              goto LABEL_220;
            Instance = *v77;
            if ( !*v77 )
              goto LABEL_215;
            Instance = (__int64)BattleServantData__getTTurnEndBufflist((BattleServantData_o *)Instance, 0LL);
            if ( !Instance )
              goto LABEL_215;
            if ( *(_QWORD *)(Instance + 24) )
            {
              if ( v75 >= *(_DWORD *)(v73 + 24) )
                goto LABEL_220;
              if ( !*v77 || !v175 )
                goto LABEL_215;
              System_Collections_Generic_Dictionary_int__object___Add(
                v175,
                *(_DWORD *)(*v77 + 24),
                (Il2CppObject *)Instance,
                (const MethodInfo_3123984 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
            }
          }
          if ( v75 >= *(_DWORD *)(v73 + 24) )
            goto LABEL_220;
          if ( !*v77 )
            goto LABEL_215;
          Instance = *(_QWORD *)(*v77 + 784);
          if ( !Instance )
            goto LABEL_215;
          v178 |= v80;
          Instance = (__int64)BattleBuffData__usedProgressing((BattleBuffData_o *)Instance, 0LL);
        }
        if ( v75 >= *(_DWORD *)(v73 + 24) )
          goto LABEL_220;
        Instance = *v77;
        if ( !*v77 )
          goto LABEL_215;
        if ( *(_BYTE *)(Instance + 532) )
        {
          Instance = (__int64)BattleServantData__turnBuffProgressing(
                                (BattleServantData_o *)Instance,
                                *(_BYTE *)(v30 + 16),
                                *(System_Int32_array **)(v30 + 24),
                                this->fields.logic,
                                0LL,
                                0LL);
          if ( v75 >= *(_DWORD *)(v73 + 24) )
            goto LABEL_220;
          v81 = (Il2CppObject *)Instance;
          Instance = *v77;
          if ( !*v77 )
            goto LABEL_215;
          Instance = BattleServantData__isAlive((BattleServantData_o *)Instance, 0, 0LL);
          if ( (Instance & 1) != 0 )
          {
            if ( v75 >= *(_DWORD *)(v73 + 24) )
              goto LABEL_220;
            Instance = *v77;
            if ( !*v77 )
              goto LABEL_215;
            Instance = BattleServantData__isAliveLogic((BattleServantData_o *)Instance, 0, 0LL);
            if ( (Instance & 1) != 0 )
            {
              if ( !v81 )
                goto LABEL_215;
              if ( v81[1].monitor )
              {
                if ( v75 >= *(_DWORD *)(v73 + 24) )
                  goto LABEL_220;
                Instance = (__int64)v176;
                if ( !*v77 || !v176 )
                  goto LABEL_215;
                System_Collections_Generic_Dictionary_int__object___Add(
                  v176,
                  *(_DWORD *)(*v77 + 24),
                  v81,
                  (const MethodInfo_3123984 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
              }
            }
          }
          if ( v75 >= *(_DWORD *)(v73 + 24) )
            goto LABEL_220;
          if ( !*v77 )
            goto LABEL_215;
          if ( !v51 )
            goto LABEL_215;
          v52 = *(unsigned int *)(*v77 + 24);
          v82 = v51->fields._items;
          v83 = Method_System_Collections_Generic_List_int__Add__;
          ++v51->fields._version;
          if ( !v82 )
            goto LABEL_215;
          v84 = v51->fields._size;
          if ( (unsigned int)v84 >= v82->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v51,
              v52,
              *(const MethodInfo_348FEDC **)(*(_QWORD *)(v83[4] + 192LL) + 112LL));
          }
          else
          {
            v51->fields._size = v84 + 1;
            v82->m_Items[v84 + 1] = v52;
          }
        }
        v74 = *(_DWORD *)(v73 + 24);
        if ( (int)++v75 >= v74 )
          goto LABEL_111;
      }
      goto LABEL_220;
    }
    v178 = 0;
LABEL_111:
    v72 = this->fields.data;
    if ( !v72 )
      goto LABEL_215;
  }
  if ( !v51 )
    goto LABEL_215;
  battleEvent = v72->fields.battleEvent;
  Instance = (__int64)System_Collections_Generic_List_int___ToArray(
                        v51,
                        (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !battleEvent )
    goto LABEL_215;
  Instance = ((__int64 (__fastcall *)(struct BaseBattleEvent_o *, __int64, _QWORD, Il2CppMethodPointer))battleEvent->klass->vtable._34_ProgressNoExecJoinServantsBuff.method)(
               battleEvent,
               Instance,
               *(unsigned __int8 *)(v30 + 16),
               battleEvent->klass->vtable._35_IsPossibleAddBuffParam.methodPtr);
  v86 = this->fields.data;
  if ( !v86 )
    goto LABEL_215;
  perf = v86->fields.perf;
  if ( !perf )
    goto LABEL_215;
  Instance = (__int64)v86->fields.defenceTargetData;
  if ( !Instance )
    goto LABEL_215;
  BattleDefenceTargetData__BuffTurnProgress((BattleDefenceTargetData_o *)Instance, perf->fields.defenceTarget, 0LL);
  v90 = this->fields.data;
  if ( !v90 )
    goto LABEL_215;
  aiNpcDataList = (System_Collections_Generic_List_object__o *)v90->fields.aiNpcDataList;
  v92 = (System_Action_object__o *)sub_1B64314(System_Action_AiNpcBattleServantData__TypeInfo, v88, v89);
  System_Action_object____ctor(
    v92,
    (Il2CppObject *)v30,
    Method_BattleLogicNomal___c__DisplayClass36_0__createEndTurnEnemy_b__0__,
    0LL);
  if ( !aiNpcDataList )
    goto LABEL_215;
  System_Collections_Generic_List_object___ForEach(
    aiNpcDataList,
    (System_Action_T__o *)v92,
    (const MethodInfo_34AE1B4 *)Method_System_Collections_Generic_List_AiNpcBattleServantData__ForEach__);
  v93 = this->fields.data;
  if ( !v93 )
    goto LABEL_215;
  Instance = (__int64)v93->fields._FieldEnvData_k__BackingField;
  if ( !Instance )
    goto LABEL_215;
  BattleFieldEnvironmentData__TurnProgressing(
    (BattleFieldEnvironmentData_o *)Instance,
    this->fields.logic,
    *(_BYTE *)(v30 + 16),
    0LL);
  BattleLogicNomal__UpdateEndTurnBuff(this, *(System_Int32_array **)(v30 + 24), v94);
  v95 = this->fields.data;
  if ( !v95 )
    goto LABEL_215;
  v95->fields.currentTurn = 0;
  if ( !v175 )
    goto LABEL_215;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v180,
    v175,
    (const MethodInfo_3123DBC *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____GetEnumerator__);
  v181 = v180;
  while ( 1 )
  {
    v96 = (Il2CppObject *)System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
                            &v181,
                            (const MethodInfo_3269C74 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____MoveNext__);
    if ( ((unsigned __int8)v96 & 1) == 0 )
      break;
    value = (BattleBuffData_BuffData_array *)v181.fields._current.fields.value;
    if ( !v181.fields._current.fields.value )
      sub_1B64324(v96);
    max_length = (int)v181.fields._current.fields.value[1].monitor;
    if ( max_length >= 1 )
    {
      key = (int32_t)v181.fields._current.fields.key;
      v101 = 0;
      v102 = 1;
LABEL_128:
      if ( v101 >= max_length )
        sub_1B6432C(v96, v97);
      v103 = value->m_Items[v101];
      if ( !v103 )
        sub_1B64324(v96);
      if ( v103->fields._isRemove )
        goto LABEL_164;
      if ( !v36 )
        sub_1B64324(v96);
      v96 = DataMasterBase_object__object__int___GetEntity(
              v36,
              v103->fields.buffId,
              (const MethodInfo_30D3EA4 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
      if ( !v96 )
        goto LABEL_164;
      v105 = (BattleSkillInfoData_o *)sub_1B64314(BattleSkillInfoData_TypeInfo, v97, v104);
      BattleSkillInfoData___ctor(v105, 0LL);
      if ( !v105 )
        sub_1B64324(v106);
      v105->fields.svtUniqueId = key;
      vals = v103->fields.vals;
      if ( !vals )
        sub_1B64324(v106);
      if ( !vals->max_length )
        sub_1B6432C(v106, v107);
      v109 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))v105->klass->vtable._4_set_skillId.method)(
               v105,
               (unsigned int)vals->m_Items[1],
               v105->klass->vtable._5_get_skillId.methodPtr);
      v111 = v103->fields.vals;
      if ( !v111 )
        sub_1B64324(v109);
      if ( v111->max_length <= 1 )
        sub_1B6432C(v109, v110);
      v105->fields.skilllv = v111->m_Items[2];
      v112 = this->fields.data;
      if ( !v112 )
        sub_1B64324(0LL);
      ServantData = BattleData__getServantData(v112, v105->fields.svtUniqueId, 0LL);
      v114 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))v105->klass->vtable._5_get_skillId.method)(
               v105,
               v105->klass->vtable._6_get_IndividualityArray.methodPtr);
      if ( !v179 )
        sub_1B64324(0LL);
      v115 = SkillLvMaster__GetEntity(v179, v114, v105->fields.skilllv, 0LL);
      if ( !ServantData )
        sub_1B64324(v115);
      v116 = v115;
      v117 = this->fields.data;
      if ( !v117 )
        sub_1B64324(0LL);
      v118 = BattleData__checkAliveOther(v117, ServantData->fields.uniqueId, 0LL);
      if ( !v118 )
      {
        if ( !v116 )
          sub_1B64324(v118);
        v119 = this->fields.logic;
        if ( !v119 )
          sub_1B64324(0LL);
        v96 = (Il2CppObject *)BattleLogic__checkPtTargetFunction(v119, v116->fields.funcId, 0LL);
        if ( ((unsigned __int8)v96 & 1) == 0 )
          goto LABEL_164;
      }
      v120 = BattleServantData__GetRevengeIdCheckOpponentOnly(ServantData, v103, 0LL);
      if ( (v120 & 0x80000000) != 0 )
      {
        TargetIds = Target__getTargetIds(this->fields.data, v105->fields.svtUniqueId, -1, key, 13, 0LL, 0LL);
        exists = BattleSkillInfoData__ExistsNoTargetNoActionType(v105, 0LL);
      }
      else
      {
        v121 = sub_1B64170(int___TypeInfo, 1LL);
        TargetIds = (System_Int32_array *)v121;
        if ( !v121 )
          sub_1B64324(0LL);
        if ( !*(_DWORD *)(v121 + 24) )
          sub_1B6432C(v121, v122);
        exists = 0;
        *(_DWORD *)(v121 + 32) = v120;
      }
      logicskill = this->fields.logicskill;
      v126 = (System_Int32_array *)sub_1B64170(int___TypeInfo, 1LL);
      if ( !v126 )
        sub_1B64324(0LL);
      if ( !v126->max_length )
        sub_1B6432C(v126, v127);
      v126->m_Items[1] = key;
      if ( !logicskill )
        sub_1B64324(v126);
      v128 = (System_Collections_ICollection_o *)BattleLogicSkill__taskSkill(
                                                   logicskill,
                                                   v105,
                                                   v126,
                                                   TargetIds,
                                                   1,
                                                   exists,
                                                   0,
                                                   0,
                                                   0,
                                                   v174);
      v129 = (BattleLogicTask_array *)v128;
      if ( (v102 & 1) != 0 )
      {
        IsNullOrEmpty = BasicHelper__IsNullOrEmpty(v128, 0LL);
        if ( IsNullOrEmpty )
        {
          v102 = 1;
          goto LABEL_162;
        }
        if ( !v129 )
          sub_1B64324(IsNullOrEmpty);
        if ( !v129->max_length )
          sub_1B6432C(IsNullOrEmpty, v131);
        v132 = v129->m_Items[0];
        if ( !v132 )
          sub_1B64324(0LL);
        BattleLogicTask__SetDisplayTriggerIntervalBuff(v132, ServantData, value, 0LL);
      }
      v102 = 0;
LABEL_162:
      v133 = this->fields.logic;
      if ( !v133 )
        sub_1B64324(0LL);
      BattleLogic__addBattleLogicTask(v133, v129, 0LL);
LABEL_164:
      max_length = value->max_length;
      if ( (int)++v101 >= max_length )
        continue;
      goto LABEL_128;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v181,
    (const MethodInfo_3269D98 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____Dispose__);
  Instance = (__int64)v176;
  if ( !v176 )
    goto LABEL_215;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v180,
    v176,
    (const MethodInfo_3123DBC *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____GetEnumerator__);
  v181 = v180;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v181,
            (const MethodInfo_3269C74 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____MoveNext__) )
  {
    v134 = this->fields.data;
    if ( !v134 )
      sub_1B64324(0LL);
    v135 = (int32_t)v181.fields._current.fields.key;
    v136 = v181.fields._current.fields.value;
    isEndAct = BattleData__getServantData(v134, (int32_t)v181.fields._current.fields.key, 0LL);
    selfConcatSvtIndividualities_k__BackingField = isEndAct;
    if ( isEndAct )
    {
      v141 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B64314(
                                                            BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                            v138,
                                                            v139);
      BattleBuffData_CheckIndividualitiesData___ctor(
        v141,
        selfConcatSvtIndividualities_k__BackingField,
        0LL,
        0LL,
        0LL,
        0LL,
        0LL);
      if ( !v141 )
        sub_1B64324(isEndAct);
      selfConcatSvtIndividualities_k__BackingField = (BattleServantData_o *)v141->fields._selfConcatSvtIndividualities_k__BackingField;
    }
    if ( !v136 )
      sub_1B64324(isEndAct);
    v142 = (int)v136[1].monitor;
    if ( v142 >= 1 )
    {
      for ( i = 0; i < v142; ++i )
      {
        if ( i >= (unsigned int)v142 )
          sub_1B6432C(isEndAct, v138);
        v144 = (BattleBuffData_BuffData_o *)*((_QWORD *)&v136[2].klass + i);
        if ( !v144 )
          sub_1B64324(isEndAct);
        if ( !v144->fields._isRemove )
        {
          if ( !v36 )
            sub_1B64324(isEndAct);
          isEndAct = (BattleServantData_o *)DataMasterBase_object__object__int___GetEntity(
                                              v36,
                                              v144->fields.buffId,
                                              (const MethodInfo_30D3EA4 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
          if ( isEndAct )
          {
            isEndAct = (BattleServantData_o *)BuffEntity__isEndAct(
                                                (BuffEntity_o *)isEndAct,
                                                (System_Int32_array *)selfConcatSvtIndividualities_k__BackingField,
                                                0LL);
            if ( ((unsigned __int8)isEndAct & 1) != 0 )
            {
              isEndAct = (BattleServantData_o *)BattleBuffData_BuffData__checkAct(v144, 1, 0LL);
              if ( ((unsigned __int8)isEndAct & 1) != 0 )
              {
                v146 = (BattleSkillInfoData_o *)sub_1B64314(BattleSkillInfoData_TypeInfo, v138, v145);
                BattleSkillInfoData___ctor(v146, 0LL);
                if ( !v146 )
                  sub_1B64324(v147);
                v146->fields.svtUniqueId = v135;
                v149 = v144->fields.vals;
                if ( !v149 )
                  sub_1B64324(v147);
                if ( !v149->max_length )
                  sub_1B6432C(v147, v148);
                v150 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))v146->klass->vtable._4_set_skillId.method)(
                         v146,
                         (unsigned int)v149->m_Items[1],
                         v146->klass->vtable._5_get_skillId.methodPtr);
                v152 = v144->fields.vals;
                if ( !v152 )
                  sub_1B64324(v150);
                if ( v152->max_length <= 1 )
                  sub_1B6432C(v150, v151);
                v146->fields.skilllv = v152->m_Items[2];
                v153 = this->fields.data;
                if ( !v153 )
                  sub_1B64324(0LL);
                v154 = BattleData__getServantData(v153, v146->fields.svtUniqueId, 0LL);
                v155 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))v146->klass->vtable._5_get_skillId.method)(
                         v146,
                         v146->klass->vtable._6_get_IndividualityArray.methodPtr);
                if ( !v179 )
                  sub_1B64324(0LL);
                v156 = SkillLvMaster__GetEntity(v179, v155, v146->fields.skilllv, 0LL);
                if ( !v154 )
                  sub_1B64324(v156);
                v157 = v156;
                v158 = this->fields.data;
                if ( !v158 )
                  sub_1B64324(0LL);
                v159 = BattleData__checkAliveOther(v158, v154->fields.uniqueId, 0LL);
                if ( v159 )
                  goto LABEL_198;
                if ( !v157 )
                  sub_1B64324(v159);
                v160 = this->fields.logic;
                if ( !v160 )
                  sub_1B64324(0LL);
                isEndAct = (BattleServantData_o *)BattleLogic__checkPtTargetFunction(v160, v157->fields.funcId, 0LL);
                if ( ((unsigned __int8)isEndAct & 1) != 0 )
                {
LABEL_198:
                  v161 = BattleServantData__GetRevengeIdCheckOpponentOnly(v154, v144, 0LL);
                  if ( (v161 & 0x80000000) != 0 )
                  {
                    v164 = Target__getTargetIds(this->fields.data, v146->fields.svtUniqueId, -1, v135, 13, 0LL, 0LL);
                    v165 = BattleSkillInfoData__ExistsNoTargetNoActionType(v146, 0LL);
                  }
                  else
                  {
                    v162 = sub_1B64170(int___TypeInfo, 1LL);
                    v164 = (System_Int32_array *)v162;
                    if ( !v162 )
                      sub_1B64324(0LL);
                    if ( !*(_DWORD *)(v162 + 24) )
                      sub_1B6432C(v162, v163);
                    v165 = 0;
                    *(_DWORD *)(v162 + 32) = v161;
                  }
                  v166 = this->fields.logicskill;
                  v167 = (System_Int32_array *)sub_1B64170(int___TypeInfo, 1LL);
                  if ( !v167 )
                    sub_1B64324(0LL);
                  if ( !v167->max_length )
                    sub_1B6432C(v167, v168);
                  v167->m_Items[1] = v135;
                  if ( !v166 )
                    sub_1B64324(v167);
                  v169 = BattleLogicSkill__taskSkill(v166, v146, v167, v164, 1, v165, 0, 0, 0, v174);
                  v170 = this->fields.logic;
                  if ( !v170 )
                    sub_1B64324(0LL);
                  BattleLogic__addBattleLogicTask(v170, v169, 0LL);
                }
              }
            }
          }
        }
        v142 = (int)v136[1].monitor;
      }
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v181,
    (const MethodInfo_3269D98 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____Dispose__);
  v171 = this->fields.data;
  if ( !v171
    || (Instance = (__int64)v171->fields._FieldEnvData_k__BackingField) == 0
    || (BattleFieldEnvironmentData__RemoveBgmThenPlayCurrentBgm((BattleFieldEnvironmentData_o *)Instance, 0LL),
        (Instance = (__int64)this->fields.logic) == 0) )
  {
LABEL_215:
    sub_1B64324(Instance);
  }
  if ( (v178 & 1) != 0 )
    v172 = baseActData;
  else
    v172 = 0LL;
  return BattleLogic__PrevReturnCreateActionData((BattleLogic_o *)Instance, v172, baseActData, 0LL);
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
  int32_t v32; // w2
  int32_t v33; // w3
  const MethodInfo *v34; // x1
  __int64 v35; // x1
  __int64 v36; // x2
  DataMasterBase_TMaster__TEntity__PKType__o *v37; // x21
  int32_t v38; // w1
  int32_t v39; // w2
  int32_t v40; // w3
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  BattleData_o *data; // x8
  System_Int32_array *QuestIndividualities; // x0
  int32_t v47; // w2
  int32_t v48; // w3
  __int64 v49; // x1
  __int64 v50; // x2
  System_Collections_Generic_List_int__o *v51; // x26
  __int64 v52; // x1
  int v53; // w8
  __int64 v54; // x28
  unsigned int v55; // w20
  __int64 v56; // x22
  __int64 *v57; // x22
  __int64 v58; // t1
  bool v59; // w3
  char v60; // w29
  Il2CppObject *v61; // x2
  Il2CppObject *v62; // x29
  struct System_Int32_array *items; // x8
  _QWORD *v64; // x9
  __int64 size; // x10
  int monitor; // w8
  unsigned int v67; // w22
  Il2CppClass **v68; // x23
  Il2CppClass *v69; // x8
  char *v70; // x23
  Il2CppClass *v71; // t1
  struct BattleLogic_o *logic; // x8
  struct BattleData_o *v73; // x8
  int32_t v74; // w9
  struct BattleData_o *v75; // x8
  __int64 v76; // x27
  int v77; // w8
  unsigned int v78; // w20
  __int64 v79; // x22
  __int64 *v80; // x22
  __int64 v81; // t1
  Il2CppObject *v82; // x28
  struct System_Int32_array *v83; // x8
  _QWORD *v84; // x9
  __int64 v85; // x10
  struct BaseBattleEvent_o *battleEvent; // x23
  struct BattleData_o *v87; // x8
  struct BattlePerformance_o *perf; // x9
  __int64 v89; // x1
  __int64 v90; // x2
  struct BattleData_o *v91; // x8
  System_Collections_Generic_List_object__o *aiNpcDataList; // x23
  System_Action_object__o *v93; // x26
  struct BattleData_o *v94; // x8
  const MethodInfo *v95; // x2
  struct BattleData_o *v96; // x8
  Il2CppObject *v97; // x0
  __int64 v98; // x1
  BattleBuffData_BuffData_array *value; // x24
  int max_length; // w8
  int32_t key; // w25
  unsigned int v102; // w20
  char v103; // w22
  BattleBuffData_BuffData_o *v104; // x28
  __int64 v105; // x2
  BattleSkillInfoData_o *v106; // x26
  __int64 v107; // x0
  __int64 v108; // x1
  struct System_Int32_array *vals; // x8
  __int64 v110; // x0
  __int64 v111; // x1
  struct System_Int32_array *v112; // x8
  BattleData_o *v113; // x0
  BattleServantData_o *ServantData; // x27
  int32_t v115; // w1
  SkillLvEntity_o *v116; // x0
  SkillLvEntity_o *v117; // x29
  BattleData_o *v118; // x0
  _BOOL8 v119; // x0
  BattleLogic_o *v120; // x0
  int32_t v121; // w23
  __int64 v122; // x0
  __int64 v123; // x1
  System_Int32_array *TargetIds; // x28
  bool exists; // w29
  BattleLogicSkill_o *logicskill; // x23
  System_Int32_array *v127; // x0
  __int64 v128; // x1
  System_Collections_ICollection_o *v129; // x0
  BattleLogicTask_array *v130; // x26
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v132; // x1
  BattleLogicTask_o *v133; // x0
  BattleLogic_o *v134; // x0
  BattleData_o *v135; // x0
  int32_t v136; // w23
  Il2CppObject *v137; // x29
  BattleServantData_o *isEndAct; // x0
  __int64 v139; // x1
  __int64 v140; // x2
  BattleServantData_o *v141; // x25
  BattleBuffData_CheckIndividualitiesData_o *v142; // x24
  System_Int32_array *selfConcatSvtIndividualities_k__BackingField; // x24
  int v144; // w8
  int i; // w20
  BattleBuffData_BuffData_o *v146; // x26
  __int64 v147; // x2
  BattleSkillInfoData_o *v148; // x25
  __int64 v149; // x0
  __int64 v150; // x1
  struct System_Int32_array *v151; // x8
  __int64 v152; // x0
  __int64 v153; // x1
  struct System_Int32_array *v154; // x8
  BattleData_o *v155; // x0
  BattleServantData_o *v156; // x27
  int32_t v157; // w1
  SkillLvEntity_o *v158; // x0
  SkillLvEntity_o *v159; // x28
  BattleData_o *v160; // x0
  _BOOL8 v161; // x0
  BattleLogic_o *v162; // x0
  int32_t v163; // w28
  __int64 v164; // x0
  __int64 v165; // x1
  System_Int32_array *v166; // x26
  bool v167; // w27
  BattleLogicSkill_o *v168; // x28
  System_Int32_array *v169; // x0
  __int64 v170; // x1
  BattleLogicTask_array *v171; // x1
  BattleLogic_o *v172; // x0
  struct BattleData_o *v173; // x8
  BattleActionData_o *v174; // x1
  const MethodInfo *v176; // [xsp+8h] [xbp-E8h]
  System_Collections_Generic_Dictionary_int__object__o *v177; // [xsp+10h] [xbp-E0h]
  System_Collections_Generic_Dictionary_int__object__o *v178; // [xsp+18h] [xbp-D8h]
  BattleActionData_o *actiondata; // [xsp+20h] [xbp-D0h]
  char v180; // [xsp+2Ch] [xbp-C4h]
  SkillLvMaster_o *v181; // [xsp+30h] [xbp-C0h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v182; // [xsp+38h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v183; // [xsp+60h] [xbp-90h] BYREF
  Il2CppObject *entity; // [xsp+88h] [xbp-68h] BYREF

  if ( (byte_49FEFB8 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_AiNpcBattleServantData__TypeInfo, task);
    sub_1B640C8(&BattleActionData_TypeInfo, v4);
    sub_1B640C8(&BattleSkillInfoData_TypeInfo, v5);
    sub_1B640C8(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v6);
    sub_1B640C8(&Method_DataManager_GetMasterData_BuffMaster___, v7);
    sub_1B640C8(&Method_DataManager_GetMasterData_SkillLvMaster___, v8);
    sub_1B640C8(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v9);
    sub_1B640C8(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____GetEnumerator__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData_____ctor__, v13);
    sub_1B640C8(&System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____TypeInfo, v14);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____Dispose__, v15);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____MoveNext__,
      v16);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____get_Current__,
      v17);
    sub_1B640C8(&int___TypeInfo, v18);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_int__BattleBuffData_BuffData____get_Key__, v19);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_int__BattleBuffData_BuffData____get_Value__, v20);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v21);
    sub_1B640C8(&Method_System_Collections_Generic_List_AiNpcBattleServantData__ForEach__, v22);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, v23);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v24);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v25);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v26);
    sub_1B640C8(&Method_BattleLogicNomal___c__DisplayClass33_0__createEndTurnPlayer_b__0__, v27);
    sub_1B640C8(&BattleLogicNomal___c__DisplayClass33_0_TypeInfo, v28);
    sub_1B640C8(&StringLiteral_8684/*"MOTION_PLAYER_TURN_END"*/, v29);
    byte_49FEFB8 = 1;
  }
  entity = 0LL;
  memset(&v183, 0, sizeof(v183));
  v30 = sub_1B64314(BattleLogicNomal___c__DisplayClass33_0_TypeInfo, task, method);
  System_Object___ctor((Il2CppObject *)v30, 0LL);
  if ( !v30 )
    goto LABEL_215;
  *(_QWORD *)(v30 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v30 + 32), (int32_t)this, v32, v33);
  BattleLogicNomal__SetNextTargetId(this, v34);
  actiondata = (BattleActionData_o *)sub_1B64314(BattleActionData_TypeInfo, v35, v36);
  BattleActionData___ctor(actiondata, 0LL);
  *(_BYTE *)(v30 + 16) = 0;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_215;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_BuffMaster___);
  if ( !this->fields.logic )
    goto LABEL_215;
  v37 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  BattleLogic__resetReducedHpAll(this->fields.logic, 0LL);
  Instance = (__int64)this->fields.logic;
  if ( !Instance )
    goto LABEL_215;
  BattleLogic__updateResultServant((BattleLogic_o *)Instance, 0LL);
  if ( !actiondata )
    goto LABEL_215;
  BattleActionData__setStateField(actiondata, 0LL);
  v38 = StringLiteral_8684/*"MOTION_PLAYER_TURN_END"*/;
  actiondata->fields.motionname = (struct System_String_o *)StringLiteral_8684/*"MOTION_PLAYER_TURN_END"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&actiondata->fields.motionname, v38, v39, v40);
  v178 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B64314(
                                                                   System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____TypeInfo,
                                                                   v41,
                                                                   v42);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v178,
    (const MethodInfo_3122FB0 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData_____ctor__);
  v177 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B64314(
                                                                   System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____TypeInfo,
                                                                   v43,
                                                                   v44);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v177,
    (const MethodInfo_3122FB0 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData_____ctor__);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_215;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_SkillLvMaster___);
  data = this->fields.data;
  v181 = (SkillLvMaster_o *)Instance;
  if ( !data )
    goto LABEL_215;
  QuestIndividualities = BattleData__getQuestIndividualities(data, 0LL);
  *(_QWORD *)(v30 + 24) = QuestIndividualities;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v30 + 24), (int32_t)QuestIndividualities, v47, v48);
  v51 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v49, v50);
  System_Collections_Generic_List_int____ctor(
    v51,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (__int64)this->fields.data;
  if ( !Instance )
    goto LABEL_215;
  Instance = (__int64)BattleData__getFieldPlayerServantList((BattleData_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_215;
  v53 = *(_DWORD *)(Instance + 24);
  v54 = Instance;
  if ( v53 >= 1 )
  {
    v180 = 0;
    v55 = 0;
    while ( 1 )
    {
      if ( v55 >= v53 )
        goto LABEL_220;
      v56 = v54 + 8LL * (int)v55;
      v58 = *(_QWORD *)(v56 + 32);
      v57 = (__int64 *)(v56 + 32);
      Instance = v58;
      if ( !v58 )
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
          v59 = 1;
        }
        else
        {
          Instance = (__int64)this->fields.data;
          if ( !Instance )
            goto LABEL_215;
          Instance = BattleData__checkDefeatPoint((BattleData_o *)Instance, 1, 0LL);
          v59 = Instance & 1;
        }
        if ( v55 >= *(_DWORD *)(v54 + 24) )
          goto LABEL_220;
        Instance = *v57;
        if ( !*v57 )
          goto LABEL_215;
        Instance = BattleServantData__turnProgressing(
                     (BattleServantData_o *)Instance,
                     *(System_Int32_array **)(v30 + 24),
                     this->fields.logic,
                     v59,
                     actiondata,
                     0LL);
        if ( v55 >= *(_DWORD *)(v54 + 24) )
          goto LABEL_220;
        v60 = Instance;
        Instance = *v57;
        if ( !*v57 )
          goto LABEL_215;
        Instance = BattleServantData__isAliveLogic((BattleServantData_o *)Instance, 0, 0LL);
        if ( (Instance & 1) != 0 )
        {
          if ( v55 >= *(_DWORD *)(v54 + 24) )
            goto LABEL_220;
          Instance = *v57;
          if ( !*v57 )
            goto LABEL_215;
          Instance = (__int64)BattleServantData__getTTurnEndBufflist((BattleServantData_o *)Instance, 0LL);
          if ( !Instance )
            goto LABEL_215;
          v61 = (Il2CppObject *)Instance;
          if ( *(_QWORD *)(Instance + 24) )
          {
            if ( v55 >= *(_DWORD *)(v54 + 24) )
              goto LABEL_220;
            Instance = (__int64)v177;
            if ( !*v57 || !v177 )
              goto LABEL_215;
            System_Collections_Generic_Dictionary_int__object___Add(
              v177,
              *(_DWORD *)(*v57 + 24),
              v61,
              (const MethodInfo_3123984 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
          }
        }
        if ( v55 >= *(_DWORD *)(v54 + 24) )
          goto LABEL_220;
        if ( !*v57 )
          goto LABEL_215;
        Instance = *(_QWORD *)(*v57 + 784);
        if ( !Instance )
          goto LABEL_215;
        v180 |= v60;
        Instance = (__int64)BattleBuffData__usedProgressing((BattleBuffData_o *)Instance, 0LL);
      }
      if ( v55 >= *(_DWORD *)(v54 + 24) )
        goto LABEL_220;
      Instance = *v57;
      if ( !*v57 )
        goto LABEL_215;
      if ( *(_BYTE *)(Instance + 532) )
      {
        Instance = (__int64)BattleServantData__turnBuffProgressing(
                              (BattleServantData_o *)Instance,
                              *(_BYTE *)(v30 + 16),
                              *(System_Int32_array **)(v30 + 24),
                              this->fields.logic,
                              0LL,
                              0LL);
        if ( v55 >= *(_DWORD *)(v54 + 24) )
          goto LABEL_220;
        v62 = (Il2CppObject *)Instance;
        Instance = *v57;
        if ( !*v57 )
          goto LABEL_215;
        Instance = BattleServantData__isAlive((BattleServantData_o *)Instance, 0, 0LL);
        if ( (Instance & 1) != 0 )
        {
          if ( v55 >= *(_DWORD *)(v54 + 24) )
            goto LABEL_220;
          Instance = *v57;
          if ( !*v57 )
            goto LABEL_215;
          Instance = BattleServantData__isAliveLogic((BattleServantData_o *)Instance, 0, 0LL);
          if ( (Instance & 1) != 0 )
          {
            if ( !v62 )
              goto LABEL_215;
            if ( v62[1].monitor )
            {
              if ( v55 >= *(_DWORD *)(v54 + 24) )
                goto LABEL_220;
              Instance = (__int64)v178;
              if ( !*v57 || !v178 )
                goto LABEL_215;
              System_Collections_Generic_Dictionary_int__object___Add(
                v178,
                *(_DWORD *)(*v57 + 24),
                v62,
                (const MethodInfo_3123984 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
            }
          }
        }
        if ( v55 >= *(_DWORD *)(v54 + 24) )
          goto LABEL_220;
        if ( !*v57 )
          goto LABEL_215;
        if ( !v51 )
          goto LABEL_215;
        v52 = *(unsigned int *)(*v57 + 24);
        items = v51->fields._items;
        v64 = Method_System_Collections_Generic_List_int__Add__;
        ++v51->fields._version;
        if ( !items )
          goto LABEL_215;
        size = v51->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v51,
            v52,
            *(const MethodInfo_348FEDC **)(*(_QWORD *)(v64[4] + 192LL) + 112LL));
        }
        else
        {
          v51->fields._size = size + 1;
          items->m_Items[size + 1] = v52;
        }
        if ( !v62 )
          goto LABEL_215;
        monitor = (int)v62[1].monitor;
        if ( monitor >= 1 )
          break;
      }
LABEL_77:
      v53 = *(_DWORD *)(v54 + 24);
      if ( (int)++v55 >= v53 )
        goto LABEL_80;
    }
    v67 = 0;
    while ( v67 < monitor )
    {
      v68 = &v62->klass + (int)v67;
      v71 = v68[4];
      v70 = (char *)(v68 + 4);
      v69 = v71;
      if ( !v71 || !v37 )
        goto LABEL_215;
      Instance = DataMasterBase_object__object__int___TryGetEntity(
                   v37,
                   &entity,
                   (int32_t)v69->_1.name,
                   (const MethodInfo_30D3EF8 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
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
          v73 = logic->fields.data;
          if ( !v73 )
            goto LABEL_215;
          if ( v67 >= LODWORD(v62[1].monitor) )
            break;
          if ( !*(_QWORD *)v70 )
            goto LABEL_215;
          v74 = *(_DWORD *)(*(_QWORD *)v70 + 28LL);
          if ( v73->fields.endMasterSkillTurnBuffValue <= v74 )
            v73->fields.endMasterSkillTurnBuffValue = v74;
        }
      }
      monitor = (int)v62[1].monitor;
      if ( (int)++v67 >= monitor )
        goto LABEL_77;
    }
LABEL_220:
    sub_1B6432C(Instance, v52);
  }
  v180 = 0;
LABEL_80:
  Instance = (__int64)this->fields.data;
  if ( !Instance )
    goto LABEL_215;
  Instance = (__int64)BattleData__getFieldEnemyServantList((BattleData_o *)Instance, 0, 0LL);
  v75 = this->fields.data;
  if ( !v75 )
    goto LABEL_215;
  v76 = Instance;
  if ( !v75->fields.leaderDown || !v75->fields.endbattleFlg )
  {
    if ( !Instance )
      goto LABEL_215;
    v77 = *(_DWORD *)(Instance + 24);
    if ( v77 >= 1 )
    {
      v78 = 0;
      while ( v78 < v77 )
      {
        v79 = v76 + 8LL * (int)v78;
        v81 = *(_QWORD *)(v79 + 32);
        v80 = (__int64 *)(v79 + 32);
        Instance = v81;
        if ( !v81 )
          goto LABEL_215;
        if ( *(_BYTE *)(Instance + 532) )
        {
          Instance = (__int64)BattleServantData__turnBuffProgressing(
                                (BattleServantData_o *)Instance,
                                *(_BYTE *)(v30 + 16),
                                *(System_Int32_array **)(v30 + 24),
                                this->fields.logic,
                                0LL,
                                0LL);
          if ( v78 >= *(_DWORD *)(v76 + 24) )
            goto LABEL_220;
          v82 = (Il2CppObject *)Instance;
          Instance = *v80;
          if ( !*v80 )
            goto LABEL_215;
          Instance = BattleServantData__isAlive((BattleServantData_o *)Instance, 0, 0LL);
          if ( (Instance & 1) != 0 )
          {
            if ( v78 >= *(_DWORD *)(v76 + 24) )
              goto LABEL_220;
            Instance = *v80;
            if ( !*v80 )
              goto LABEL_215;
            Instance = BattleServantData__isAliveLogic((BattleServantData_o *)Instance, 0, 0LL);
            if ( (Instance & 1) != 0 )
            {
              if ( !v82 )
                goto LABEL_215;
              if ( v82[1].monitor )
              {
                if ( v78 >= *(_DWORD *)(v76 + 24) )
                  goto LABEL_220;
                Instance = (__int64)v178;
                if ( !*v80 || !v178 )
                  goto LABEL_215;
                System_Collections_Generic_Dictionary_int__object___Add(
                  v178,
                  *(_DWORD *)(*v80 + 24),
                  v82,
                  (const MethodInfo_3123984 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
              }
            }
          }
          if ( v78 >= *(_DWORD *)(v76 + 24) )
            goto LABEL_220;
          if ( !*v80 )
            goto LABEL_215;
          if ( !v51 )
            goto LABEL_215;
          v52 = *(unsigned int *)(*v80 + 24);
          v83 = v51->fields._items;
          v84 = Method_System_Collections_Generic_List_int__Add__;
          ++v51->fields._version;
          if ( !v83 )
            goto LABEL_215;
          v85 = v51->fields._size;
          if ( (unsigned int)v85 >= v83->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v51,
              v52,
              *(const MethodInfo_348FEDC **)(*(_QWORD *)(v84[4] + 192LL) + 112LL));
          }
          else
          {
            v51->fields._size = v85 + 1;
            v83->m_Items[v85 + 1] = v52;
          }
        }
        v77 = *(_DWORD *)(v76 + 24);
        if ( (int)++v78 >= v77 )
          goto LABEL_110;
      }
      goto LABEL_220;
    }
LABEL_110:
    v75 = this->fields.data;
    if ( !v75 )
      goto LABEL_215;
  }
  if ( !v51 )
    goto LABEL_215;
  battleEvent = v75->fields.battleEvent;
  Instance = (__int64)System_Collections_Generic_List_int___ToArray(
                        v51,
                        (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !battleEvent )
    goto LABEL_215;
  Instance = ((__int64 (__fastcall *)(struct BaseBattleEvent_o *, __int64, _QWORD, Il2CppMethodPointer))battleEvent->klass->vtable._34_ProgressNoExecJoinServantsBuff.method)(
               battleEvent,
               Instance,
               *(unsigned __int8 *)(v30 + 16),
               battleEvent->klass->vtable._35_IsPossibleAddBuffParam.methodPtr);
  v87 = this->fields.data;
  if ( !v87 )
    goto LABEL_215;
  perf = v87->fields.perf;
  if ( !perf )
    goto LABEL_215;
  Instance = (__int64)v87->fields.defenceTargetData;
  if ( !Instance )
    goto LABEL_215;
  BattleDefenceTargetData__BuffTurnProgress((BattleDefenceTargetData_o *)Instance, perf->fields.defenceTarget, 0LL);
  v91 = this->fields.data;
  if ( !v91 )
    goto LABEL_215;
  aiNpcDataList = (System_Collections_Generic_List_object__o *)v91->fields.aiNpcDataList;
  v93 = (System_Action_object__o *)sub_1B64314(System_Action_AiNpcBattleServantData__TypeInfo, v89, v90);
  System_Action_object____ctor(
    v93,
    (Il2CppObject *)v30,
    Method_BattleLogicNomal___c__DisplayClass33_0__createEndTurnPlayer_b__0__,
    0LL);
  if ( !aiNpcDataList )
    goto LABEL_215;
  System_Collections_Generic_List_object___ForEach(
    aiNpcDataList,
    (System_Action_T__o *)v93,
    (const MethodInfo_34AE1B4 *)Method_System_Collections_Generic_List_AiNpcBattleServantData__ForEach__);
  v94 = this->fields.data;
  if ( !v94 )
    goto LABEL_215;
  Instance = (__int64)v94->fields._FieldEnvData_k__BackingField;
  if ( !Instance )
    goto LABEL_215;
  BattleFieldEnvironmentData__TurnProgressing(
    (BattleFieldEnvironmentData_o *)Instance,
    this->fields.logic,
    *(_BYTE *)(v30 + 16),
    0LL);
  BattleLogicNomal__UpdateEndTurnBuff(this, *(System_Int32_array **)(v30 + 24), v95);
  v96 = this->fields.data;
  if ( !v96 )
    goto LABEL_215;
  Instance = (__int64)v177;
  v96->fields.currentTurn = 1;
  if ( !v177 )
    goto LABEL_215;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v182,
    v177,
    (const MethodInfo_3123DBC *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____GetEnumerator__);
  v183 = v182;
  while ( 1 )
  {
    v97 = (Il2CppObject *)System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
                            &v183,
                            (const MethodInfo_3269C74 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____MoveNext__);
    if ( ((unsigned __int8)v97 & 1) == 0 )
      break;
    value = (BattleBuffData_BuffData_array *)v183.fields._current.fields.value;
    if ( !v183.fields._current.fields.value )
      sub_1B64324(v97);
    max_length = (int)v183.fields._current.fields.value[1].monitor;
    if ( max_length >= 1 )
    {
      key = (int32_t)v183.fields._current.fields.key;
      v102 = 0;
      v103 = 1;
LABEL_127:
      if ( v102 >= max_length )
        sub_1B6432C(v97, v98);
      v104 = value->m_Items[v102];
      if ( !v104 )
        sub_1B64324(v97);
      if ( v104->fields._isRemove )
        goto LABEL_163;
      if ( !v37 )
        sub_1B64324(v97);
      v97 = DataMasterBase_object__object__int___GetEntity(
              v37,
              v104->fields.buffId,
              (const MethodInfo_30D3EA4 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
      if ( !v97 )
        goto LABEL_163;
      v106 = (BattleSkillInfoData_o *)sub_1B64314(BattleSkillInfoData_TypeInfo, v98, v105);
      BattleSkillInfoData___ctor(v106, 0LL);
      if ( !v106 )
        sub_1B64324(v107);
      v106->fields.svtUniqueId = key;
      vals = v104->fields.vals;
      if ( !vals )
        sub_1B64324(v107);
      if ( !vals->max_length )
        sub_1B6432C(v107, v108);
      v110 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))v106->klass->vtable._4_set_skillId.method)(
               v106,
               (unsigned int)vals->m_Items[1],
               v106->klass->vtable._5_get_skillId.methodPtr);
      v112 = v104->fields.vals;
      if ( !v112 )
        sub_1B64324(v110);
      if ( v112->max_length <= 1 )
        sub_1B6432C(v110, v111);
      v106->fields.skilllv = v112->m_Items[2];
      v113 = this->fields.data;
      if ( !v113 )
        sub_1B64324(0LL);
      ServantData = BattleData__getServantData(v113, v106->fields.svtUniqueId, 0LL);
      v115 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))v106->klass->vtable._5_get_skillId.method)(
               v106,
               v106->klass->vtable._6_get_IndividualityArray.methodPtr);
      if ( !v181 )
        sub_1B64324(0LL);
      v116 = SkillLvMaster__GetEntity(v181, v115, v106->fields.skilllv, 0LL);
      if ( !ServantData )
        sub_1B64324(v116);
      v117 = v116;
      v118 = this->fields.data;
      if ( !v118 )
        sub_1B64324(0LL);
      v119 = BattleData__checkAliveOther(v118, ServantData->fields.uniqueId, 0LL);
      if ( !v119 )
      {
        if ( !v117 )
          sub_1B64324(v119);
        v120 = this->fields.logic;
        if ( !v120 )
          sub_1B64324(0LL);
        v97 = (Il2CppObject *)BattleLogic__checkPtTargetFunction(v120, v117->fields.funcId, 0LL);
        if ( ((unsigned __int8)v97 & 1) == 0 )
          goto LABEL_163;
      }
      v121 = BattleServantData__GetRevengeIdCheckOpponentOnly(ServantData, v104, 0LL);
      if ( (v121 & 0x80000000) != 0 )
      {
        TargetIds = Target__getTargetIds(this->fields.data, v106->fields.svtUniqueId, -1, key, 13, 0LL, 0LL);
        exists = BattleSkillInfoData__ExistsNoTargetNoActionType(v106, 0LL);
      }
      else
      {
        v122 = sub_1B64170(int___TypeInfo, 1LL);
        TargetIds = (System_Int32_array *)v122;
        if ( !v122 )
          sub_1B64324(0LL);
        if ( !*(_DWORD *)(v122 + 24) )
          sub_1B6432C(v122, v123);
        exists = 0;
        *(_DWORD *)(v122 + 32) = v121;
      }
      logicskill = this->fields.logicskill;
      v127 = (System_Int32_array *)sub_1B64170(int___TypeInfo, 1LL);
      if ( !v127 )
        sub_1B64324(0LL);
      if ( !v127->max_length )
        sub_1B6432C(v127, v128);
      v127->m_Items[1] = key;
      if ( !logicskill )
        sub_1B64324(v127);
      v129 = (System_Collections_ICollection_o *)BattleLogicSkill__taskSkill(
                                                   logicskill,
                                                   v106,
                                                   v127,
                                                   TargetIds,
                                                   1,
                                                   exists,
                                                   0,
                                                   0,
                                                   0,
                                                   v176);
      v130 = (BattleLogicTask_array *)v129;
      if ( (v103 & 1) != 0 )
      {
        IsNullOrEmpty = BasicHelper__IsNullOrEmpty(v129, 0LL);
        if ( IsNullOrEmpty )
        {
          v103 = 1;
          goto LABEL_161;
        }
        if ( !v130 )
          sub_1B64324(IsNullOrEmpty);
        if ( !v130->max_length )
          sub_1B6432C(IsNullOrEmpty, v132);
        v133 = v130->m_Items[0];
        if ( !v133 )
          sub_1B64324(0LL);
        BattleLogicTask__SetDisplayTriggerIntervalBuff(v133, ServantData, value, 0LL);
      }
      v103 = 0;
LABEL_161:
      v134 = this->fields.logic;
      if ( !v134 )
        sub_1B64324(0LL);
      BattleLogic__addBattleLogicTask(v134, v130, 0LL);
LABEL_163:
      max_length = value->max_length;
      if ( (int)++v102 >= max_length )
        continue;
      goto LABEL_127;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v183,
    (const MethodInfo_3269D98 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____Dispose__);
  Instance = (__int64)v178;
  if ( !v178 )
    goto LABEL_215;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v182,
    v178,
    (const MethodInfo_3123DBC *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____GetEnumerator__);
  v183 = v182;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v183,
            (const MethodInfo_3269C74 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____MoveNext__) )
  {
    v135 = this->fields.data;
    if ( !v135 )
      sub_1B64324(0LL);
    v136 = (int32_t)v183.fields._current.fields.key;
    v137 = v183.fields._current.fields.value;
    isEndAct = BattleData__getServantData(v135, (int32_t)v183.fields._current.fields.key, 0LL);
    v141 = isEndAct;
    if ( isEndAct )
    {
      v142 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B64314(
                                                            BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                            v139,
                                                            v140);
      BattleBuffData_CheckIndividualitiesData___ctor(v142, v141, 0LL, 0LL, 0LL, 0LL, 0LL);
      if ( !v142 )
        sub_1B64324(isEndAct);
      selfConcatSvtIndividualities_k__BackingField = v142->fields._selfConcatSvtIndividualities_k__BackingField;
      if ( !v137 )
LABEL_250:
        sub_1B64324(isEndAct);
    }
    else
    {
      selfConcatSvtIndividualities_k__BackingField = 0LL;
      if ( !v137 )
        goto LABEL_250;
    }
    v144 = (int)v137[1].monitor;
    if ( v144 >= 1 )
    {
      for ( i = 0; i < v144; ++i )
      {
        if ( i >= (unsigned int)v144 )
          sub_1B6432C(isEndAct, v139);
        v146 = (BattleBuffData_BuffData_o *)*((_QWORD *)&v137[2].klass + i);
        if ( !v146 )
          sub_1B64324(isEndAct);
        if ( !v146->fields._isRemove )
        {
          if ( !v37 )
            sub_1B64324(isEndAct);
          isEndAct = (BattleServantData_o *)DataMasterBase_object__object__int___GetEntity(
                                              v37,
                                              v146->fields.buffId,
                                              (const MethodInfo_30D3EA4 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
          if ( isEndAct )
          {
            isEndAct = (BattleServantData_o *)BuffEntity__isEndAct(
                                                (BuffEntity_o *)isEndAct,
                                                selfConcatSvtIndividualities_k__BackingField,
                                                0LL);
            if ( ((unsigned __int8)isEndAct & 1) != 0 )
            {
              isEndAct = (BattleServantData_o *)BattleBuffData_BuffData__checkAct(v146, 1, 0LL);
              if ( ((unsigned __int8)isEndAct & 1) != 0 )
              {
                v148 = (BattleSkillInfoData_o *)sub_1B64314(BattleSkillInfoData_TypeInfo, v139, v147);
                BattleSkillInfoData___ctor(v148, 0LL);
                if ( !v148 )
                  sub_1B64324(v149);
                v148->fields.svtUniqueId = v136;
                v151 = v146->fields.vals;
                if ( !v151 )
                  sub_1B64324(v149);
                if ( !v151->max_length )
                  sub_1B6432C(v149, v150);
                v152 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))v148->klass->vtable._4_set_skillId.method)(
                         v148,
                         (unsigned int)v151->m_Items[1],
                         v148->klass->vtable._5_get_skillId.methodPtr);
                v154 = v146->fields.vals;
                if ( !v154 )
                  sub_1B64324(v152);
                if ( v154->max_length <= 1 )
                  sub_1B6432C(v152, v153);
                v148->fields.skilllv = v154->m_Items[2];
                v155 = this->fields.data;
                if ( !v155 )
                  sub_1B64324(0LL);
                v156 = BattleData__getServantData(v155, v148->fields.svtUniqueId, 0LL);
                v157 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))v148->klass->vtable._5_get_skillId.method)(
                         v148,
                         v148->klass->vtable._6_get_IndividualityArray.methodPtr);
                if ( !v181 )
                  sub_1B64324(0LL);
                v158 = SkillLvMaster__GetEntity(v181, v157, v148->fields.skilllv, 0LL);
                if ( !v156 )
                  sub_1B64324(v158);
                v159 = v158;
                v160 = this->fields.data;
                if ( !v160 )
                  sub_1B64324(0LL);
                v161 = BattleData__checkAliveOther(v160, v156->fields.uniqueId, 0LL);
                if ( v161 )
                  goto LABEL_198;
                if ( !v159 )
                  sub_1B64324(v161);
                v162 = this->fields.logic;
                if ( !v162 )
                  sub_1B64324(0LL);
                isEndAct = (BattleServantData_o *)BattleLogic__checkPtTargetFunction(v162, v159->fields.funcId, 0LL);
                if ( ((unsigned __int8)isEndAct & 1) != 0 )
                {
LABEL_198:
                  v163 = BattleServantData__GetRevengeIdCheckOpponentOnly(v156, v146, 0LL);
                  if ( (v163 & 0x80000000) != 0 )
                  {
                    v166 = Target__getTargetIds(this->fields.data, v148->fields.svtUniqueId, -1, v136, 13, 0LL, 0LL);
                    v167 = BattleSkillInfoData__ExistsNoTargetNoActionType(v148, 0LL);
                  }
                  else
                  {
                    v164 = sub_1B64170(int___TypeInfo, 1LL);
                    v166 = (System_Int32_array *)v164;
                    if ( !v164 )
                      sub_1B64324(0LL);
                    if ( !*(_DWORD *)(v164 + 24) )
                      sub_1B6432C(v164, v165);
                    v167 = 0;
                    *(_DWORD *)(v164 + 32) = v163;
                  }
                  v168 = this->fields.logicskill;
                  v169 = (System_Int32_array *)sub_1B64170(int___TypeInfo, 1LL);
                  if ( !v169 )
                    sub_1B64324(0LL);
                  if ( !v169->max_length )
                    sub_1B6432C(v169, v170);
                  v169->m_Items[1] = v136;
                  if ( !v168 )
                    sub_1B64324(v169);
                  v171 = BattleLogicSkill__taskSkill(v168, v148, v169, v166, 1, v167, 0, 0, 0, v176);
                  v172 = this->fields.logic;
                  if ( !v172 )
                    sub_1B64324(0LL);
                  BattleLogic__addBattleLogicTask(v172, v171, 0LL);
                }
              }
            }
          }
        }
        v144 = (int)v137[1].monitor;
      }
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v183,
    (const MethodInfo_3269D98 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____Dispose__);
  v173 = this->fields.data;
  if ( !v173
    || (Instance = (__int64)v173->fields._FieldEnvData_k__BackingField) == 0
    || (BattleFieldEnvironmentData__RemoveBgmThenPlayCurrentBgm((BattleFieldEnvironmentData_o *)Instance, 0LL),
        (Instance = (__int64)this->fields.logic) == 0) )
  {
LABEL_215:
    sub_1B64324(Instance);
  }
  if ( (v180 & 1) != 0 )
    v174 = actiondata;
  else
    v174 = 0LL;
  return BattleLogic__PrevReturnCreateActionData((BattleLogic_o *)Instance, v174, actiondata, 0LL);
}


BattleActionData_o *__fastcall BattleLogicNomal__createPlayMotion(
        BattleLogicNomal_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  __int64 v4; // x20
  __int64 v5; // x0
  struct System_String_o *motionName; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  struct System_String_o *motionMessage; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  struct UnityEngine_GameObject_o *targetObject; // x1
  int32_t v13; // w2
  int32_t v14; // w3

  if ( (byte_49FEFB5 & 1) == 0 )
  {
    sub_1B640C8(&BattleActionData_TypeInfo, task);
    byte_49FEFB5 = 1;
  }
  v4 = sub_1B64314(BattleActionData_TypeInfo, task, method);
  BattleActionData___ctor((BattleActionData_o *)v4, 0LL);
  if ( !v4 || (BattleActionData__setStateMotion((BattleActionData_o *)v4, 0LL), !task) )
    sub_1B64324(v5);
  *(_BYTE *)(v4 + 241) = task->fields.isForcedSpeedOne;
  *(_DWORD *)(v4 + 32) = BattleLogicTask__getActorId(task, 0LL);
  motionName = task->fields.motionName;
  *(_QWORD *)(v4 + 64) = motionName;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v4 + 64), (int32_t)motionName, v7, v8);
  motionMessage = task->fields.motionMessage;
  *(_QWORD *)(v4 + 128) = motionMessage;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v4 + 128), (int32_t)motionMessage, v10, v11);
  *(_DWORD *)(v4 + 136) = task->fields.messageType;
  targetObject = task->fields.targetObject;
  *(_QWORD *)(v4 + 72) = targetObject;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v4 + 72), (int32_t)targetObject, v13, v14);
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
    sub_1B64324(this);
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
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x20
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w1
  __int64 v15; // x1
  __int64 v16; // x2
  BattleActionData_ShiftServant_o *v17; // x22

  v4 = this;
  if ( (byte_49FEFBF & 1) == 0 )
  {
    sub_1B640C8(&BattleActionData_TypeInfo, task);
    sub_1B640C8(&BattleActionData_ShiftServant_TypeInfo, v5);
    this = (BattleLogicNomal_o *)sub_1B640C8(&StringLiteral_8688/*"MOTION_SHIFT"*/, v6);
    byte_49FEFBF = 1;
  }
  if ( !task )
    goto LABEL_10;
  data = v4->fields.data;
  this = (BattleLogicNomal_o *)BattleLogicTask__getActorId(task, 0LL);
  if ( !data )
    goto LABEL_10;
  ServantData = BattleData__getServantData(data, (int32_t)this, 0LL);
  v11 = sub_1B64314(BattleActionData_TypeInfo, v9, v10);
  BattleActionData___ctor((BattleActionData_o *)v11, 0LL);
  if ( !ServantData )
    goto LABEL_10;
  if ( !v11 )
    goto LABEL_10;
  *(_DWORD *)(v11 + 32) = ServantData->fields.uniqueId;
  v14 = StringLiteral_8688/*"MOTION_SHIFT"*/;
  *(_QWORD *)(v11 + 64) = StringLiteral_8688/*"MOTION_SHIFT"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v11 + 64), v14, v12, v13);
  v17 = (BattleActionData_ShiftServant_o *)sub_1B64314(BattleActionData_ShiftServant_TypeInfo, v15, v16);
  BattleActionData_ShiftServant___ctor(v17, 0, 0LL);
  if ( !v17
    || (BattleActionData_ShiftServant__setBeforeSvtData(v17, ServantData, 0LL),
        BattleServantData__setShiftServant(ServantData, v4->fields.data, 1, 0LL),
        BattleServantData__SetIsBattleShift(ServantData, 1, 0LL),
        BattleActionData_ShiftServant__setCheckSvtData(v17, ServantData, 0LL),
        BattleActionData__setShiftServant((BattleActionData_o *)v11, v17, 0LL),
        (this = (BattleLogicNomal_o *)v4->fields.logic) == 0LL) )
  {
LABEL_10:
    sub_1B64324(this);
  }
  BattleLogic__actEnemyPtPassiveSkill((BattleLogic_o *)this, ServantData->fields.uniqueId, 1, 0, 0LL);
  return (BattleActionData_o *)v11;
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

  if ( (byte_49FEFB6 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, task);
    sub_1B640C8(&StringLiteral_11014/*"RESET_CAMERA_BAT"*/, v5);
    byte_49FEFB6 = 1;
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
              (System_String_o *)StringLiteral_11014/*"RESET_CAMERA_BAT"*/,
              0LL);
            return v9;
          }
        }
      }
LABEL_18:
      sub_1B64324(StartTurn);
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
  __int64 v6; // x1
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
        sub_1B6432C(data, v6);
      v9 = *((_QWORD *)data + v8 + 4);
      if ( !v9 )
        break;
      ++v8;
      *(_BYTE *)(v9 + 532) = 1;
      if ( v7 == v8 )
        goto LABEL_8;
    }
LABEL_12:
    sub_1B64324(data);
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
    sub_1B64324(this);
  v3 = *(_QWORD *)&svtList->max_length;
  if ( (int)v3 < 1 )
    return 0;
  v5 = 0;
  v6 = 0LL;
  do
  {
    if ( v6 >= (unsigned int)v3 )
      sub_1B6432C(this, svtList);
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


int32_t __fastcall BattleLogicNomal__getShiftableUniqueId(
        BattleLogicNomal_o *this,
        int32_t uniqueId,
        const MethodInfo *method)
{
  void *data; // x0
  __int64 v5; // x1
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
    sub_1B6432C(data, v5);
  if ( !*(_QWORD *)v10 )
LABEL_14:
    sub_1B64324(data);
  return *(_DWORD *)(*(_QWORD *)v10 + 24LL);
}


BaseBattleEvent_o *__fastcall BattleLogicNomal__get_BattleEvent(BattleLogicNomal_o *this, const MethodInfo *method)
{
  struct BattleData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_1B64324(this);
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

  if ( (byte_49FEFA8 & 1) == 0 )
  {
    sub_1B640C8(&Method_BattleLogicNomal_shiftServantTaskReaction__, list);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__,
      v5);
    sub_1B640C8(&BattleLogic_reactionFunction_TypeInfo, v6);
    byte_49FEFA8 = 1;
  }
  v7 = (BattleLogic_reactionFunction_o *)sub_1B64314(BattleLogic_reactionFunction_TypeInfo, list, method);
  BattleLogic_reactionFunction___ctor(v7, (Il2CppObject *)this, Method_BattleLogicNomal_shiftServantTaskReaction__, 0LL);
  if ( !list )
    sub_1B64324(v8);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    36,
    (Il2CppObject *)v7,
    (const MethodInfo_3152840 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
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
  __int64 v13; // x1
  __int64 v14; // x2
  int32_t v15; // w20
  System_Collections_Generic_List_object__o *v16; // x19
  BattleServantData_o *v17; // x22
  bool IsShiftGuts; // w23
  __int64 v19; // x1
  __int64 v20; // x2
  BattleLogicTask_o *v21; // x22
  int32_t v22; // w2
  int32_t v23; // w3
  struct System_Object_array *v24; // x8
  _QWORD *v25; // x9
  __int64 v26; // x10
  Il2CppClass **v27; // x0
  const MethodInfo *v28; // x2
  int32_t v30; // w2
  int32_t v31; // w3
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x0
  __int64 v36; // x1
  __int64 v37; // x2
  struct BattleLogic_o *logic; // x8
  System_Collections_Generic_IEnumerable_T__o *TaskGuts; // x0
  BattleLogicTask_o *v40; // x21
  int32_t v41; // w2
  int32_t v42; // w3
  struct System_Object_array *v43; // x8
  _QWORD *v44; // x9
  __int64 v45; // x10
  Il2CppClass **v46; // x0

  v4 = this;
  if ( (byte_49FEFC0 & 1) == 0 )
  {
    sub_1B640C8(&BattleLogicTask_TypeInfo, task);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v8);
    this = (BattleLogicNomal_o *)sub_1B640C8(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v9);
    byte_49FEFC0 = 1;
  }
  if ( !task )
    goto LABEL_31;
  ActorId = BattleLogicTask__getActorId(task, 0LL);
  ShiftableUniqueId = BattleLogicNomal__getShiftableUniqueId(v4, ActorId, v11);
  if ( !ShiftableUniqueId )
    return v4->fields.zeroTask;
  v15 = ShiftableUniqueId;
  v16 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                       v13,
                                                       v14);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  this = (BattleLogicNomal_o *)v4->fields.data;
  if ( !this )
    goto LABEL_31;
  this = (BattleLogicNomal_o *)BattleData__getServantData((BattleData_o *)this, v15, 0LL);
  if ( !this )
    goto LABEL_31;
  v17 = (BattleServantData_o *)this;
  this = (BattleLogicNomal_o *)BattleServantData__GetCheckIndividualitiesDataArrayForJudgeGuts(
                                 (BattleServantData_o *)this,
                                 0LL);
  if ( !v17->fields.buffData )
    goto LABEL_31;
  IsShiftGuts = BattleBuffData__IsShiftGuts(
                  v17->fields.buffData,
                  v17,
                  (BattleBuffData_CheckIndividualitiesData_array *)this,
                  0LL);
  v21 = (BattleLogicTask_o *)sub_1B64314(BattleLogicTask_TypeInfo, v19, v20);
  BattleLogicTask___ctor(v21, 0LL);
  if ( !v21 )
    goto LABEL_31;
  if ( !IsShiftGuts )
  {
    v21->fields.actiontype = 37;
    BattleLogicTask__setActor(v21, 3, v15, 0LL);
    if ( v16 )
    {
      items = v16->fields._items;
      v33 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
      ++v16->fields._version;
      if ( items )
      {
        size = v16->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v16,
            (Il2CppObject *)v21,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
        }
        else
        {
          v35 = &items->obj.klass + size;
          v16->fields._size = size + 1;
          v35[4] = (Il2CppClass *)v21;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v35 + 4), (int32_t)v21, v30, v31);
        }
        goto LABEL_25;
      }
    }
LABEL_31:
    sub_1B64324(this);
  }
  v21->fields.actiontype = 62;
  BattleLogicTask__setActor(v21, 3, v15, 0LL);
  if ( !v16 )
    goto LABEL_31;
  v24 = v16->fields._items;
  v25 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v16->fields._version;
  if ( !v24 )
    goto LABEL_31;
  v26 = v16->fields._size;
  if ( (unsigned int)v26 >= v24->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v16,
      (Il2CppObject *)v21,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
  }
  else
  {
    v27 = &v24->obj.klass + v26;
    v16->fields._size = v26 + 1;
    v27[4] = (Il2CppClass *)v21;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v27 + 4), (int32_t)v21, v22, v23);
  }
  logic = v4->fields.logic;
  if ( !logic )
    goto LABEL_31;
  this = (BattleLogicNomal_o *)logic->fields.logicReaction;
  if ( !this )
    goto LABEL_31;
  TaskGuts = (System_Collections_Generic_IEnumerable_T__o *)BattleLogicReaction__createTaskGuts(
                                                              (BattleLogicReaction_o *)this,
                                                              v15,
                                                              v28);
  if ( TaskGuts )
    System_Collections_Generic_List_object___AddRange(
      v16,
      TaskGuts,
      (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
LABEL_25:
  v40 = (BattleLogicTask_o *)sub_1B64314(BattleLogicTask_TypeInfo, v36, v37);
  BattleLogicTask___ctor(v40, 0LL);
  if ( !v40 )
    goto LABEL_31;
  v40->fields.actiontype = 36;
  BattleLogicTask__setActor(v40, 3, v15, 0LL);
  v43 = v16->fields._items;
  v44 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v16->fields._version;
  if ( !v43 )
    goto LABEL_31;
  v45 = v16->fields._size;
  if ( (unsigned int)v45 >= v43->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v16,
      (Il2CppObject *)v40,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
  }
  else
  {
    v46 = &v43->obj.klass + v45;
    v16->fields._size = v45 + 1;
    v46[4] = (Il2CppClass *)v40;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v46 + 4), (int32_t)v40, v41, v42);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v16,
                                    (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  struct BattleData_o *v13; // x8
  struct BattleComboData_o *combodata; // x8
  BattleDataDefine_c *v15; // x0
  BattleCommandData_o *v16; // x22
  BattleServantData_o *v17; // x23
  __int64 v18; // x1
  __int64 v19; // x2
  BattleLogicTask_o *v20; // x23
  const MethodInfo *v21; // x2
  int32_t v22; // w2
  int32_t v23; // w3
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0

  if ( (byte_49FEFAA & 1) == 0 )
  {
    sub_1B640C8(&BattleDataDefine_TypeInfo, *(_QWORD *)&ltype);
    sub_1B640C8(&BattleLogicTask_TypeInfo, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v9);
    sub_1B640C8(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v10);
    byte_49FEFAA = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                       *(_QWORD *)&ltype,
                                                       data);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v13 = this->fields.data;
  if ( !v13 )
    goto LABEL_26;
  battleEvent = (BattleData_o *)v13->fields.battleEvent;
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
  v15 = BattleDataDefine_TypeInfo;
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    v15 = BattleDataDefine_TypeInfo;
  }
  battleEvent = (BattleData_o *)BattleData__getSelectCommand(data, v15->static_fields->COMMAND_CARD_NUM_TO_SELECT, 0LL);
  if ( !battleEvent )
    goto LABEL_26;
  v16 = (BattleCommandData_o *)battleEvent;
  battleEvent = this->fields.data;
  if ( !battleEvent )
    goto LABEL_26;
  battleEvent = (BattleData_o *)BattleData__getServantData(battleEvent, v16->fields.uniqueId, 0LL);
  if ( !battleEvent )
    goto LABEL_26;
  v17 = (BattleServantData_o *)battleEvent;
  battleEvent = (BattleData_o *)BattleServantData__isAlive((BattleServantData_o *)battleEvent, 0, 0LL);
  if ( ((unsigned __int8)battleEvent & 1) == 0
    || !v17->fields.isEntry
    || (battleEvent = (BattleData_o *)BattleServantData__isAction(v17, 0LL), ((unsigned __int8)battleEvent & 1) == 0) )
  {
LABEL_23:
    if ( v11 )
      return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                        v11,
                                        (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_26:
    sub_1B64324(battleEvent);
  }
  v20 = (BattleLogicTask_o *)sub_1B64314(BattleLogicTask_TypeInfo, v18, v19);
  BattleLogicTask___ctor(v20, 0LL);
  if ( !v20 )
    goto LABEL_26;
  BattleLogicTask__setActor(v20, 2, v16->fields.uniqueId, 0LL);
  battleEvent = (BattleData_o *)this->fields.logictarget;
  if ( !battleEvent )
    goto LABEL_26;
  BattleLogicTarget__getTargetBattleServantData((BattleLogicTarget_o *)battleEvent, v20, v21);
  BattleLogicTask__setAddAttackCommand(v20, data->fields.combodata, v16, 0LL);
  v20->fields.isCanCounterTask = 1;
  if ( !v11 )
    goto LABEL_26;
  items = v11->fields._items;
  v25 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v11->fields._version;
  if ( !items )
    goto LABEL_26;
  size = v11->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v11,
      (Il2CppObject *)v20,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
  }
  else
  {
    v27 = &items->obj.klass + size;
    v11->fields._size = size + 1;
    v27[4] = (Il2CppClass *)v20;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v27 + 4), (int32_t)v20, v22, v23);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v11,
                                    (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  __int64 v12; // x2
  BattleLogicTask_o *v13; // x20
  int32_t v14; // w2
  int32_t v15; // w3
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0

  if ( (byte_49FEFBC & 1) == 0 )
  {
    sub_1B640C8(&BattleLogicTask_TypeInfo, *(_QWORD *)&ltype);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v7);
    sub_1B640C8(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v8);
    byte_49FEFBC = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                      *(_QWORD *)&ltype,
                                                      data);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( ltype == 35 )
  {
    v13 = (BattleLogicTask_o *)sub_1B64314(BattleLogicTask_TypeInfo, v11, v12);
    BattleLogicTask___ctor(v13, 0LL);
    if ( !v13 )
      goto LABEL_14;
    BattleLogicTask__setBuffAddEnemy(v13, 0LL);
  }
  else
  {
    if ( ltype != 34 )
    {
      if ( v9 )
        return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                          v9,
                                          (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_14:
      sub_1B64324(v10);
    }
    v13 = (BattleLogicTask_o *)sub_1B64314(BattleLogicTask_TypeInfo, v11, v12);
    BattleLogicTask___ctor(v13, 0LL);
    if ( !v13 )
      goto LABEL_14;
    BattleLogicTask__setBuffAddPlayer(v13, 0LL);
  }
  if ( !v9 )
    goto LABEL_14;
  items = v9->fields._items;
  v17 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v9->fields._version;
  if ( !items )
    goto LABEL_14;
  size = v9->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v9,
      (Il2CppObject *)v13,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
  }
  else
  {
    v19 = &items->obj.klass + size;
    v9->fields._size = size + 1;
    v19[4] = (Il2CppClass *)v13;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v19 + 4), (int32_t)v13, v14, v15);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v9,
                                    (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  BattleLogic_o *logic; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  BattleLogicTask_o *v13; // x20
  int32_t v14; // w2
  int32_t v15; // w3
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0

  if ( (byte_49FEFAE & 1) == 0 )
  {
    sub_1B640C8(&BattleLogicTask_TypeInfo, *(_QWORD *)&ltype);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v7);
    sub_1B640C8(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v8);
    byte_49FEFAE = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                      *(_QWORD *)&ltype,
                                                      data);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  logic = this->fields.logic;
  if ( !logic
    || (BattleLogic__resetOverKill(logic, 0LL),
        v13 = (BattleLogicTask_o *)sub_1B64314(BattleLogicTask_TypeInfo, v11, v12),
        BattleLogicTask___ctor(v13, 0LL),
        !v13)
    || (BattleLogicTask__setSystem(v13, 0LL), !v9)
    || (items = v9->fields._items,
        v17 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++v9->fields._version,
        !items) )
  {
    sub_1B64324(logic);
  }
  size = v9->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v9,
      (Il2CppObject *)v13,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
  }
  else
  {
    v19 = &items->obj.klass + size;
    v9->fields._size = size + 1;
    v19[4] = (Il2CppClass *)v13;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v19 + 4), (int32_t)v13, v14, v15);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v9,
                                    (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
BattleLogicTask_array *__fastcall BattleLogicNomal__taskComboOrderBefore(
        BattleLogicNomal_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  BattleLogicNomal_o *v5; // x19
  struct BattleData_o *v6; // x8
  const MethodInfo *v7; // x1
  System_Collections_Generic_IEnumerable_BattleLogicTask__o *ConfirmCommandFunctionBuffTask; // x0

  v5 = this;
  if ( (byte_49FEFAC & 1) == 0 )
  {
    this = (BattleLogicNomal_o *)sub_1B640C8(
                                   &Method_System_Linq_Enumerable_ToArray_BattleLogicTask___,
                                   *(_QWORD *)&ltype);
    byte_49FEFAC = 1;
  }
  v6 = v5->fields.data;
  if ( !v6 )
    goto LABEL_9;
  this = (BattleLogicNomal_o *)v6->fields.battleEvent;
  if ( !this )
    goto LABEL_9;
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
      ConfirmCommandFunctionBuffTask = BattleLogicNomal__GetConfirmCommandFunctionBuffTask(v5, v7);
      return (BattleLogicTask_array *)System_Linq_Enumerable__ToArray_object_(
                                        (System_Collections_Generic_IEnumerable_TSource__o *)ConfirmCommandFunctionBuffTask,
                                        (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_BattleLogicTask___);
    }
LABEL_9:
    sub_1B64324(this);
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
  struct BattleData_o *v13; // x8
  int32_t v14; // w23
  BattleCommandData_o *v15; // x24
  BattleServantData_o *ServantData; // x25
  const MethodInfo *v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  BattleLogicTask_o *v20; // x22
  int32_t TreasureDvcId; // w0
  const MethodInfo *v23; // x2
  int32_t v24; // w2
  int32_t v25; // w3
  struct System_Object_array *v26; // x8
  _QWORD *v27; // x9
  __int64 v28; // x10
  Il2CppClass **v29; // x0
  const MethodInfo *v30; // x2
  int32_t v31; // w2
  int32_t v32; // w3
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x0

  if ( (byte_49FEFA9 & 1) == 0 )
  {
    sub_1B640C8(&BattleLogicTask_TypeInfo, *(_QWORD *)&ltype);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v9);
    sub_1B640C8(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v10);
    byte_49FEFA9 = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                       *(_QWORD *)&ltype,
                                                       data);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v13 = this->fields.data;
  if ( !v13 )
    goto LABEL_37;
  battleEvent = (BattleCommandData_o *)v13->fields.battleEvent;
  if ( !battleEvent )
    goto LABEL_37;
  battleEvent = (BattleCommandData_o *)(*(__int64 (__fastcall **)(BattleCommandData_o *, Il2CppClass *))&battleEvent->klass[2]._1.this_arg.bits)(
                                         battleEvent,
                                         battleEvent->klass[2]._1.element_class);
  if ( ((unsigned __int8)battleEvent & 1) == 0 )
    goto LABEL_18;
  if ( ltype == 3 )
    v14 = 2;
  else
    v14 = ltype == 2;
  this->fields.commandIndex = v14;
  if ( !data )
    goto LABEL_37;
  battleEvent = BattleData__getSelectCommand(data, v14, 0LL);
  if ( !battleEvent )
    goto LABEL_37;
  v15 = battleEvent;
  battleEvent = (BattleCommandData_o *)BattleCommandData__isBlank(battleEvent, 0LL);
  if ( ((unsigned __int8)battleEvent & 1) != 0 )
    goto LABEL_18;
  battleEvent = (BattleCommandData_o *)this->fields.data;
  if ( !battleEvent )
    goto LABEL_37;
  ServantData = BattleData__getServantData((BattleData_o *)battleEvent, v15->fields.uniqueId, 0LL);
  battleEvent = (BattleCommandData_o *)BattleLogicNomal__IsEnableToAttack(ServantData, v15, v17);
  if ( ((unsigned __int8)battleEvent & 1) == 0 )
  {
LABEL_18:
    if ( v11 )
      return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                        v11,
                                        (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    goto LABEL_37;
  }
  v20 = (BattleLogicTask_o *)sub_1B64314(BattleLogicTask_TypeInfo, v18, v19);
  BattleLogicTask___ctor(v20, 0LL);
  if ( !v20 )
    goto LABEL_37;
  BattleLogicTask__setActionCommand(v20, data->fields.combodata, v15, v14, 0LL);
  if ( BattleData__isTutorial(data, 0LL) )
  {
    if ( BattleData__IsTutorialCriticalEnabled(data, 0LL) )
      BattleCommandData__checkCriticalRate(v15, 0, 0LL);
  }
  else
  {
    BattleCommandData__LotteryPlayerSideCritical(v15, 0LL);
  }
  BattleLogicTask__setActor(v20, 2, v15->fields.uniqueId, 0LL);
  v20->fields.isCanCounterTask = 1;
  if ( v15->fields.treasureDvc < 1 )
  {
    BattleData__setTDChain(data, 0, 0LL);
    battleEvent = (BattleCommandData_o *)this->fields.logictarget;
    if ( battleEvent )
    {
      battleEvent = (BattleCommandData_o *)BattleLogicTarget__getTargetBattleServantData(
                                             (BattleLogicTarget_o *)battleEvent,
                                             v20,
                                             v30);
      if ( v11 )
      {
        items = v11->fields._items;
        v34 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
        ++v11->fields._version;
        if ( items )
        {
          size = v11->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v11,
              (Il2CppObject *)v20,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
          }
          else
          {
            v36 = &items->obj.klass + size;
            v11->fields._size = size + 1;
            v36[4] = (Il2CppClass *)v20;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v36 + 4), (int32_t)v20, v31, v32);
          }
          return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                            v11,
                                            (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
        }
      }
    }
LABEL_37:
    sub_1B64324(battleEvent);
  }
  battleEvent = (BattleCommandData_o *)this->fields.logic;
  if ( !battleEvent )
    goto LABEL_37;
  BattleLogic__resetOverKill((BattleLogic_o *)battleEvent, 0LL);
  if ( !ServantData )
    goto LABEL_37;
  BattleLogicTask__setActor(v20, 2, ServantData->fields.uniqueId, 0LL);
  BattleLogicTask__setActionCommand(v20, data->fields.combodata, v15, v14, 0LL);
  TreasureDvcId = BattleServantData__getTreasureDvcId(ServantData, 1, 0LL);
  BattleLogicTask__setActionTreasureDvc(v20, TreasureDvcId, 1, 0LL);
  battleEvent = (BattleCommandData_o *)this->fields.logictarget;
  if ( !battleEvent )
    goto LABEL_37;
  battleEvent = (BattleCommandData_o *)BattleLogicTarget__getTargetBattleServantData(
                                         (BattleLogicTarget_o *)battleEvent,
                                         v20,
                                         v23);
  if ( !v11 )
    goto LABEL_37;
  v26 = v11->fields._items;
  v27 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v11->fields._version;
  if ( !v26 )
    goto LABEL_37;
  v28 = v11->fields._size;
  if ( (unsigned int)v28 >= v26->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v11,
      (Il2CppObject *)v20,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
  }
  else
  {
    v29 = &v26->obj.klass + v28;
    v11->fields._size = v28 + 1;
    v29[4] = (Il2CppClass *)v20;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v29 + 4), (int32_t)v20, v24, v25);
  }
  BattleData__setTDChain(data, 1, 0LL);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v11,
                                    (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  Il2CppObject *MasterData_object; // x24
  __int64 wasAttackTargetId; // x1
  __int64 v32; // x8
  __int64 v33; // x22
  __int64 v34; // x8
  unsigned __int64 v35; // x26
  int v36; // w9
  BattleServantData_o *v37; // x27
  BattleServantData_o *v38; // x20
  __int64 v39; // x2
  System_Collections_Generic_IEnumerable_T__o *v40; // x29
  __int64 v41; // x2
  void *monitor; // x8
  bool v43; // w24
  DataMasterBase_TMaster__TEntity__PKType__o *v44; // x25
  __int64 v45; // x28
  BattleBuffData_BuffData_o *v46; // x21
  BattleLogicTask_o *v47; // x20
  int32_t counterId; // w1
  int32_t counterLv; // w2
  __int64 v50; // x25
  __int64 v51; // x24
  int32_t uniqueId; // w8
  __int64 v53; // x9
  System_Int32_array *v54; // x25
  System_String_o *CounterMessage; // x0
  int32_t v56; // w2
  int32_t v57; // w3
  struct System_Object_array *items; // x8
  _QWORD *v59; // x9
  __int64 size; // x10
  Il2CppClass **v61; // x0
  __int64 v62; // x9
  BattleLogicNomal___c_c *v63; // x0
  System_Action_object__o *_9__16_0; // x20
  Il2CppObject *v65; // x21
  struct BattleLogicNomal___c_StaticFields *static_fields; // x0
  int32_t v67; // w2
  int32_t v68; // w3
  struct BattleLogic_o *logic; // x8
  _BOOL4 v71; // [xsp+4h] [xbp-9Ch]
  BattleLogicNomal_o *v72; // [xsp+8h] [xbp-98h]
  SkillLvMaster_o *v73; // [xsp+10h] [xbp-90h]
  System_Collections_Generic_HashSet_T__o *v74; // [xsp+18h] [xbp-88h]
  DataMasterBase_TMaster__TEntity__PKType__o *v75; // [xsp+20h] [xbp-80h]
  char v77; // [xsp+38h] [xbp-68h]
  int32_t type; // [xsp+3Ch] [xbp-64h]

  v6 = isInitLogicHp;
  if ( (byte_49FEFAB & 1) == 0 )
  {
    sub_1B640C8(&System_Action_BattleBuffData_BuffData__TypeInfo, data);
    sub_1B640C8(&Method_BasicHelper_ForEach_BattleBuffData_BuffData___, v10);
    sub_1B640C8(&BattleLogicTask_TypeInfo, v11);
    sub_1B640C8(&BattleSkillInfoData_TypeInfo, v12);
    sub_1B640C8(&Method_DataManager_GetMasterData_BuffMaster___, v13);
    sub_1B640C8(&Method_DataManager_GetMasterData_SkillLvMaster___, v14);
    sub_1B640C8(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Remove__, v16);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData___ctor___75638120, v17);
    sub_1B640C8(&System_Collections_Generic_HashSet_BattleBuffData_BuffData__TypeInfo, v18);
    sub_1B640C8(&int___TypeInfo, v19);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v20);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v21);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v22);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask__get_Count__, v23);
    sub_1B640C8(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v24);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25);
    sub_1B640C8(&Method_BattleLogicNomal___c__taskCounterFunc_b__16_0__, v26);
    sub_1B640C8(&BattleLogicNomal___c_TypeInfo, v27);
    byte_49FEFAB = 1;
  }
  v28 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                       data,
                                                       isEnemy);
  System_Collections_Generic_List_object____ctor(
    v28,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_76;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_SkillLvMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_76;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_BuffMaster___);
  v75 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
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
        sub_1B6432C(Instance, wasAttackTargetId);
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
                if ( v37->fields.isEnemy != *(unsigned __int8 *)(Instance + 471) )
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
                    v40 = (System_Collections_Generic_IEnumerable_T__o *)Instance;
                    if ( *(_QWORD *)(Instance + 24) )
                    {
                      v72 = this;
                      v73 = (SkillLvMaster_o *)MasterData_object;
                      v71 = v6;
                      v74 = (System_Collections_Generic_HashSet_T__o *)sub_1B64314(
                                                                         System_Collections_Generic_HashSet_BattleBuffData_BuffData__TypeInfo,
                                                                         wasAttackTargetId,
                                                                         v39);
                      System_Collections_Generic_HashSet_object____ctor_53911232(
                        v74,
                        v40,
                        (const MethodInfo_3369EC0 *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData___ctor___75638120);
                      monitor = v40[1].monitor;
                      v43 = isSkillCounter;
                      v44 = v75;
                      if ( (int)monitor >= 1 )
                      {
                        v45 = 4LL;
                        v77 = 1;
                        do
                        {
                          if ( v45 - 4 >= (unsigned __int64)(unsigned int)monitor )
                            goto LABEL_77;
                          v46 = (BattleBuffData_BuffData_o *)*((_QWORD *)&v40->klass + v45);
                          if ( !v43 )
                            goto LABEL_80;
                          if ( !v46 )
                            goto LABEL_76;
                          if ( v46->fields.isSkillReaction )
                          {
LABEL_80:
                            v47 = (BattleLogicTask_o *)sub_1B64314(BattleLogicTask_TypeInfo, wasAttackTargetId, v41);
                            BattleLogicTask___ctor(v47, 0LL);
                            if ( !v47 )
                              goto LABEL_76;
                            BattleLogicTask__setActor(v47, type, v37->fields.uniqueId, 0LL);
                            BattleLogicTask__setTarget(v47, v37->fields.wasAttackTargetId, 0LL);
                            Instance = (__int64)v37->fields.buffData;
                            if ( !Instance )
                              goto LABEL_76;
                            Instance = BattleBuffData__checkBuffSuccessful((BattleBuffData_o *)Instance, v46, 1, 0LL);
                            if ( (Instance & 1) != 0 )
                            {
                              v37->fields.overkillTargetId = -1;
                              if ( !v46 )
                                goto LABEL_76;
                              counterId = v46->fields.counterId;
                              counterLv = v46->fields.counterLv;
                              if ( v46->fields.isUseTreasureDevice )
                              {
                                BattleLogicTask__setActionOverwriteTreasureDvc(
                                  v47,
                                  counterId,
                                  counterLv,
                                  v46->fields.counterOc,
                                  1,
                                  0LL);
                                if ( !v44 )
                                  goto LABEL_76;
                              }
                              else
                              {
                                Instance = (__int64)v73;
                                if ( !v73 )
                                  goto LABEL_76;
                                Instance = (__int64)SkillLvMaster__GetEntity(v73, counterId, counterLv, 0LL);
                                if ( !Instance )
                                {
                                  v43 = isSkillCounter;
                                  v44 = v75;
                                  goto LABEL_58;
                                }
                                v50 = Instance;
                                v51 = sub_1B64314(BattleSkillInfoData_TypeInfo, wasAttackTargetId, v41);
                                BattleSkillInfoData___ctor((BattleSkillInfoData_o *)v51, 0LL);
                                if ( !v51 )
                                  goto LABEL_76;
                                uniqueId = v37->fields.uniqueId;
                                v53 = *(_QWORD *)v51;
                                *(_QWORD *)(v51 + 16) = 20LL;
                                *(_DWORD *)(v51 + 24) = uniqueId;
                                (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(v53 + 376))(
                                  v51,
                                  *(unsigned int *)(v50 + 16),
                                  *(_QWORD *)(v53 + 384));
                                *(_DWORD *)(v51 + 36) = *(_DWORD *)(v50 + 20);
                                Instance = sub_1B64170(int___TypeInfo, 1LL);
                                if ( !Instance )
                                  goto LABEL_76;
                                v54 = (System_Int32_array *)Instance;
                                if ( !*(_DWORD *)(Instance + 24) )
                                  goto LABEL_77;
                                *(_DWORD *)(Instance + 32) = v37->fields.wasAttackTargetId;
                                Instance = sub_1B64170(int___TypeInfo, 1LL);
                                if ( !Instance )
                                  goto LABEL_76;
                                if ( !*(_DWORD *)(Instance + 24) )
                                  goto LABEL_77;
                                *(_DWORD *)(Instance + 32) = v37->fields.uniqueId;
                                BattleLogicTask__setActionSkill(
                                  v47,
                                  (BattleSkillInfoData_o *)v51,
                                  v54,
                                  (System_Int32_array *)Instance,
                                  1,
                                  0,
                                  0LL);
                                v43 = isSkillCounter;
                                v44 = v75;
                                if ( !v75 )
                                  goto LABEL_76;
                              }
                              Instance = (__int64)DataMasterBase_object__object__int___GetEntity(
                                                    v44,
                                                    v46->fields.buffId,
                                                    (const MethodInfo_30D3EA4 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
                              if ( !Instance )
                                goto LABEL_76;
                              CounterMessage = BuffEntity__GetCounterMessage((BuffEntity_o *)Instance, 0LL);
                              BattleLogicTask__setMessage(v47, CounterMessage, 2, 0LL);
                              v47->fields.isCounter = 1;
                              if ( (v77 & 1) != 0 )
                                BattleLogicTask__SetDisplayTriggerIntervalBuff(
                                  v47,
                                  v37,
                                  (BattleBuffData_BuffData_array *)v40,
                                  0LL);
                              if ( !v28 )
                                goto LABEL_76;
                              items = v28->fields._items;
                              v59 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
                              ++v28->fields._version;
                              if ( !items )
                                goto LABEL_76;
                              size = v28->fields._size;
                              if ( (unsigned int)size >= items->max_length )
                              {
                                System_Collections_Generic_List_object___AddWithResize(
                                  v28,
                                  (Il2CppObject *)v47,
                                  *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
                              }
                              else
                              {
                                v61 = &items->obj.klass + size;
                                v28->fields._size = size + 1;
                                v61[4] = (Il2CppClass *)v47;
                                sub_1B6406C((ServantStatusBattleListViewItem_o *)(v61 + 4), (int32_t)v47, v56, v57);
                              }
                              Instance = (__int64)v74;
                              if ( !v74 )
                                goto LABEL_76;
                              Instance = System_Collections_Generic_HashSet_object___Remove(
                                           v74,
                                           (Il2CppObject *)v46,
                                           (const MethodInfo_336A690 *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Remove__);
                              v77 = 0;
                            }
                          }
LABEL_58:
                          LODWORD(monitor) = v40[1].monitor;
                          v62 = v45 - 3;
                          ++v45;
                        }
                        while ( v62 < (int)monitor );
                      }
                      v63 = BattleLogicNomal___c_TypeInfo;
                      if ( !BattleLogicNomal___c_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo);
                        v63 = BattleLogicNomal___c_TypeInfo;
                      }
                      this = v72;
                      MasterData_object = (Il2CppObject *)v73;
                      v6 = v71;
                      _9__16_0 = (System_Action_object__o *)v63->static_fields->__9__16_0;
                      if ( !_9__16_0 )
                      {
                        if ( !v63->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(v63);
                          v63 = BattleLogicNomal___c_TypeInfo;
                        }
                        v65 = (Il2CppObject *)v63->static_fields->__9;
                        _9__16_0 = (System_Action_object__o *)sub_1B64314(
                                                                System_Action_BattleBuffData_BuffData__TypeInfo,
                                                                wasAttackTargetId,
                                                                v41);
                        System_Action_object____ctor(
                          _9__16_0,
                          v65,
                          Method_BattleLogicNomal___c__taskCounterFunc_b__16_0__,
                          0LL);
                        static_fields = BattleLogicNomal___c_TypeInfo->static_fields;
                        static_fields->__9__16_0 = (struct System_Action_BattleBuffData_BuffData__o *)_9__16_0;
                        sub_1B6406C(
                          (ServantStatusBattleListViewItem_o *)&static_fields->__9__16_0,
                          (int32_t)_9__16_0,
                          v67,
                          v68);
                      }
                      BasicHelper__ForEach_object_(
                        (System_Collections_Generic_IEnumerable_T__o *)v74,
                        (System_Action_T__o *)_9__16_0,
                        (const MethodInfo_2E26860 *)Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
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
    sub_1B64324(Instance);
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
                                    (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x21
  __int64 v16; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  int32_t v20; // w1
  int32_t v21; // w2
  int32_t v22; // w3
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0

  if ( (byte_49FEFB3 & 1) == 0 )
  {
    sub_1B640C8(&BattleLogicTask_TypeInfo, svtData);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v10);
    sub_1B640C8(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v11);
    byte_49FEFB3 = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                       svtData,
                                                       motionName);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v15 = sub_1B64314(BattleLogicTask_TypeInfo, v13, v14);
  BattleLogicTask___ctor((BattleLogicTask_o *)v15, 0LL);
  if ( !v15 )
    goto LABEL_15;
  BattleLogicTask__setPlayMoiton((BattleLogicTask_o *)v15, motionName, 0LL);
  if ( !Tr )
    goto LABEL_15;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Tr, 0LL);
  *(_QWORD *)(v15 + 112) = gameObject;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v15 + 112), (int32_t)gameObject, v18, v19);
  if ( !svtData )
    goto LABEL_15;
  v20 = svtData->fields.isEnemy ? 3 : 2;
  BattleLogicTask__setActor((BattleLogicTask_o *)v15, v20, svtData->fields.uniqueId, 0LL);
  if ( !v12
    || (items = v12->fields._items,
        v24 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++v12->fields._version,
        !items) )
  {
LABEL_15:
    sub_1B64324(v16);
  }
  size = v12->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v12,
      (Il2CppObject *)v15,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
  }
  else
  {
    v26 = &items->obj.klass + size;
    v12->fields._size = size + 1;
    v26[4] = (Il2CppClass *)v15;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v26 + 4), v15, v21, v22);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v12,
                                    (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x21
  BattleEntity_o *battle_ent; // x0
  System_String_o *v27; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  struct BattleData_o *data; // x8
  bool isNotDisplayRemain; // w0
  bool v33; // w23
  System_String_o *v34; // x0
  BattleData_o *v35; // x8
  System_String_o *v36; // x22
  BattleLogicNomal_o *PlayerServantList; // x0
  const MethodInfo *v38; // x2
  Il2CppObject *v39; // x0
  System_String_o *v40; // x0
  int32_t uniqueId; // w2
  System_String_o *v42; // x20
  BattleLogicTask_o *v43; // x0
  System_String_o *v44; // x1
  struct BattleData_o *v45; // x8
  int32_t EnemyCountStartValue_k__BackingField; // w23
  System_String_o *v47; // x22
  BattleLogicNomal_o *EnemyServantList; // x0
  const MethodInfo *v49; // x2
  Il2CppObject *v50; // x0
  System_String_o *v51; // x22
  int32_t v52; // w2
  int32_t v53; // w3
  struct System_Object_array *items; // x8
  _QWORD *v55; // x9
  __int64 size; // x10
  Il2CppClass **v57; // x0
  int v59; // [xsp+8h] [xbp-58h] BYREF
  int32_t CountSubmember; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_49FEFB4 & 1) == 0 )
  {
    sub_1B640C8(&BattleLogicTask_TypeInfo, svtData);
    sub_1B640C8(&int_TypeInfo, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v12);
    sub_1B640C8(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v13);
    sub_1B640C8(&LocalizationManager_TypeInfo, v14);
    sub_1B640C8(&StringLiteral_2975/*"BATTLE_SUBENTRY_PLAYER"*/, v15);
    sub_1B640C8(&StringLiteral_8681/*"MOTION_ENTRY"*/, v16);
    sub_1B640C8(&StringLiteral_2973/*"BATTLE_SUBENTRY_ENEMY"*/, v17);
    sub_1B640C8(&StringLiteral_2974/*"BATTLE_SUBENTRY_ENEMY_UNKNOWN"*/, v18);
    sub_1B640C8(&StringLiteral_8682/*"MOTION_ENTRY_TAC"*/, v19);
    byte_49FEFB4 = 1;
  }
  v20 = StringLiteral_8682/*"MOTION_ENTRY_TAC"*/;
  v21 = StringLiteral_8681/*"MOTION_ENTRY"*/;
  v22 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                       svtData,
                                                       Tr);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v25 = sub_1B64314(BattleLogicTask_TypeInfo, v23, v24);
  BattleLogicTask___ctor((BattleLogicTask_o *)v25, 0LL);
  if ( !v25 )
    goto LABEL_30;
  v27 = (System_String_o *)(isTactical ? v20 : v21);
  BattleLogicTask__setPlayMoiton((BattleLogicTask_o *)v25, v27, 0LL);
  if ( !Tr )
    goto LABEL_30;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Tr, 0LL);
  *(_QWORD *)(v25 + 112) = gameObject;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v25 + 112), (int32_t)gameObject, v29, v30);
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
          v33 = isNotDisplayRemain;
          if ( LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            if ( isNotDisplayRemain )
            {
LABEL_15:
              v34 = LocalizationManager__Get((System_String_o *)StringLiteral_2974/*"BATTLE_SUBENTRY_ENEMY_UNKNOWN"*/, 0LL);
LABEL_23:
              v51 = v34;
              BattleLogicTask__setActor((BattleLogicTask_o *)v25, 3, svtData->fields.uniqueId, 0LL);
              v43 = (BattleLogicTask_o *)v25;
              v44 = v51;
              goto LABEL_24;
            }
          }
          else
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            if ( v33 )
              goto LABEL_15;
          }
          battle_ent = (BattleEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2973/*"BATTLE_SUBENTRY_ENEMY"*/, 0LL);
          v45 = this->fields.data;
          if ( !v45 )
            goto LABEL_30;
          EnemyCountStartValue_k__BackingField = v45->fields._EnemyCountStartValue_k__BackingField;
          v47 = (System_String_o *)battle_ent;
          EnemyServantList = (BattleLogicNomal_o *)BattleData__getEnemyServantList(v45, 0LL);
          v59 = BattleLogicNomal__getCountSubmember(EnemyServantList, (BattleServantData_array *)EnemyServantList, v49)
              + EnemyCountStartValue_k__BackingField;
          v50 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v59);
          v34 = System_String__Format(v47, v50, 0LL);
          goto LABEL_23;
        }
      }
    }
LABEL_30:
    sub_1B64324(battle_ent);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  battle_ent = (BattleEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2975/*"BATTLE_SUBENTRY_PLAYER"*/, 0LL);
  v35 = this->fields.data;
  if ( !v35 )
    goto LABEL_30;
  v36 = (System_String_o *)battle_ent;
  PlayerServantList = (BattleLogicNomal_o *)BattleData__getPlayerServantList(v35, 0LL);
  CountSubmember = BattleLogicNomal__getCountSubmember(
                     PlayerServantList,
                     (BattleServantData_array *)PlayerServantList,
                     v38);
  v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &CountSubmember);
  v40 = System_String__Format(v36, v39, 0LL);
  uniqueId = svtData->fields.uniqueId;
  v42 = v40;
  BattleLogicTask__setActor((BattleLogicTask_o *)v25, 2, uniqueId, 0LL);
  v43 = (BattleLogicTask_o *)v25;
  v44 = v42;
LABEL_24:
  BattleLogicTask__setMessage(v43, v44, 1, 0LL);
  if ( !v22 )
    goto LABEL_30;
  items = v22->fields._items;
  v55 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v22->fields._version;
  if ( !items )
    goto LABEL_30;
  size = v22->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v22,
      (Il2CppObject *)v25,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
  }
  else
  {
    v57 = &items->obj.klass + size;
    v22->fields._size = size + 1;
    v57[4] = (Il2CppClass *)v25;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v57 + 4), v25, v52, v53);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v22,
                                    (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  int32_t v2; // w2
  int32_t v3; // w3
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__18_o *v4; // x19
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
  int32_t v19; // w3
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__18_o *v20; // x8
  int v21; // w9
  int32_t _7__wrap5; // w8
  int v23; // w9
  bool result; // w0
  ServantStatusBattleListViewItem_o *p__7__wrap1; // x8
  struct BattleCommandData_array *v26; // x10
  struct BattleCommandData_array *_7__wrap1; // t1
  int max_length; // w11
  BattleCommandData_o *v29; // x19
  BattleData_o *v30; // x0
  BattleServantData_o *ServantData; // x20
  const MethodInfo *v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  System_Collections_Generic_IEnumerable_BattleSkillInfoData__o *v35; // x20
  BattleLogicNomal___c_c *v36; // x0
  System_Func_object__int__o *_9__18_0; // x21
  Il2CppObject *v38; // x22
  struct BattleLogicNomal___c_StaticFields *static_fields; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  System_Linq_IOrderedEnumerable_TSource__o *v42; // x0
  System_Linq_IOrderedEnumerable_TSource__o *v43; // x20
  System_Linq_IOrderedEnumerable_TSource__c *klass; // x8
  __int64 v45; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v48; // x0
  int32_t v49; // w2
  int32_t v50; // w3
  __int64 v51; // x0
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__18_o *v52; // x8
  struct System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *v53; // x19
  System_Collections_Generic_IEnumerator_BattleSkillInfoData__c *v54; // x8
  __int64 v55; // x9
  int *v56; // x10
  __int64 v57; // x0
  __int64 v58; // x0
  BattleSkillInfoData_o *v59; // x19
  BattleLogicSkill_o *logicskill; // x20
  System_Int32_array *v61; // x0
  __int64 v62; // x1
  BattleLogicTask_array *v63; // x1
  int32_t v64; // w2
  int32_t v65; // w3
  struct BattleLogicTask_array *_7__wrap4; // x10
  il2cpp_array_size_t v67; // w11
  struct System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *_7__wrap3; // x19
  System_Collections_Generic_IEnumerator_BattleSkillInfoData__c *v69; // x8
  __int64 v70; // x9
  int *v71; // x10
  __int64 v72; // x0
  const MethodInfo *v73; // x1
  int32_t v74; // w2
  int32_t v75; // w3
  struct BattleLogicTask_o *v76; // x1
  const MethodInfo *v77; // [xsp+8h] [xbp-58h]
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__18_o *v78; // [xsp+28h] [xbp-38h]

  v78 = this;
  v4 = this;
  if ( (byte_49FEFCB & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_OrderBy_BattleSkillInfoData__int___, method);
    sub_1B640C8(&System_Func_BattleSkillInfoData__int__TypeInfo, v5);
    sub_1B640C8(&System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo, v6);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo, v7);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_1B640C8(&int___TypeInfo, v9);
    sub_1B640C8(&Method_BattleLogicNomal___c__GetConfirmCommandFunctionBuffTask_b__18_0__, v10);
    this = (BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__18_o *)sub_1B640C8(
                                                                            &BattleLogicNomal___c_TypeInfo,
                                                                            v11);
    byte_49FEFCB = 1;
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
    sub_1B64324(this);
  data = _4__this->fields.data;
  if ( !data )
    sub_1B64324(this);
  selectcommandlist = data->fields.selectcommandlist;
  v4->fields.__7__wrap1 = selectcommandlist;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields.__7__wrap1, (int32_t)selectcommandlist, v2, v3);
  v20 = v78;
  v21 = 0;
  for ( v78->fields.__7__wrap2 = 0; ; v78->fields.__7__wrap2 = v21 )
  {
    _7__wrap1 = v20->fields.__7__wrap1;
    p__7__wrap1 = (ServantStatusBattleListViewItem_o *)&v20->fields.__7__wrap1;
    v26 = _7__wrap1;
    if ( !_7__wrap1 )
      sub_1B64324(IsEnableToAttack);
    max_length = v26->max_length;
    if ( v21 >= max_length )
    {
      p__7__wrap1->klass = 0LL;
      sub_1B6406C(p__7__wrap1, 0, v18, v19);
      return 0;
    }
    if ( v21 >= (unsigned int)max_length )
      sub_1B6432C(IsEnableToAttack, v17);
    if ( !_4__this )
      sub_1B64324(IsEnableToAttack);
    v29 = v26->m_Items[v21];
    if ( !v29 )
      sub_1B64324(IsEnableToAttack);
    v30 = _4__this->fields.data;
    if ( !v30 )
      sub_1B64324(0LL);
    ServantData = BattleData__getServantData(v30, v29->fields.uniqueId, 0LL);
    IsEnableToAttack = BattleLogicNomal__IsEnableToAttack(ServantData, v29, v32);
    if ( IsEnableToAttack )
      break;
LABEL_69:
    v20 = v78;
    v21 = v78->fields.__7__wrap2 + 1;
  }
  if ( !ServantData )
    sub_1B64324(IsEnableToAttack);
  v35 = BattleServantData__EnumerateConfirmCommandFunctionSkill(ServantData, v29, 0LL);
  v36 = BattleLogicNomal___c_TypeInfo;
  if ( !BattleLogicNomal___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo);
    v36 = BattleLogicNomal___c_TypeInfo;
  }
  _9__18_0 = (System_Func_object__int__o *)v36->static_fields->__9__18_0;
  if ( !_9__18_0 )
  {
    if ( !v36->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v36);
      v36 = BattleLogicNomal___c_TypeInfo;
    }
    v38 = (Il2CppObject *)v36->static_fields->__9;
    _9__18_0 = (System_Func_object__int__o *)sub_1B64314(System_Func_BattleSkillInfoData__int__TypeInfo, v33, v34);
    System_Func_object__int____ctor(
      _9__18_0,
      v38,
      Method_BattleLogicNomal___c__GetConfirmCommandFunctionBuffTask_b__18_0__,
      0LL);
    static_fields = BattleLogicNomal___c_TypeInfo->static_fields;
    static_fields->__9__18_0 = (struct System_Func_BattleSkillInfoData__int__o *)_9__18_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__18_0, (int32_t)_9__18_0, v40, v41);
  }
  v42 = System_Linq_Enumerable__OrderBy_object__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v35,
          (System_Func_TSource__TKey__o *)_9__18_0,
          (const MethodInfo_2E630C0 *)Method_System_Linq_Enumerable_OrderBy_BattleSkillInfoData__int___);
  v43 = v42;
  if ( !v42 )
    sub_1B64324(0LL);
  klass = v42->klass;
  v45 = *(unsigned __int16 *)(&v42->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v42->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleSkillInfoData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo )
    {
      --v45;
      p_offset += 4;
      if ( !v45 )
        goto LABEL_31;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_31:
    p_method = sub_1BB60A8(v42, System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo, 0LL);
  }
  v48 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))p_method)(
          v43,
          *(_QWORD *)(p_method + 8));
  if ( !v78 )
    sub_1B64324(v48);
  v78->fields.__7__wrap3 = (struct System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *)v48;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v78->fields.__7__wrap3, v48, v49, v50);
  v52 = v78;
  v78->fields.__1__state = -3;
  while ( 1 )
  {
    _7__wrap3 = v52->fields.__7__wrap3;
    if ( !_7__wrap3 )
      sub_1B64324(v51);
    v69 = _7__wrap3->klass;
    v70 = *(unsigned __int16 *)(&_7__wrap3->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&_7__wrap3->klass->_2.bitflags2 + 3) )
    {
      v71 = &v69->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v71 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v70;
        v71 += 4;
        if ( !v70 )
          goto LABEL_65;
      }
      v72 = (__int64)&v69->vtable[*v71].method;
    }
    else
    {
LABEL_65:
      v72 = sub_1BB60A8(_7__wrap3, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *, _QWORD))v72)(
            _7__wrap3,
            *(_QWORD *)(v72 + 8)) & 1) == 0 )
    {
      BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__18____m__Finally1(v78, v73);
      v78->fields.__7__wrap3 = 0LL;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v78->fields.__7__wrap3, 0, v74, v75);
      goto LABEL_69;
    }
    v53 = v78->fields.__7__wrap3;
    if ( !v53 )
      sub_1B64324(v78);
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
      v57 = sub_1BB60A8(
              v78->fields.__7__wrap3,
              System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo,
              0LL);
    }
    v58 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *, _QWORD))v57)(
            v53,
            *(_QWORD *)(v57 + 8));
    if ( !_4__this )
      sub_1B64324(v58);
    v59 = (BattleSkillInfoData_o *)v58;
    logicskill = _4__this->fields.logicskill;
    v61 = (System_Int32_array *)sub_1B64170(int___TypeInfo, 1LL);
    if ( !v59 )
      sub_1B64324(v61);
    if ( !v61 )
      sub_1B64324(0LL);
    if ( !v61->max_length )
      sub_1B6432C(v61, v62);
    v61->m_Items[1] = v59->fields.svtUniqueId;
    if ( !logicskill )
      sub_1B64324(v61);
    v63 = BattleLogicSkill__taskSkill(logicskill, v59, v61, 0LL, 0, 0, 0, 0, 0, v77);
    v78->fields.__7__wrap4 = v63;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v78->fields.__7__wrap4, (int32_t)v63, v64, v65);
    v4 = v78;
    v23 = 0;
    v78->fields.__7__wrap5 = 0;
LABEL_57:
    _7__wrap4 = v4->fields.__7__wrap4;
    if ( !_7__wrap4 )
      sub_1B64324(this);
    v67 = _7__wrap4->max_length;
    if ( v23 < (int)v67 )
      break;
    v4->fields.__7__wrap4 = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields.__7__wrap4, 0, v2, v3);
    v52 = v78;
  }
  if ( v23 >= v67 )
    sub_1B6432C(this, method);
  v76 = _7__wrap4->m_Items[v23];
  v4->fields.__2__current = v76;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields.__2__current, (int32_t)v76, v2, v3);
  result = 1;
  v78->fields.__1__state = 1;
  return result;
}


System_Collections_Generic_IEnumerator_BattleLogicTask__o *__fastcall BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__18__System_Collections_Generic_IEnumerable_BattleLogicTask__GetEnumerator(
        BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__18_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t l__initialThreadId; // w20
  __int64 v5; // x20
  struct BattleLogicNomal_o *_4__this; // x1
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_49FEFCD & 1) == 0 )
  {
    sub_1B640C8(&BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__18_TypeInfo, method);
    byte_49FEFCD = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0LL)) )
  {
    this->fields.__1__state = 0;
  }
  else
  {
    v5 = sub_1B64314(BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__18_TypeInfo, method, v2);
    System_Object___ctor((Il2CppObject *)v5, 0LL);
    *(_DWORD *)(v5 + 16) = 0;
    *(_DWORD *)(v5 + 32) = System_Environment__get_CurrentManagedThreadId(0LL);
    _4__this = this->fields.__4__this;
    *(_QWORD *)(v5 + 40) = _4__this;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v5 + 40), (int32_t)_4__this, v7, v8);
    return (System_Collections_Generic_IEnumerator_BattleLogicTask__o *)v5;
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
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__18_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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
  struct System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *_7__wrap3; // x19
  System_Collections_Generic_IEnumerator_BattleSkillInfoData__c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0

  if ( (byte_49FEFCC & 1) == 0 )
  {
    sub_1B640C8(&System_IDisposable_TypeInfo, method);
    byte_49FEFCC = 1;
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
      p_method = sub_1BB60A8(_7__wrap3, System_IDisposable_TypeInfo, 0LL);
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
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FEFC5 & 1) == 0 )
  {
    sub_1B640C8(&BattleLogicNomal___c_TypeInfo, v1);
    byte_49FEFC5 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(BattleLogicNomal___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  BattleLogicNomal___c_TypeInfo->static_fields->__9 = (struct BattleLogicNomal___c_o *)v3;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)BattleLogicNomal___c_TypeInfo->static_fields, (int32_t)v3, v4, v5);
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
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *v4; // x19

  if ( (byte_49FEFC6 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, *(_QWORD *)&x);
    sub_1B640C8(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v3);
    byte_49FEFC6 = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo,
                                                      *(_QWORD *)&x,
                                                      method);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  return (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v4;
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
    sub_1B64324(this);
  return x->fields.priority;
}


int32_t __fastcall BattleLogicNomal___c___GetTargetCommandCodeBuffList_b__20_0(
        BattleLogicNomal___c_o *this,
        BattleBuffData_BuffData_o *a,
        BattleBuffData_BuffData_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1B64324(this);
  return a->fields.addOrder - b->fields.addOrder;
}


void __fastcall BattleLogicNomal___c___createBuffAddPlayer_b__38_0(
        BattleLogicNomal___c_o *this,
        AiNpcBattleServantData_o *npc,
        const MethodInfo *method)
{
  if ( !npc )
    sub_1B64324(this);
  BattleServantData__turnBuffProgressingIncrease((BattleServantData_o *)npc, 0LL);
}


void __fastcall BattleLogicNomal___c___taskCounterFunc_b__16_0(
        BattleLogicNomal___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
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
  __int64 v5; // x1
  BuffList_c *v6; // x0
  BattleServantData_o *actSvtData; // x20
  BuffList_ACTION_array *CommandCodeFunctionActs; // x21
  BattleBuffData_CheckInvokeBuff_o *v9; // x22

  if ( (byte_49FEFC7 & 1) == 0 )
  {
    sub_1B640C8(&BuffList_TypeInfo, targetSvtData);
    sub_1B640C8(&BattleBuffData_CheckInvokeBuff_TypeInfo, v5);
    byte_49FEFC7 = 1;
  }
  v6 = BuffList_TypeInfo;
  actSvtData = this->fields.actSvtData;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
    v6 = BuffList_TypeInfo;
  }
  CommandCodeFunctionActs = v6->static_fields->CommandCodeFunctionActs;
  v9 = (BattleBuffData_CheckInvokeBuff_o *)sub_1B64314(BattleBuffData_CheckInvokeBuff_TypeInfo, targetSvtData, method);
  BattleBuffData_CheckInvokeBuff___ctor(v9, actSvtData, targetSvtData, CommandCodeFunctionActs, 0LL);
  return v9;
}


void __fastcall BattleLogicNomal___c__DisplayClass22_0___CreateCommandBattle_b__4(
        BattleLogicNomal___c__DisplayClass22_0_o *this,
        BuffEntity_o *buffEnt,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BattleLogicNomal___c__DisplayClass22_0_o *v6; // x21
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  struct BattleLogicNomal_o *_4__this; // x8
  _QWORD *v11; // x9
  __int64 actSvtData_low; // x10
  BattleLogicNomal_c **v13; // x8

  v6 = this;
  if ( (byte_49FEFC8 & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_GetValue_BuffList_TYPE__List_BattleBuffData_BuffData____, buffEnt);
    this = (BattleLogicNomal___c__DisplayClass22_0_o *)sub_1B640C8(
                                                         &Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__,
                                                         v7);
    byte_49FEFC8 = 1;
  }
  if ( !buffEnt )
    goto LABEL_10;
  this = (BattleLogicNomal___c__DisplayClass22_0_o *)BasicHelper__GetValue_Int32Enum__object_(
                                                       (System_Collections_Generic_Dictionary_K__V__o *)v6->fields.commandCodeDict,
                                                       buffEnt->fields.type,
                                                       0LL,
                                                       (const MethodInfo_2E27CE8 *)Method_BasicHelper_GetValue_BuffList_TYPE__List_BattleBuffData_BuffData____);
  if ( !this )
    return;
  _4__this = this->fields.__4__this;
  v11 = Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__;
  ++HIDWORD(this->fields.actSvtData);
  if ( !_4__this )
LABEL_10:
    sub_1B64324(this);
  actSvtData_low = SLODWORD(this->fields.actSvtData);
  if ( (unsigned int)actSvtData_low >= LODWORD(_4__this->fields.logic) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)buff,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
  }
  else
  {
    v13 = &_4__this->klass + actSvtData_low;
    LODWORD(this->fields.actSvtData) = actSvtData_low + 1;
    v13[4] = (BattleLogicNomal_c *)buff;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v13 + 4), (int32_t)buff, v8, v9);
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
  int32_t v8; // w2
  int32_t v9; // w3
  struct BattleLogicNomal_o *_4__this; // x8
  _QWORD *v11; // x9
  __int64 actSvtData_low; // x10
  BattleLogicNomal_c **v13; // x8

  v6 = this;
  if ( (byte_49FEFC9 & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_GetValue_BuffList_TYPE__List_BattleBuffData_BuffData____, buffEnt);
    this = (BattleLogicNomal___c__DisplayClass22_0_o *)sub_1B640C8(
                                                         &Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__,
                                                         v7);
    byte_49FEFC9 = 1;
  }
  if ( !buffEnt )
    goto LABEL_10;
  this = (BattleLogicNomal___c__DisplayClass22_0_o *)BasicHelper__GetValue_Int32Enum__object_(
                                                       (System_Collections_Generic_Dictionary_K__V__o *)v6->fields.commandCodeDict,
                                                       buffEnt->fields.type,
                                                       0LL,
                                                       (const MethodInfo_2E27CE8 *)Method_BasicHelper_GetValue_BuffList_TYPE__List_BattleBuffData_BuffData____);
  if ( !this )
    return;
  _4__this = this->fields.__4__this;
  v11 = Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__;
  ++HIDWORD(this->fields.actSvtData);
  if ( !_4__this )
LABEL_10:
    sub_1B64324(this);
  actSvtData_low = SLODWORD(this->fields.actSvtData);
  if ( (unsigned int)actSvtData_low >= LODWORD(_4__this->fields.logic) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)buff,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
  }
  else
  {
    v13 = &_4__this->klass + actSvtData_low;
    LODWORD(this->fields.actSvtData) = actSvtData_low + 1;
    v13[4] = (BattleLogicNomal_c *)buff;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v13 + 4), (int32_t)buff, v8, v9);
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
    sub_1B64324(this);
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

  if ( (byte_49FEFCA & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_BattleServantData__BattleServantData___, isOnlyMain);
    byte_49FEFCA = 1;
  }
  if ( isFunctionAll || !isOnlyMain )
    p_targetSvtList = (System_Collections_Generic_IEnumerable_TSource__o **)&this->fields.targetSvtList;
  else
    p_targetSvtList = (System_Collections_Generic_IEnumerable_TSource__o **)&this->fields.mainTarget;
  return (System_Collections_Generic_IEnumerable_BattleServantData__o *)System_Linq_Enumerable__Select_object__object_(
                                                                          *p_targetSvtList,
                                                                          (System_Func_TSource__TResult__o *)this->fields.targetTo,
                                                                          (const MethodInfo_2E693AC *)Method_System_Linq_Enumerable_Select_BattleServantData__BattleServantData___);
}


BattleServantData_o *__fastcall BattleLogicNomal___c__DisplayClass22_0___CreateCommandBattle_b__8(
        BattleLogicNomal___c__DisplayClass22_0_o *this,
        int32_t id,
        const MethodInfo *method)
{
  struct BattleLogicNomal_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (this = (BattleLogicNomal___c__DisplayClass22_0_o *)_4__this->fields.data) == 0LL )
    sub_1B64324(this);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
  AiNpcBattleServantData__TurnProgress(
    npc,
    this->fields.isEndEnemyTurn,
    this->fields.fieldIndiv,
    _4__this->fields.logic,
    0LL);
}