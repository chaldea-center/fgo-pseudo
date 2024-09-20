void __fastcall BattleLogicNomal___ctor(BattleLogicNomal_o *this, const MethodInfo *method)
{
  struct BattleLogicTask_array *v3; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  BattleLogicTask_o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A5DD81 & 1) == 0 )
  {
    sub_1B885B0(&BattleLogicTask___TypeInfo);
    sub_1B885B0(&BattleLogicTask_TypeInfo);
    byte_4A5DD81 = 1;
  }
  v3 = (struct BattleLogicTask_array *)sub_1B88658(BattleLogicTask___TypeInfo, 0LL);
  this->fields.zeroTask = v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.zeroTask, (int32_t)v3, v4, v5);
  v6 = (BattleLogicTask_o *)sub_1B887FC(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v6, 0LL);
  this->fields.tmpShiftTask = v6;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.tmpShiftTask, (int32_t)v6, v7, v8);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleLogicNomal__CheckDeadEnemy(BattleLogicNomal_o *this, const MethodInfo *method)
{
  struct BattleData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_1B8880C(this, method);
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
  BattleCommandData_o *v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  BattleData_o *data; // x21
  BattleServantData_o *ServantData; // x0
  BattleServantData_o **v14; // x26
  int32_t v15; // w2
  int32_t v16; // w3
  BattleActionData_o *v17; // x22
  int32_t v18; // w2
  int32_t v19; // w3
  BattleActionData_o **v20; // x21
  int32_t v21; // w2
  int32_t v22; // w3
  struct BattleCommandData_o *command; // x1
  int32_t v24; // w2
  int32_t v25; // w3
  BattleActionData_o *v26; // x20
  int32_t v27; // w2
  int32_t v28; // w3
  struct System_String_o *motionMessage; // x1
  struct BattleData_o *v30; // x8
  int32_t v31; // w22
  Il2CppObject *v32; // x28
  System_Collections_Generic_List_object__o *v33; // x20
  int32_t v34; // w2
  int32_t v35; // w3
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  System_Collections_Generic_IEnumerable_TSource__o **v43; // x25
  int32_t AttackType; // w0
  System_Collections_Generic_IEnumerable_TSource__o *v45; // x0
  System_Collections_Generic_List_object__o **v46; // x27
  System_Collections_Generic_IEnumerable_TSource__o *v47; // x20
  System_Func_T__TResult__o *v48; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v49; // x20
  BattleLogicNomal___c_c *v50; // x8
  System_Func_object__bool__o *_9__22_9; // x24
  Il2CppObject *v52; // x22
  struct BattleLogicNomal___c_StaticFields *static_fields; // x0
  int32_t v54; // w2
  int32_t v55; // w3
  bool IsForceAttackFunctionTargetAll; // w0
  System_Collections_Generic_IEnumerable_TSource__o *v57; // x20
  BattleLogicNomal___c_c *v58; // x8
  System_Func_object__object__o *_9__22_0; // x24
  Il2CppObject *v60; // x22
  struct BattleLogicNomal___c_StaticFields *v61; // x0
  int32_t v62; // w2
  int32_t v63; // w3
  System_Func_object__object__o *v64; // x22
  __int64 v65; // x9
  System_Collections_Generic_Dictionary_object__object__o *v66; // x24
  BuffList_c *v67; // x8
  BattleLogicNomal___c_c *v68; // x0
  System_Collections_Generic_IEnumerable_TSource__o *CommandCodeBuffHash; // x20
  System_Func_T__TResult__o *_9__22_2; // x25
  Il2CppObject *v71; // x22
  struct BattleLogicNomal___c_StaticFields *v72; // x0
  int32_t v73; // w2
  int32_t v74; // w3
  System_Func_T__TResult__o *_9__22_3; // x27
  Il2CppObject *v76; // x22
  struct BattleLogicNomal___c_StaticFields *v77; // x0
  int32_t v78; // w2
  int32_t v79; // w3
  System_Collections_Generic_Dictionary_TKey__TElement__o *v80; // x0
  int32_t v81; // w2
  int32_t v82; // w3
  __int64 v83; // x8
  int64_t v84; // x20
  System_Action_object__object__o *v85; // x22
  BattleServantData_o **v86; // x26
  int64_t commandAssistId; // x20
  System_Action_object__object__o *v88; // x22
  __int64 v89; // x8
  BattleCommandData_o **v90; // x24
  int32_t v91; // w2
  int32_t v92; // w3
  __int64 v93; // x20
  int32_t v94; // w2
  int32_t v95; // w3
  System_Func_object__object__o *v96; // x20
  int32_t v97; // w2
  int32_t v98; // w3
  Il2CppObject *MasterData_object; // x25
  BattleLogicFunction_AttackSideEffectFunctionArgument_o *v100; // x23
  const MethodInfo *v101; // x5
  __int64 v102; // x9
  __int64 v103; // x8
  unsigned __int64 v104; // x22
  int v105; // w20
  int32_t v106; // w3
  System_Collections_Generic_List_BattleBuffData_BuffData__o *v107; // x28
  __int64 v108; // x8
  __int64 v109; // x20
  __int64 v110; // x9
  int *v111; // x10
  __int64 v112; // x0
  __int64 v113; // x0
  __int64 v114; // x1
  __int64 v115; // x20
  __int64 v116; // x8
  __int64 v117; // x9
  int *v118; // x10
  __int64 v119; // x0
  __int64 v120; // x8
  __int64 v121; // x9
  int *v122; // x10
  __int64 v123; // x0
  Il2CppObject *v124; // x1
  Il2CppObject *Item; // x1
  __int64 v126; // x8
  __int64 v127; // x9
  int *v128; // x10
  __int64 v129; // x0
  unsigned __int64 v130; // x10
  int v131; // w20
  int v132; // w8
  BuffList_ACTION_array *v133; // x28
  int v134; // w8
  __int64 v135; // x8
  __int64 v136; // x20
  __int64 v137; // x9
  int *v138; // x10
  __int64 v139; // x0
  __int64 v140; // x1
  __int64 v141; // x20
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
  BattleBuffData_BuffData_array *AttackSideEffectBuffList_42943084; // x0
  __int64 v153; // x1
  BattleBuffData_BuffData_array *v154; // x27
  __int64 v155; // x8
  unsigned __int64 v156; // x26
  BattleBuffData_BuffData_o *v157; // x29
  BattleLogicFunction_o *logicfunction; // x22
  BattleActionData_o *SideEffectActionData; // x0
  __int64 v160; // x1
  __int64 v161; // x8
  __int64 v162; // x9
  int *v163; // x10
  __int64 v164; // x0
  __int64 v165; // x8
  __int64 v166; // x20
  __int64 v167; // x9
  int *v168; // x10
  __int64 v169; // x0
  __int64 v170; // x0
  __int64 v171; // x1
  __int64 v172; // x20
  BattleActionData_DamageData_o *v173; // x28
  __int64 v174; // x8
  __int64 v175; // x9
  int *v176; // x10
  __int64 v177; // x0
  __int64 v178; // x8
  __int64 v179; // x9
  int *v180; // x10
  __int64 v181; // x0
  __int64 v182; // x1
  BattleServantData_o *v183; // x27
  BattleLogic_o *logic; // x0
  BattleActionData_DamageData_o *Damagelist; // x0
  __int64 v186; // x1
  BattleActionData_DamageData_o *v187; // x29
  struct BattleBuffData_o *buffData; // x8
  BattleActionData_o *v189; // x22
  BattleActionData_o *v190; // x0
  _BOOL8 v191; // x0
  __int64 v192; // x1
  __int64 v193; // x8
  __int64 v194; // x9
  int *v195; // x10
  __int64 v196; // x0
  BattleActionData_o *v197; // x20
  BattleActionData_o *v198; // x20
  BattleActionData_o *v199; // x20
  struct BattleData_o *v200; // x8
  struct BattlePerformance_o *perf; // x9
  BattleActionData_o *v202; // x20
  const MethodInfo *v203; // x5
  __int64 v204; // x9
  __int64 v205; // x8
  unsigned __int64 v206; // x26
  unsigned int v207; // w20
  int32_t v208; // w3
  System_Collections_Generic_List_BattleBuffData_BuffData__o *TargetCommandCodeBuffList; // x28
  __int64 v210; // x8
  __int64 v211; // x20
  __int64 v212; // x9
  int *v213; // x10
  __int64 v214; // x0
  __int64 v215; // x0
  __int64 v216; // x1
  __int64 v217; // x20
  __int64 v218; // x8
  __int64 v219; // x9
  int *v220; // x10
  __int64 v221; // x0
  __int64 v222; // x8
  __int64 v223; // x9
  int *v224; // x10
  __int64 v225; // x0
  Il2CppObject *v226; // x1
  Il2CppObject *v227; // x1
  __int64 v228; // x8
  __int64 v229; // x9
  int *v230; // x10
  __int64 v231; // x0
  unsigned __int64 v232; // x26
  int v233; // w20
  int v234; // w8
  BuffList_ACTION_array *v235; // x24
  int v236; // w8
  __int64 v237; // x8
  __int64 v238; // x20
  __int64 v239; // x9
  int *v240; // x10
  __int64 v241; // x0
  __int64 v242; // x1
  __int64 v243; // x20
  __int64 v244; // x8
  __int64 v245; // x9
  int *v246; // x10
  __int64 v247; // x0
  __int64 v248; // x8
  __int64 v249; // x9
  int *v250; // x10
  __int64 v251; // x0
  __int64 v252; // x1
  BattleServantData_o *v253; // x3
  BattleBuffData_BuffData_array *v254; // x0
  __int64 v255; // x1
  BattleBuffData_BuffData_array *v256; // x27
  __int64 v257; // x8
  unsigned __int64 v258; // x22
  BattleLogicFunction_o *v259; // x0
  __int64 v260; // x8
  __int64 v261; // x9
  int *v262; // x10
  __int64 v263; // x0
  __int64 v264; // x8
  __int64 v265; // x20
  __int64 v266; // x9
  int *v267; // x10
  __int64 v268; // x0
  __int64 v269; // x0
  __int64 v270; // x1
  __int64 v271; // x20
  __int64 v272; // x8
  __int64 v273; // x9
  int *v274; // x10
  __int64 v275; // x0
  __int64 v276; // x8
  __int64 v277; // x9
  int *v278; // x10
  __int64 v279; // x0
  __int64 v280; // x0
  __int64 v281; // x1
  __int64 v282; // x8
  __int64 v283; // x9
  int *v284; // x10
  __int64 v285; // x0
  _BOOL8 v286; // x0
  __int64 v287; // x1
  Il2CppObject *current; // x8
  _BYTE *monitor; // x9
  BattleData_o *v290; // x0
  BattleActionData_o *v291; // x8
  __int64 v292; // x0
  const MethodInfo *v293; // [xsp+0h] [xbp-120h]
  __int64 *v294; // [xsp+10h] [xbp-110h]
  bool v295; // [xsp+1Ch] [xbp-104h]
  BattleLogicTask_o *v296; // [xsp+20h] [xbp-100h]
  __int64 v297; // [xsp+28h] [xbp-F8h]
  int32_t targetId; // [xsp+34h] [xbp-ECh]
  System_Collections_Generic_Dictionary_BuffList_TYPE__List_BattleBuffData_BuffData___o **v299; // [xsp+38h] [xbp-E8h]
  BattleBuffData_o *v300; // [xsp+40h] [xbp-E0h]
  BattleLogic_DamageProcessArgs_o *processArgs; // [xsp+48h] [xbp-D8h]
  BattleLogic_DamageProcessArgs_o *processArgsa; // [xsp+48h] [xbp-D8h]
  Il2CppObject *v303; // [xsp+50h] [xbp-D0h]
  bool v304; // [xsp+5Ch] [xbp-C4h]
  __int64 v305; // [xsp+60h] [xbp-C0h]
  __int64 v306; // [xsp+68h] [xbp-B8h]
  BattleServantData_o **v307; // [xsp+70h] [xbp-B0h]
  BattleCommandData_o **v308; // [xsp+78h] [xbp-A8h]
  System_Collections_Generic_Dictionary_object__object__o *v309; // [xsp+80h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v310; // [xsp+88h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v311; // [xsp+A0h] [xbp-80h] BYREF

  if ( (byte_4A5DD6D & 1) == 0 )
  {
    sub_1B885B0(&BuffList_ACTION___TypeInfo);
    sub_1B885B0(&System_Action_BuffEntity__BattleBuffData_BuffData__TypeInfo);
    sub_1B885B0(&BattleLogicFunction_AttackSideEffectFunctionArgument_TypeInfo);
    sub_1B885B0(&BattleActionData_TypeInfo);
    sub_1B885B0(&BattleServantData___TypeInfo);
    sub_1B885B0(&bool___TypeInfo);
    sub_1B885B0(&BuffList_TypeInfo);
    sub_1B885B0(&BattleLogic_DamageProcessArgs_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_BattleServantData__BattleBuffData_CheckInvokeBuff__get_Item__);
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_int__BattleServantData___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToDictionary_BattleServantData__BattleServantData__BattleBuffData_CheckInvokeBuff___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToDictionary_BuffList_TYPE__BuffList_TYPE__List_BattleBuffData_BuffData____);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToList_int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_BattleServantData___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__get_Current__);
    sub_1B885B0(&System_Func_BattleServantData__BattleBuffData_CheckInvokeBuff__TypeInfo);
    sub_1B885B0(&System_Func_BattleServantData__BattleServantData__TypeInfo);
    sub_1B885B0(&System_Func_int__BattleServantData__TypeInfo);
    sub_1B885B0(&System_Func_BuffList_TYPE__BuffList_TYPE__TypeInfo);
    sub_1B885B0(&System_Func_BattleServantData__bool__TypeInfo);
    sub_1B885B0(&System_Func_BuffList_TYPE__List_BattleBuffData_BuffData___TypeInfo);
    sub_1B885B0(&System_Func_bool__bool__IEnumerable_BattleServantData___TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleServantData__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleServantData__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Remove__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleServantData___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_BattleServantData__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_BattleLogicNomal___c__CreateCommandBattle_b__22_0__);
    sub_1B885B0(&Method_BattleLogicNomal___c__CreateCommandBattle_b__22_2__);
    sub_1B885B0(&Method_BattleLogicNomal___c__CreateCommandBattle_b__22_3__);
    sub_1B885B0(&Method_BattleLogicNomal___c__CreateCommandBattle_b__22_9__);
    sub_1B885B0(&Method_BattleLogicNomal___c__DisplayClass22_0__CreateCommandBattle_b__1__);
    sub_1B885B0(&Method_BattleLogicNomal___c__DisplayClass22_0__CreateCommandBattle_b__4__);
    sub_1B885B0(&Method_BattleLogicNomal___c__DisplayClass22_0__CreateCommandBattle_b__5__);
    sub_1B885B0(&Method_BattleLogicNomal___c__DisplayClass22_0__CreateCommandBattle_b__6__);
    sub_1B885B0(&Method_BattleLogicNomal___c__DisplayClass22_0__CreateCommandBattle_b__7__);
    sub_1B885B0(&Method_BattleLogicNomal___c__DisplayClass22_0__CreateCommandBattle_b__8__);
    sub_1B885B0(&BattleLogicNomal___c__DisplayClass22_0_TypeInfo);
    sub_1B885B0(&BattleLogicNomal___c_TypeInfo);
    byte_4A5DD6D = 1;
  }
  memset(&v311, 0, sizeof(v311));
  v7 = sub_1B887FC(BattleLogicNomal___c__DisplayClass22_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    goto LABEL_370;
  *(_QWORD *)(v7 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)this, v10, v11);
  if ( !task )
    goto LABEL_370;
  data = this->fields.data;
  ActorId = BattleLogicTask__getActorId(task, 0LL);
  if ( !data )
    goto LABEL_370;
  ServantData = BattleData__getServantData(data, ActorId, 0LL);
  *(_QWORD *)(v7 + 24) = ServantData;
  v14 = (BattleServantData_o **)(v7 + 24);
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 24), (int32_t)ServantData, v15, v16);
  v17 = (BattleActionData_o *)sub_1B887FC(BattleActionData_TypeInfo);
  BattleActionData___ctor(v17, 0LL);
  *baseActionData = v17;
  sub_1B88554((ServantStatusBattleListViewItem_o *)baseActionData, (int32_t)v17, v18, v19);
  *(_QWORD *)(v7 + 48) = v17;
  v20 = (BattleActionData_o **)(v7 + 48);
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 48), (int32_t)v17, v21, v22);
  command = task->fields.command;
  *(_QWORD *)(v7 + 40) = command;
  v308 = (BattleCommandData_o **)(v7 + 40);
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 40), (int32_t)command, v24, v25);
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
  v26 = *v20;
  ActorId = BattleLogicTask__getActorId(task, 0LL);
  if ( !v26 )
    goto LABEL_370;
  v26->fields.actorId = ActorId;
  ActorId = (__int64)*v20;
  if ( !*v20 )
    goto LABEL_370;
  motionMessage = task->fields.motionMessage;
  *(_QWORD *)(ActorId + 128) = motionMessage;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(ActorId + 128), (int32_t)motionMessage, v27, v28);
  ActorId = BattleLogicTask__getTarget(task, 0LL);
  v30 = this->fields.data;
  if ( !v30 )
    goto LABEL_370;
  v31 = ActorId;
  if ( (int)ActorId <= 0 )
  {
    BattleData__setCommandAttack(this->fields.data, 0, 0, 0LL);
    return 0LL;
  }
  if ( v30->fields.leaderDown || v30->fields.endbattleFlg )
    return 0LL;
  v32 = (Il2CppObject *)BattleData__getServantData(this->fields.data, ActorId, 0LL);
  v33 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BattleServantData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v33,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BattleServantData___ctor__);
  if ( !v33 )
    goto LABEL_370;
  items = v33->fields._items;
  v37 = Method_System_Collections_Generic_List_BattleServantData__Add__;
  ++v33->fields._version;
  if ( !items )
    goto LABEL_370;
  size = v33->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v33,
      v32,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
  }
  else
  {
    v39 = &items->obj.klass + size;
    v33->fields._size = size + 1;
    v39[4] = (Il2CppClass *)v32;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v39 + 4), (int32_t)v32, v34, v35);
  }
  *(_QWORD *)(v7 + 56) = v33;
  v43 = (System_Collections_Generic_IEnumerable_TSource__o **)(v7 + 56);
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 56), (int32_t)v33, v40, v41);
  ActorId = *(_QWORD *)(v7 + 40);
  if ( !ActorId )
    goto LABEL_370;
  BattleCommandData__ResetCriticalStoreDict((BattleCommandData_o *)ActorId, 0LL);
  ActorId = (__int64)*v308;
  if ( !*v308 )
    goto LABEL_370;
  BattleCommandData__UpdateCritical(
    (BattleCommandData_o *)ActorId,
    *v14,
    (BattleServantData_o *)v32,
    this->fields.data,
    0LL);
  ActorId = (__int64)*v308;
  if ( !*v308 )
    goto LABEL_370;
  BattleCommandData__UpdateCommandType((BattleCommandData_o *)ActorId, 0LL);
  ActorId = (__int64)*v14;
  if ( !*v14 )
    goto LABEL_370;
  AttackType = BattleServantData__getAttackType((BattleServantData_o *)ActorId, *v308, 0LL);
  v295 = AttackType == 2;
  v296 = task;
  targetId = v31;
  if ( AttackType == 2 )
  {
    ActorId = (__int64)this->fields.data;
    if ( !ActorId )
      goto LABEL_370;
    ActorId = BattleData__isEnemyID((BattleData_o *)ActorId, v31, 0LL);
    if ( !this->fields.data )
      goto LABEL_370;
    v45 = (System_Collections_Generic_IEnumerable_TSource__o *)((ActorId & 1) != 0
                                                              ? BattleData__getFieldEnemyServantIDList(
                                                                  this->fields.data,
                                                                  1,
                                                                  0LL)
                                                              : BattleData__getFieldPlayerServantIDList(
                                                                  this->fields.data,
                                                                  0LL,
                                                                  0LL));
    v46 = (System_Collections_Generic_List_object__o **)(v7 + 56);
    ActorId = (__int64)System_Linq_Enumerable__ToList_int_(
                         v45,
                         (const MethodInfo_2EBBD90 *)Method_System_Linq_Enumerable_ToList_int___);
    if ( !ActorId )
      goto LABEL_370;
    v47 = (System_Collections_Generic_IEnumerable_TSource__o *)ActorId;
    System_Collections_Generic_List_int___Remove(
      (System_Collections_Generic_List_int__o *)ActorId,
      v31,
      (const MethodInfo_34E1D0C *)Method_System_Collections_Generic_List_int__Remove__);
    v48 = (System_Func_T__TResult__o *)sub_1B887FC(System_Func_int__BattleServantData__TypeInfo);
    System_Func_int__object____ctor(
      v48,
      (Il2CppObject *)v7,
      Method_BattleLogicNomal___c__DisplayClass22_0__CreateCommandBattle_b__8__,
      0LL);
    v49 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__object_(
                                                                 v47,
                                                                 (System_Func_TSource__TResult__o *)v48,
                                                                 (const MethodInfo_2EADD38 *)Method_System_Linq_Enumerable_Select_int__BattleServantData___);
    v50 = BattleLogicNomal___c_TypeInfo;
    if ( !BattleLogicNomal___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo);
      v50 = BattleLogicNomal___c_TypeInfo;
    }
    _9__22_9 = (System_Func_object__bool__o *)v50->static_fields->__9__22_9;
    if ( !_9__22_9 )
    {
      if ( !v50->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v50);
        v50 = BattleLogicNomal___c_TypeInfo;
      }
      v52 = (Il2CppObject *)v50->static_fields->__9;
      _9__22_9 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_BattleServantData__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__22_9, v52, Method_BattleLogicNomal___c__CreateCommandBattle_b__22_9__, 0LL);
      static_fields = BattleLogicNomal___c_TypeInfo->static_fields;
      static_fields->__9__22_9 = (struct System_Func_BattleServantData__bool__o *)_9__22_9;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__22_9, (int32_t)_9__22_9, v54, v55);
    }
    ActorId = (__int64)System_Linq_Enumerable__Where_object_(
                         v49,
                         (System_Func_TSource__bool__o *)_9__22_9,
                         (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_BattleServantData___);
    if ( !*v46 )
      goto LABEL_370;
    v43 = (System_Collections_Generic_IEnumerable_TSource__o **)(v7 + 56);
    System_Collections_Generic_List_object___AddRange(
      *v46,
      (System_Collections_Generic_IEnumerable_T__o *)ActorId,
      (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_BattleServantData__AddRange__);
  }
  v307 = (BattleServantData_o **)(v7 + 24);
  ActorId = (__int64)*v308;
  if ( !*v308 )
    goto LABEL_370;
  IsForceAttackFunctionTargetAll = BattleCommandData__IsForceAttackFunctionTargetAll(
                                     (BattleCommandData_o *)ActorId,
                                     0LL);
  v57 = *v43;
  v304 = IsForceAttackFunctionTargetAll;
  v58 = BattleLogicNomal___c_TypeInfo;
  if ( !BattleLogicNomal___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo);
    v58 = BattleLogicNomal___c_TypeInfo;
  }
  _9__22_0 = (System_Func_object__object__o *)v58->static_fields->__9__22_0;
  if ( !_9__22_0 )
  {
    if ( !v58->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v58);
      v58 = BattleLogicNomal___c_TypeInfo;
    }
    v60 = (Il2CppObject *)v58->static_fields->__9;
    _9__22_0 = (System_Func_object__object__o *)sub_1B887FC(System_Func_BattleServantData__BattleServantData__TypeInfo);
    System_Func_object__object____ctor(_9__22_0, v60, Method_BattleLogicNomal___c__CreateCommandBattle_b__22_0__, 0LL);
    v61 = BattleLogicNomal___c_TypeInfo->static_fields;
    v61->__9__22_0 = (struct System_Func_BattleServantData__BattleServantData__o *)_9__22_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v61->__9__22_0, (int32_t)_9__22_0, v62, v63);
  }
  v64 = (System_Func_object__object__o *)sub_1B887FC(System_Func_BattleServantData__BattleBuffData_CheckInvokeBuff__TypeInfo);
  System_Func_object__object____ctor(
    v64,
    (Il2CppObject *)v7,
    Method_BattleLogicNomal___c__DisplayClass22_0__CreateCommandBattle_b__1__,
    0LL);
  ActorId = (__int64)System_Linq_Enumerable__ToDictionary_object__object__object_(
                       v57,
                       (System_Func_TSource__TKey__o *)_9__22_0,
                       (System_Func_TSource__TElement__o *)v64,
                       (const MethodInfo_2EB8E64 *)Method_System_Linq_Enumerable_ToDictionary_BattleServantData__BattleServantData__BattleBuffData_CheckInvokeBuff___);
  v65 = *(_QWORD *)(v7 + 24);
  if ( !v65 )
    goto LABEL_370;
  v66 = (System_Collections_Generic_Dictionary_object__object__o *)ActorId;
  v67 = BuffList_TypeInfo;
  v300 = *(BattleBuffData_o **)(v65 + 792);
  if ( !BuffList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
    v67 = BuffList_TypeInfo;
  }
  v68 = BattleLogicNomal___c_TypeInfo;
  v294 = (__int64 *)v43;
  CommandCodeBuffHash = (System_Collections_Generic_IEnumerable_TSource__o *)v67->static_fields->CommandCodeBuffHash;
  if ( !BattleLogicNomal___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo);
    v68 = BattleLogicNomal___c_TypeInfo;
  }
  _9__22_2 = (System_Func_T__TResult__o *)v68->static_fields->__9__22_2;
  if ( !_9__22_2 )
  {
    if ( !v68->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v68);
      v68 = BattleLogicNomal___c_TypeInfo;
    }
    v71 = (Il2CppObject *)v68->static_fields->__9;
    _9__22_2 = (System_Func_T__TResult__o *)sub_1B887FC(System_Func_BuffList_TYPE__BuffList_TYPE__TypeInfo);
    System_Func_Int32Enum__Int32Enum____ctor(
      _9__22_2,
      v71,
      Method_BattleLogicNomal___c__CreateCommandBattle_b__22_2__,
      0LL);
    v72 = BattleLogicNomal___c_TypeInfo->static_fields;
    v72->__9__22_2 = (struct System_Func_BuffList_TYPE__BuffList_TYPE__o *)_9__22_2;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v72->__9__22_2, (int32_t)_9__22_2, v73, v74);
    v68 = BattleLogicNomal___c_TypeInfo;
  }
  if ( !v68->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v68);
    v68 = BattleLogicNomal___c_TypeInfo;
  }
  _9__22_3 = (System_Func_T__TResult__o *)v68->static_fields->__9__22_3;
  if ( !_9__22_3 )
  {
    if ( !v68->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v68);
      v68 = BattleLogicNomal___c_TypeInfo;
    }
    v76 = (Il2CppObject *)v68->static_fields->__9;
    _9__22_3 = (System_Func_T__TResult__o *)sub_1B887FC(System_Func_BuffList_TYPE__List_BattleBuffData_BuffData___TypeInfo);
    System_Func_Int32Enum__object____ctor(
      _9__22_3,
      v76,
      Method_BattleLogicNomal___c__CreateCommandBattle_b__22_3__,
      0LL);
    v77 = BattleLogicNomal___c_TypeInfo->static_fields;
    v77->__9__22_3 = (struct System_Func_BuffList_TYPE__List_BattleBuffData_BuffData___o *)_9__22_3;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v77->__9__22_3, (int32_t)_9__22_3, v78, v79);
  }
  v309 = v66;
  v80 = System_Linq_Enumerable__ToDictionary_Int32Enum__Int32Enum__object_(
          CommandCodeBuffHash,
          (System_Func_TSource__TKey__o *)_9__22_2,
          (System_Func_TSource__TElement__o *)_9__22_3,
          (const MethodInfo_2EB8C6C *)Method_System_Linq_Enumerable_ToDictionary_BuffList_TYPE__BuffList_TYPE__List_BattleBuffData_BuffData____);
  *(_QWORD *)(v7 + 32) = v80;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 32), (int32_t)v80, v81, v82);
  v83 = *(_QWORD *)(v7 + 40);
  v299 = (System_Collections_Generic_Dictionary_BuffList_TYPE__List_BattleBuffData_BuffData___o **)(v7 + 32);
  if ( !v83 )
    goto LABEL_370;
  v84 = *(_QWORD *)(v83 + 72);
  v85 = (System_Action_object__object__o *)sub_1B887FC(System_Action_BuffEntity__BattleBuffData_BuffData__TypeInfo);
  System_Action_object__object____ctor(
    v85,
    (Il2CppObject *)v7,
    Method_BattleLogicNomal___c__DisplayClass22_0__CreateCommandBattle_b__4__,
    0LL);
  v86 = (BattleServantData_o **)(v7 + 24);
  if ( !v300 )
    goto LABEL_370;
  BattleBuffData__SetCommandCodeBuffActiveFlg(
    v300,
    v84,
    (System_Action_BuffEntity__BattleBuffData_BuffData__o *)v85,
    1,
    0LL);
  if ( !*v308 )
    goto LABEL_370;
  commandAssistId = (*v308)->fields.commandAssistId;
  v88 = (System_Action_object__object__o *)sub_1B887FC(System_Action_BuffEntity__BattleBuffData_BuffData__TypeInfo);
  System_Action_object__object____ctor(
    v88,
    (Il2CppObject *)v7,
    Method_BattleLogicNomal___c__DisplayClass22_0__CreateCommandBattle_b__5__,
    0LL);
  v89 = *(_QWORD *)(v7 + 40);
  if ( !v89 )
    goto LABEL_370;
  BattleBuffData__SetCommandAssistBuffActiveFlg(
    v300,
    commandAssistId,
    (System_Action_BuffEntity__BattleBuffData_BuffData__o *)v88,
    1,
    *(_DWORD *)(v89 + 88),
    0LL);
  ActorId = sub_1B88658(bool___TypeInfo, 2LL);
  v90 = (BattleCommandData_o **)(v7 + 40);
  if ( !ActorId )
    goto LABEL_370;
  if ( !*(_DWORD *)(ActorId + 24) )
    goto LABEL_371;
  v306 = ActorId;
  *(_BYTE *)(ActorId + 32) = 1;
  ActorId = sub_1B88658(BattleServantData___TypeInfo, 1LL);
  if ( !ActorId )
    goto LABEL_370;
  v93 = ActorId;
  if ( v32 )
  {
    ActorId = sub_1B886EC(v32, *(_QWORD *)(*(_QWORD *)ActorId + 64LL));
    if ( !ActorId )
    {
      v292 = sub_1B88830(0LL);
      sub_1B886D8(v292, 0LL);
    }
  }
  if ( !*(_DWORD *)(v93 + 24) )
    goto LABEL_371;
  *(_QWORD *)(v93 + 32) = v32;
  v303 = v32;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v93 + 32), (int32_t)v32, v91, v92);
  *(_QWORD *)(v7 + 72) = v93;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 72), v93, v94, v95);
  v96 = (System_Func_object__object__o *)sub_1B887FC(System_Func_BattleServantData__BattleServantData__TypeInfo);
  System_Func_object__object____ctor(
    v96,
    (Il2CppObject *)v7,
    Method_BattleLogicNomal___c__DisplayClass22_0__CreateCommandBattle_b__6__,
    0LL);
  *(_QWORD *)(v7 + 64) = v96;
  v297 = v7 + 64;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 64), (int32_t)v96, v97, v98);
  v305 = sub_1B887FC(System_Func_bool__bool__IEnumerable_BattleServantData___TypeInfo);
  System_Func_bool__bool__object____ctor(
    (System_Func_T1__T2__TResult__o *)v305,
    (Il2CppObject *)v7,
    Method_BattleLogicNomal___c__DisplayClass22_0__CreateCommandBattle_b__7__,
    0LL);
  ActorId = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !ActorId )
    goto LABEL_370;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)ActorId,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  v100 = (BattleLogicFunction_AttackSideEffectFunctionArgument_o *)sub_1B887FC(BattleLogicFunction_AttackSideEffectFunctionArgument_TypeInfo);
  BattleLogicFunction_AttackSideEffectFunctionArgument___ctor(v100, 0LL);
  v102 = v306;
  v103 = *(_QWORD *)(v306 + 24);
  if ( (int)v103 >= 1 )
  {
    v104 = 0LL;
    do
    {
      if ( v104 >= (unsigned int)v103 )
        goto LABEL_371;
      v105 = *(unsigned __int8 *)(v102 + v104 + 32);
      if ( *(_BYTE *)(v102 + v104 + 32) )
        v106 = 177;
      else
        v106 = 138;
      ActorId = (__int64)BattleLogicNomal__GetTargetCommandCodeBuffList(
                           (BattleLogicNomal_o *)ActorId,
                           *v299,
                           v300,
                           v106,
                           *v308,
                           v101);
      if ( !v305 )
        goto LABEL_370;
      v107 = (System_Collections_Generic_List_BattleBuffData_BuffData__o *)ActorId;
      ActorId = (*(__int64 (__fastcall **)(_QWORD, bool, bool, _QWORD))(v305 + 24))(
                  *(_QWORD *)(v305 + 64),
                  v105 != 0,
                  v304,
                  *(_QWORD *)(v305 + 40));
      if ( !ActorId )
        goto LABEL_370;
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
            goto LABEL_86;
        }
        v112 = v108 + 16LL * *v111 + 312;
      }
      else
      {
LABEL_86:
        v112 = sub_1BDA590(ActorId, System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, 0LL);
      }
      v113 = (*(__int64 (__fastcall **)(__int64, _QWORD))v112)(v109, *(_QWORD *)(v112 + 8));
      v115 = v113;
      while ( 1 )
      {
        if ( !v115 )
          sub_1B8880C(v113, v114);
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
              goto LABEL_94;
          }
          v119 = v116 + 16LL * *v118 + 312;
        }
        else
        {
LABEL_94:
          v119 = sub_1BDA590(v115, System_Collections_IEnumerator_TypeInfo, 0LL);
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
              goto LABEL_101;
          }
          v123 = v120 + 16LL * *v122 + 312;
        }
        else
        {
LABEL_101:
          v123 = sub_1BDA590(v115, System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, 0LL);
        }
        v124 = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64, _QWORD))v123)(v115, *(_QWORD *)(v123 + 8));
        if ( !v309 )
          sub_1B8880C(0LL, v124);
        Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                 v309,
                 v124,
                 (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_BattleServantData__BattleBuffData_CheckInvokeBuff__get_Item__);
        BattleLogicNomal__commandCodeBuffProcess(
          this,
          (BattleBuffData_CheckInvokeBuff_o *)Item,
          (SkillLvMaster_o *)MasterData_object,
          *v308,
          v107,
          *v20,
          0,
          v100,
          v293);
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
            goto LABEL_109;
        }
        v129 = v126 + 16LL * *v128 + 312;
      }
      else
      {
LABEL_109:
        v129 = sub_1BDA590(v115, System_IDisposable_TypeInfo, 0LL);
      }
      ActorId = (*(__int64 (__fastcall **)(__int64, _QWORD))v129)(v115, *(_QWORD *)(v129 + 8));
      v102 = v306;
      LODWORD(v103) = *(_DWORD *)(v306 + 24);
      ++v104;
    }
    while ( (__int64)v104 < (int)v103 );
    if ( (int)v103 >= 1 )
    {
      v130 = 0LL;
      while ( v130 < (unsigned int)v103 )
      {
        processArgs = (BattleLogic_DamageProcessArgs_o *)v130;
        v131 = *(unsigned __int8 *)(v102 + v130 + 32);
        ActorId = sub_1B88658(BuffList_ACTION___TypeInfo, 2LL);
        if ( !ActorId )
          goto LABEL_370;
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
        ActorId = (*(__int64 (__fastcall **)(_QWORD, bool, bool, _QWORD))(v305 + 24))(
                    *(_QWORD *)(v305 + 64),
                    v131 != 0,
                    v304,
                    *(_QWORD *)(v305 + 40));
        if ( !ActorId )
          goto LABEL_370;
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
              goto LABEL_131;
          }
          v139 = v135 + 16LL * *v138 + 312;
        }
        else
        {
LABEL_131:
          v139 = sub_1BDA590(ActorId, System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, 0LL);
        }
        v141 = (*(__int64 (__fastcall **)(__int64, _QWORD))v139)(v136, *(_QWORD *)(v139 + 8));
        if ( !v141 )
          sub_1B8880C(0LL, v140);
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
                goto LABEL_138;
            }
            v86 = v307;
            v90 = v308;
            v145 = v142 + 16LL * *v144 + 312;
          }
          else
          {
LABEL_138:
            v86 = v307;
            v90 = v308;
            v145 = sub_1BDA590(v141, System_Collections_IEnumerator_TypeInfo, 0LL);
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
                goto LABEL_145;
            }
            v149 = v146 + 16LL * *v148 + 312;
          }
          else
          {
LABEL_145:
            v149 = sub_1BDA590(v141, System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, 0LL);
          }
          v151 = (BattleServantData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v149)(v141, *(_QWORD *)(v149 + 8));
          if ( !*v86 )
            sub_1B8880C(0LL, v150);
          AttackSideEffectBuffList_42943084 = BattleServantData__getAttackSideEffectBuffList_42943084(
                                                *v86,
                                                v133,
                                                *v90,
                                                v151,
                                                0LL);
          v154 = AttackSideEffectBuffList_42943084;
          if ( !AttackSideEffectBuffList_42943084 )
            sub_1B8880C(0LL, v153);
          v155 = *(_QWORD *)&AttackSideEffectBuffList_42943084->max_length;
          if ( (int)v155 >= 1 )
          {
            v156 = 0LL;
            do
            {
              if ( v156 >= (unsigned int)v155 )
                sub_1B88814(AttackSideEffectBuffList_42943084, v153);
              if ( !*v20 )
                sub_1B8880C(0LL, v153);
              v157 = v154->m_Items[v156];
              logicfunction = this->fields.logicfunction;
              SideEffectActionData = BattleActionData__MakeSideEffectActionData(*v20, 3, 0LL);
              if ( !logicfunction )
                sub_1B8880C(SideEffectActionData, v160);
              BattleLogicFunction__SetSideEffectBuff(
                logicfunction,
                (SkillLvMaster_o *)MasterData_object,
                SideEffectActionData,
                v157,
                (BattleLogicFunction_CommonSideEffectFunctionArgument_o *)v100,
                0,
                0LL);
              LODWORD(v155) = v154->max_length;
              ++v156;
            }
            while ( (__int64)v156 < (int)v155 );
          }
        }
        v161 = *(_QWORD *)v141;
        v162 = *(unsigned __int16 *)(*(_QWORD *)v141 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v141 + 302LL) )
        {
          v163 = (int *)(*(_QWORD *)(v161 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v163 - 1) != System_IDisposable_TypeInfo )
          {
            --v162;
            v163 += 4;
            if ( !v162 )
              goto LABEL_160;
          }
          v164 = v161 + 16LL * *v163 + 312;
        }
        else
        {
LABEL_160:
          v164 = sub_1BDA590(v141, System_IDisposable_TypeInfo, 0LL);
        }
        ActorId = (*(__int64 (__fastcall **)(__int64, _QWORD))v164)(v141, *(_QWORD *)(v164 + 8));
        v102 = v306;
        LODWORD(v103) = *(_DWORD *)(v306 + 24);
        v130 = (unsigned __int64)&processArgs->klass + 1;
        if ( (__int64)&processArgs->klass + 1 >= (int)v103 )
          goto LABEL_170;
      }
LABEL_371:
      sub_1B88814(ActorId, v9);
    }
  }
LABEL_170:
  processArgsa = (BattleLogic_DamageProcessArgs_o *)sub_1B887FC(BattleLogic_DamageProcessArgs_TypeInfo);
  BattleLogic_DamageProcessArgs___ctor(processArgsa, 1, -1, 0LL);
  if ( !v305 )
    goto LABEL_370;
  ActorId = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v305 + 24))(
              *(_QWORD *)(v305 + 64),
              0LL,
              0LL,
              *(_QWORD *)(v305 + 40));
  if ( !ActorId )
    goto LABEL_370;
  v165 = *(_QWORD *)ActorId;
  v166 = ActorId;
  v167 = *(unsigned __int16 *)(*(_QWORD *)ActorId + 302LL);
  if ( *(_WORD *)(*(_QWORD *)ActorId + 302LL) )
  {
    v168 = (int *)(*(_QWORD *)(v165 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)v168 - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
    {
      --v167;
      v168 += 4;
      if ( !v167 )
        goto LABEL_176;
    }
    v169 = v165 + 16LL * *v168 + 312;
  }
  else
  {
LABEL_176:
    v169 = sub_1BDA590(ActorId, System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, 0LL);
  }
  v170 = (*(__int64 (__fastcall **)(__int64, _QWORD))v169)(v166, *(_QWORD *)(v169 + 8));
  v172 = v170;
  v173 = 0LL;
  while ( 1 )
  {
    if ( !v172 )
      sub_1B8880C(v170, v171);
    v174 = *(_QWORD *)v172;
    v175 = *(unsigned __int16 *)(*(_QWORD *)v172 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v172 + 302LL) )
    {
      v176 = (int *)(*(_QWORD *)(v174 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v176 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v175;
        v176 += 4;
        if ( !v175 )
          goto LABEL_184;
      }
      v177 = v174 + 16LL * *v176 + 312;
    }
    else
    {
LABEL_184:
      v177 = sub_1BDA590(v172, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v177)(v172, *(_QWORD *)(v177 + 8)) & 1) == 0 )
      break;
    v178 = *(_QWORD *)v172;
    v179 = *(unsigned __int16 *)(*(_QWORD *)v172 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v172 + 302LL) )
    {
      v180 = (int *)(*(_QWORD *)(v178 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v180 - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
      {
        --v179;
        v180 += 4;
        if ( !v179 )
          goto LABEL_191;
      }
      v181 = v178 + 16LL * *v180 + 312;
    }
    else
    {
LABEL_191:
      v181 = sub_1BDA590(v172, System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, 0LL);
    }
    v183 = (BattleServantData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v181)(v172, *(_QWORD *)(v181 + 8));
    logic = this->fields.logic;
    if ( !logic )
      sub_1B8880C(0LL, v182);
    Damagelist = BattleLogic__getDamagelist(logic, *v86, v183, *v90, processArgsa, 0LL);
    v187 = Damagelist;
    if ( v183 == (BattleServantData_o *)v303 )
      v173 = Damagelist;
    if ( !v183 )
      sub_1B8880C(Damagelist, v186);
    buffData = v183->fields.buffData;
    if ( !buffData )
      sub_1B8880C(Damagelist, v186);
    if ( !buffData->fields.isNoDamage )
    {
      v189 = *v20;
      v190 = BattleBuffData__UseProgressingDoNotAct(v183->fields.buffData, v183, 0, 0LL);
      if ( !v189 )
        sub_1B8880C(v190, v190);
      BattleActionData__addSideEffectActionData(v189, v190, 1, 0LL);
    }
    if ( !*v86 )
      sub_1B8880C(0LL, v186);
    v191 = BattleServantData__checkPlayer(*v86, 0LL);
    if ( v191 )
    {
      if ( !*v86 )
        sub_1B8880C(v191, v192);
      v183->fields.overkillTargetId = (*v86)->fields.uniqueId;
    }
    if ( !*v20 )
      sub_1B8880C(0LL, v192);
    BattleActionData__setDamageData(*v20, v187, 0LL, 0, 0, 0LL);
  }
  v193 = *(_QWORD *)v172;
  v194 = *(unsigned __int16 *)(*(_QWORD *)v172 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v172 + 302LL) )
  {
    v195 = (int *)(*(_QWORD *)(v193 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v195 - 1) != System_IDisposable_TypeInfo )
    {
      --v194;
      v195 += 4;
      if ( !v194 )
        goto LABEL_211;
    }
    v196 = v193 + 16LL * *v195 + 312;
  }
  else
  {
LABEL_211:
    v196 = sub_1BDA590(v172, System_IDisposable_TypeInfo, 0LL);
  }
  ActorId = (*(__int64 (__fastcall **)(__int64, _QWORD))v196)(v172, *(_QWORD *)(v196 + 8));
  if ( !*(_QWORD *)v297 )
    goto LABEL_370;
  (*(void (__fastcall **)(_QWORD, Il2CppObject *, _QWORD))(*(_QWORD *)v297 + 24LL))(
    *(_QWORD *)(*(_QWORD *)v297 + 64LL),
    v303,
    *(_QWORD *)(*(_QWORD *)v297 + 40LL));
  ActorId = (__int64)*v90;
  if ( !*v90 )
    goto LABEL_370;
  v197 = *v20;
  ActorId = BattleCommandData__get_type((BattleCommandData_o *)ActorId, 0LL);
  if ( !v197 )
    goto LABEL_370;
  v197->fields.type = ActorId;
  ActorId = (__int64)*v20;
  if ( !*v20 )
    goto LABEL_370;
  BattleActionData__setCommand((BattleActionData_o *)ActorId, *v90, 0LL);
  v9 = *v90;
  if ( !*v90 )
    goto LABEL_370;
  v198 = *v20;
  if ( !*v20 )
    goto LABEL_370;
  v198->fields.actionIndex = v9->fields.actionIndex;
  ActorId = (__int64)*v86;
  if ( !*v86 )
    goto LABEL_370;
  ActorId = BattleServantData__getMotionId((BattleServantData_o *)ActorId, v9, 0LL);
  v198->fields.motionId = ActorId;
  if ( !v173 )
    goto LABEL_370;
  v199 = *v20;
  ActorId = BattleActionData_DamageData__getAttackCount(v173, 0LL);
  if ( !v199 )
    goto LABEL_370;
  v199->fields.attackcount = ActorId;
  v200 = this->fields.data;
  if ( !v200 )
    goto LABEL_370;
  perf = v200->fields.perf;
  if ( !perf )
    goto LABEL_370;
  if ( !*v90 )
    goto LABEL_370;
  ActorId = (__int64)perf->fields.commandPerf;
  if ( !ActorId )
    goto LABEL_370;
  BattlePerformanceCommandCard__UpdateRemainingCardBuff(
    (BattlePerformanceCommandCard_o *)ActorId,
    (*v90)->fields.actionIndex,
    0LL);
  if ( !*v86 )
    goto LABEL_370;
  ActorId = (__int64)this->fields.data;
  if ( !ActorId )
    goto LABEL_370;
  v202 = *v20;
  ActorId = BattleData__isPrevAttackMe((BattleData_o *)ActorId, (*v86)->fields.uniqueId, targetId, 0LL);
  if ( !v202 )
    goto LABEL_370;
  v204 = v306;
  v202->fields.prevattackme = ActorId & 1;
  v205 = *(_QWORD *)(v306 + 24);
  if ( (int)v205 >= 1 )
  {
    v206 = 0LL;
    do
    {
      if ( v206 >= (unsigned int)v205 )
        goto LABEL_371;
      v207 = *(unsigned __int8 *)(v204 + v206 + 32);
      if ( *(_BYTE *)(v204 + v206 + 32) )
        v208 = 178;
      else
        v208 = 159;
      TargetCommandCodeBuffList = BattleLogicNomal__GetTargetCommandCodeBuffList(
                                    (BattleLogicNomal_o *)ActorId,
                                    *v299,
                                    v300,
                                    v208,
                                    *v308,
                                    v203);
      ActorId = (*(__int64 (__fastcall **)(_QWORD, _QWORD, bool, _QWORD))(v305 + 24))(
                  *(_QWORD *)(v305 + 64),
                  v207,
                  v304,
                  *(_QWORD *)(v305 + 40));
      if ( !ActorId )
        goto LABEL_370;
      v210 = *(_QWORD *)ActorId;
      v211 = ActorId;
      v212 = *(unsigned __int16 *)(*(_QWORD *)ActorId + 302LL);
      if ( *(_WORD *)(*(_QWORD *)ActorId + 302LL) )
      {
        v213 = (int *)(*(_QWORD *)(v210 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)v213 - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
        {
          --v212;
          v213 += 4;
          if ( !v212 )
            goto LABEL_240;
        }
        v214 = v210 + 16LL * *v213 + 312;
      }
      else
      {
LABEL_240:
        v214 = sub_1BDA590(ActorId, System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, 0LL);
      }
      v215 = (*(__int64 (__fastcall **)(__int64, _QWORD))v214)(v211, *(_QWORD *)(v214 + 8));
      v217 = v215;
      while ( 1 )
      {
        if ( !v217 )
          sub_1B8880C(v215, v216);
        v218 = *(_QWORD *)v217;
        v219 = *(unsigned __int16 *)(*(_QWORD *)v217 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v217 + 302LL) )
        {
          v220 = (int *)(*(_QWORD *)(v218 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v220 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v219;
            v220 += 4;
            if ( !v219 )
              goto LABEL_248;
          }
          v221 = v218 + 16LL * *v220 + 312;
        }
        else
        {
LABEL_248:
          v221 = sub_1BDA590(v217, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v221)(v217, *(_QWORD *)(v221 + 8)) & 1) == 0 )
          break;
        v222 = *(_QWORD *)v217;
        v223 = *(unsigned __int16 *)(*(_QWORD *)v217 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v217 + 302LL) )
        {
          v224 = (int *)(*(_QWORD *)(v222 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v224 - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
          {
            --v223;
            v224 += 4;
            if ( !v223 )
              goto LABEL_255;
          }
          v225 = v222 + 16LL * *v224 + 312;
        }
        else
        {
LABEL_255:
          v225 = sub_1BDA590(v217, System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, 0LL);
        }
        v226 = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64, _QWORD))v225)(v217, *(_QWORD *)(v225 + 8));
        if ( !v309 )
          sub_1B8880C(0LL, v226);
        v227 = System_Collections_Generic_Dictionary_object__object___get_Item(
                 v309,
                 v226,
                 (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_BattleServantData__BattleBuffData_CheckInvokeBuff__get_Item__);
        BattleLogicNomal__commandCodeBuffProcess(
          this,
          (BattleBuffData_CheckInvokeBuff_o *)v227,
          (SkillLvMaster_o *)MasterData_object,
          *v308,
          TargetCommandCodeBuffList,
          *v20,
          1,
          v100,
          v293);
      }
      v228 = *(_QWORD *)v217;
      v229 = *(unsigned __int16 *)(*(_QWORD *)v217 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v217 + 302LL) )
      {
        v230 = (int *)(*(_QWORD *)(v228 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v230 - 1) != System_IDisposable_TypeInfo )
        {
          --v229;
          v230 += 4;
          if ( !v229 )
            goto LABEL_263;
        }
        v231 = v228 + 16LL * *v230 + 312;
      }
      else
      {
LABEL_263:
        v231 = sub_1BDA590(v217, System_IDisposable_TypeInfo, 0LL);
      }
      ActorId = (*(__int64 (__fastcall **)(__int64, _QWORD))v231)(v217, *(_QWORD *)(v231 + 8));
      v204 = v306;
      LODWORD(v205) = *(_DWORD *)(v306 + 24);
      ++v206;
    }
    while ( (__int64)v206 < (int)v205 );
    if ( (int)v205 >= 1 )
    {
      v232 = 0LL;
      while ( v232 < (unsigned int)v205 )
      {
        v233 = *(unsigned __int8 *)(v204 + v232 + 32);
        ActorId = sub_1B88658(BuffList_ACTION___TypeInfo, 2LL);
        if ( !ActorId )
          goto LABEL_370;
        v234 = *(_DWORD *)(ActorId + 24);
        v235 = (BuffList_ACTION_array *)ActorId;
        if ( v233 )
        {
          if ( !v234 )
            goto LABEL_371;
          *(_DWORD *)(ActorId + 32) = 119;
          if ( v234 == 1 )
            goto LABEL_371;
          v236 = 121;
        }
        else
        {
          if ( !v234 )
            goto LABEL_371;
          *(_DWORD *)(ActorId + 32) = 57;
          if ( v234 == 1 )
            goto LABEL_371;
          v236 = 80;
        }
        *(_DWORD *)(ActorId + 36) = v236;
        ActorId = (*(__int64 (__fastcall **)(_QWORD, bool, bool, _QWORD))(v305 + 24))(
                    *(_QWORD *)(v305 + 64),
                    v233 != 0,
                    v304,
                    *(_QWORD *)(v305 + 40));
        if ( !ActorId )
          goto LABEL_370;
        v237 = *(_QWORD *)ActorId;
        v238 = ActorId;
        v239 = *(unsigned __int16 *)(*(_QWORD *)ActorId + 302LL);
        if ( *(_WORD *)(*(_QWORD *)ActorId + 302LL) )
        {
          v240 = (int *)(*(_QWORD *)(v237 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)v240 - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
          {
            --v239;
            v240 += 4;
            if ( !v239 )
              goto LABEL_285;
          }
          v241 = v237 + 16LL * *v240 + 312;
        }
        else
        {
LABEL_285:
          v241 = sub_1BDA590(ActorId, System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, 0LL);
        }
        v243 = (*(__int64 (__fastcall **)(__int64, _QWORD))v241)(v238, *(_QWORD *)(v241 + 8));
        if ( !v243 )
          sub_1B8880C(0LL, v242);
        while ( 1 )
        {
          v244 = *(_QWORD *)v243;
          v245 = *(unsigned __int16 *)(*(_QWORD *)v243 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v243 + 302LL) )
          {
            v246 = (int *)(*(_QWORD *)(v244 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v246 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v245;
              v246 += 4;
              if ( !v245 )
                goto LABEL_292;
            }
            v247 = v244 + 16LL * *v246 + 312;
          }
          else
          {
LABEL_292:
            v247 = sub_1BDA590(v243, System_Collections_IEnumerator_TypeInfo, 0LL);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v247)(v243, *(_QWORD *)(v247 + 8)) & 1) == 0 )
            break;
          v248 = *(_QWORD *)v243;
          v249 = *(unsigned __int16 *)(*(_QWORD *)v243 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v243 + 302LL) )
          {
            v250 = (int *)(*(_QWORD *)(v248 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v250 - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
            {
              --v249;
              v250 += 4;
              if ( !v249 )
                goto LABEL_299;
            }
            v251 = v248 + 16LL * *v250 + 312;
          }
          else
          {
LABEL_299:
            v251 = sub_1BDA590(v243, System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, 0LL);
          }
          v253 = (BattleServantData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v251)(v243, *(_QWORD *)(v251 + 8));
          if ( !*v307 )
            sub_1B8880C(0LL, v252);
          v254 = BattleServantData__getAttackSideEffectBuffList_42943084(*v307, v235, *v308, v253, 0LL);
          v256 = v254;
          if ( !v254 )
            sub_1B8880C(0LL, v255);
          v257 = *(_QWORD *)&v254->max_length;
          if ( (int)v257 >= 1 )
          {
            v258 = 0LL;
            do
            {
              if ( v258 >= (unsigned int)v257 )
                sub_1B88814(v254, v255);
              v259 = this->fields.logicfunction;
              if ( !v259 )
                sub_1B8880C(0LL, v255);
              BattleLogicFunction__SetSideEffectBuff(
                v259,
                (SkillLvMaster_o *)MasterData_object,
                *v20,
                v256->m_Items[v258],
                (BattleLogicFunction_CommonSideEffectFunctionArgument_o *)v100,
                1,
                0LL);
              LODWORD(v257) = v256->max_length;
              ++v258;
            }
            while ( (__int64)v258 < (int)v257 );
          }
        }
        v260 = *(_QWORD *)v243;
        v261 = *(unsigned __int16 *)(*(_QWORD *)v243 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v243 + 302LL) )
        {
          v262 = (int *)(*(_QWORD *)(v260 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v262 - 1) != System_IDisposable_TypeInfo )
          {
            --v261;
            v262 += 4;
            if ( !v261 )
              goto LABEL_313;
          }
          v263 = v260 + 16LL * *v262 + 312;
        }
        else
        {
LABEL_313:
          v263 = sub_1BDA590(v243, System_IDisposable_TypeInfo, 0LL);
        }
        ActorId = (*(__int64 (__fastcall **)(__int64, _QWORD))v263)(v243, *(_QWORD *)(v263 + 8));
        v204 = v306;
        LODWORD(v205) = *(_DWORD *)(v306 + 24);
        if ( (__int64)++v232 >= (int)v205 )
          goto LABEL_322;
      }
      goto LABEL_371;
    }
  }
LABEL_322:
  ActorId = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v305 + 24))(
              *(_QWORD *)(v305 + 64),
              0LL,
              0LL,
              *(_QWORD *)(v305 + 40));
  if ( !ActorId )
    goto LABEL_370;
  v264 = *(_QWORD *)ActorId;
  v265 = ActorId;
  v266 = *(unsigned __int16 *)(*(_QWORD *)ActorId + 302LL);
  if ( *(_WORD *)(*(_QWORD *)ActorId + 302LL) )
  {
    v267 = (int *)(*(_QWORD *)(v264 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)v267 - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
    {
      --v266;
      v267 += 4;
      if ( !v266 )
        goto LABEL_327;
    }
    v268 = v264 + 16LL * *v267 + 312;
  }
  else
  {
LABEL_327:
    v268 = sub_1BDA590(ActorId, System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, 0LL);
  }
  v269 = (*(__int64 (__fastcall **)(__int64, _QWORD))v268)(v265, *(_QWORD *)(v268 + 8));
  v271 = v269;
  while ( 1 )
  {
    if ( !v271 )
      sub_1B8880C(v269, v270);
    v272 = *(_QWORD *)v271;
    v273 = *(unsigned __int16 *)(*(_QWORD *)v271 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v271 + 302LL) )
    {
      v274 = (int *)(*(_QWORD *)(v272 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v274 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v273;
        v274 += 4;
        if ( !v273 )
          goto LABEL_335;
      }
      v275 = v272 + 16LL * *v274 + 312;
    }
    else
    {
LABEL_335:
      v275 = sub_1BDA590(v271, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v275)(v271, *(_QWORD *)(v275 + 8)) & 1) == 0 )
      break;
    v276 = *(_QWORD *)v271;
    v277 = *(unsigned __int16 *)(*(_QWORD *)v271 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v271 + 302LL) )
    {
      v278 = (int *)(*(_QWORD *)(v276 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v278 - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
      {
        --v277;
        v278 += 4;
        if ( !v277 )
          goto LABEL_342;
      }
      v279 = v276 + 16LL * *v278 + 312;
    }
    else
    {
LABEL_342:
      v279 = sub_1BDA590(v271, System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, 0LL);
    }
    v280 = (*(__int64 (__fastcall **)(__int64, _QWORD))v279)(v271, *(_QWORD *)(v279 + 8));
    if ( !*v307 )
      sub_1B8880C(v280, v281);
    if ( !v280 )
      sub_1B8880C(0LL, v281);
    if ( !this->fields.logic )
      sub_1B8880C(v280, v281);
    v269 = BattleLogic__setDamageSideEffect(
             this->fields.logic,
             *v20,
             (*v307)->fields.uniqueId,
             *(_DWORD *)(v280 + 24),
             *v308,
             0LL);
  }
  v282 = *(_QWORD *)v271;
  v283 = *(unsigned __int16 *)(*(_QWORD *)v271 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v271 + 302LL) )
  {
    v284 = (int *)(*(_QWORD *)(v282 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v284 - 1) != System_IDisposable_TypeInfo )
    {
      --v283;
      v284 += 4;
      if ( !v283 )
        goto LABEL_352;
    }
    v285 = v282 + 16LL * *v284 + 312;
  }
  else
  {
LABEL_352:
    v285 = sub_1BDA590(v271, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v285)(v271, *(_QWORD *)(v285 + 8));
  ActorId = *v294;
  if ( !*v294 )
    goto LABEL_370;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v310,
    (System_Collections_Generic_List_object__o *)ActorId,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
  v311 = v310;
  while ( 1 )
  {
    v286 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v311,
             (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    if ( !v286 )
      break;
    current = v311.fields._current;
    if ( !v311.fields._current )
      sub_1B8880C(v286, v287);
    monitor = v311.fields._current[49].monitor;
    if ( !monitor )
      sub_1B8880C(v286, v287);
    monitor[152] = 0;
    if ( v296->fields.isCanCounterTask )
    {
      if ( !*v307 )
        sub_1B8880C(v286, v287);
      v290 = this->fields.data;
      if ( !v290 )
        sub_1B8880C(0LL, v287);
      BattleData__SetWasAttackTargetId(v290, (*v307)->fields.uniqueId, (int32_t)current[1].monitor, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v311,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
  if ( !*(_QWORD *)v297 )
    goto LABEL_370;
  ActorId = (*(__int64 (__fastcall **)(_QWORD, Il2CppObject *, _QWORD))(*(_QWORD *)v297 + 24LL))(
              *(_QWORD *)(*(_QWORD *)v297 + 64LL),
              v303,
              *(_QWORD *)(*(_QWORD *)v297 + 40LL));
  v291 = *v20;
  if ( !*v20
    || (v291->fields.isForcedSpeedOne = v296->fields.isForcedSpeedOne, v291->fields.isAllAttack = v295, !*v307)
    || (ActorId = (__int64)this->fields.data) == 0
    || (BattleData__setCommandAttack((BattleData_o *)ActorId, (*v307)->fields.uniqueId, targetId, 0LL),
        (ActorId = (__int64)this->fields.logic) == 0)
    || (BattleLogic__checkUsedBuff((BattleLogic_o *)ActorId, 0LL), (ActorId = (__int64)this->fields.logic) == 0) )
  {
LABEL_370:
    sub_1B8880C(ActorId, v9);
  }
  BattleLogic__updateConditionsBuffAll((BattleLogic_o *)ActorId, 0LL);
  return *v20;
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
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w1

  if ( (byte_4A5DD7F & 1) == 0 )
  {
    sub_1B885B0(&BattleActionData_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_8719/*"MOTION_DO_NOT_ACT"*/);
    byte_4A5DD7F = 1;
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
    v11 = sub_1B887FC(BattleActionData_TypeInfo);
    BattleActionData___ctor((BattleActionData_o *)v11, 0LL);
    if ( task )
    {
      data = (BattleData_o *)BattleLogicTask__getActorId(task, 0LL);
      if ( v11 )
      {
        *(_DWORD *)(v11 + 32) = (_DWORD)data;
        v14 = StringLiteral_8719/*"MOTION_DO_NOT_ACT"*/;
        *(_QWORD *)(v11 + 64) = StringLiteral_8719/*"MOTION_DO_NOT_ACT"*/;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v11 + 64), v14, v12, v13);
        data = (BattleData_o *)task->fields.command;
        if ( data )
        {
          *(_DWORD *)(v11 + 60) = BattleCommandData__get_type((BattleCommandData_o *)data, 0LL);
          return (BattleActionData_o *)v11;
        }
      }
    }
LABEL_16:
    sub_1B8880C(data, task);
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

  if ( (byte_4A5DD7E & 1) == 0 )
  {
    sub_1B885B0(&ProgressIntervalTurnActionData_TypeInfo);
    byte_4A5DD7E = 1;
  }
  v4 = (ProgressIntervalTurnActionData_o *)sub_1B887FC(ProgressIntervalTurnActionData_TypeInfo);
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
    sub_1B8880C(data, v5);
  return BattleLogic__PrevReturnCreateActionData((BattleLogic_o *)data, 0LL, (BattleActionData_o *)v4, 0LL);
}


BattleActionData_o *__fastcall BattleLogicNomal__DeadChangePos(BattleLogicNomal_o *this, const MethodInfo *method)
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
  int32_t v18; // w3

  if ( (byte_4A5DD74 & 1) == 0 )
  {
    sub_1B885B0(&BattleActionData_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_6401/*"FOCUS_UNDER"*/);
    sub_1B885B0(&StringLiteral_6399/*"FOCUS_CENTER"*/);
    sub_1B885B0(&StringLiteral_6403/*"FOCUS_UP"*/);
    byte_4A5DD74 = 1;
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
    v8 = StringLiteral_6399/*"FOCUS_CENTER"*/;
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
        v8 = StringLiteral_6399/*"FOCUS_CENTER"*/;
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
      v14 = &StringLiteral_6401/*"FOCUS_UNDER"*/;
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
      v14 = &StringLiteral_6403/*"FOCUS_UP"*/;
    }
    v8 = *v14;
    v12->fields.globaltargetId = uniqueID;
LABEL_39:
    v6 = sub_1B887FC(BattleActionData_TypeInfo);
    BattleActionData___ctor((BattleActionData_o *)v6, 0LL);
    if ( v6 )
    {
      v16 = v5->fields.uniqueId;
      *(_DWORD *)(v6 + 32) = v16;
      *(_DWORD *)(v6 + 36) = v16;
      BattleActionData__setStateField((BattleActionData_o *)v6, 0LL);
      *(_QWORD *)(v6 + 64) = v8;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v6 + 64), v8, v17, v18);
      return (BattleActionData_o *)v6;
    }
LABEL_42:
    sub_1B8880C(data, method);
  }
  return (BattleActionData_o *)v6;
}


System_Collections_Generic_IEnumerable_BattleLogicTask__o *__fastcall BattleLogicNomal__GetConfirmCommandFunctionBuffTask(
        BattleLogicNomal_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A5DD6A & 1) == 0 )
  {
    sub_1B885B0(&BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__18_TypeInfo);
    byte_4A5DD6A = 1;
  }
  v3 = sub_1B887FC(BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__18_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = -2;
  *(_DWORD *)(v3 + 32) = System_Environment__get_CurrentManagedThreadId(0LL);
  *(_QWORD *)(v3 + 40) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 40), (int32_t)this, v4, v5);
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
  System_Comparison_T__o *_9__20_0; // x20
  Il2CppObject *v15; // x21
  struct BattleLogicNomal___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  Il2CppObject *value; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A5DD6C & 1) == 0 )
  {
    sub_1B885B0(&System_Comparison_BattleBuffData_BuffData__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_BuffList_TYPE__List_BattleBuffData_BuffData___TryGetValue__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
    sub_1B885B0(&Method_BattleLogicNomal___c__GetTargetCommandCodeBuffList_b__20_0__);
    sub_1B885B0(&BattleLogicNomal___c_TypeInfo);
    byte_4A5DD6C = 1;
  }
  value = 0LL;
  v10 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  if ( !passiveBuffDict )
    goto LABEL_16;
  CommandCardBuffArray = (BattleBuffData_BuffData_array *)System_Collections_Generic_Dictionary_Int32Enum__object___TryGetValue(
                                                            (System_Collections_Generic_Dictionary_TKey__TValue__o *)passiveBuffDict,
                                                            type,
                                                            &value,
                                                            (const MethodInfo_319E9B4 *)Method_System_Collections_Generic_Dictionary_BuffList_TYPE__List_BattleBuffData_BuffData___TryGetValue__);
  if ( ((unsigned __int8)CommandCardBuffArray & 1) != 0 )
  {
    if ( !v10 )
      goto LABEL_16;
    System_Collections_Generic_List_object___AddRange(
      v10,
      (System_Collections_Generic_IEnumerable_T__o *)value,
      (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  }
  if ( !actSvtBuffData
    || (CommandCardBuffArray = BattleBuffData__GetCommandCardBuffArray(actSvtBuffData, command, type, 0LL), !v10) )
  {
LABEL_16:
    sub_1B8880C(CommandCardBuffArray, v12);
  }
  System_Collections_Generic_List_object___AddRange(
    v10,
    (System_Collections_Generic_IEnumerable_T__o *)CommandCardBuffArray,
    (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  v13 = BattleLogicNomal___c_TypeInfo;
  if ( !BattleLogicNomal___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo);
    v13 = BattleLogicNomal___c_TypeInfo;
  }
  _9__20_0 = (System_Comparison_T__o *)v13->static_fields->__9__20_0;
  if ( !_9__20_0 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      v13 = BattleLogicNomal___c_TypeInfo;
    }
    v15 = (Il2CppObject *)v13->static_fields->__9;
    _9__20_0 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_BattleBuffData_BuffData__TypeInfo);
    System_Comparison_object____ctor(
      _9__20_0,
      v15,
      Method_BattleLogicNomal___c__GetTargetCommandCodeBuffList_b__20_0__,
      0LL);
    static_fields = BattleLogicNomal___c_TypeInfo->static_fields;
    static_fields->__9__20_0 = (struct System_Comparison_BattleBuffData_BuffData__o *)_9__20_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__20_0, (int32_t)_9__20_0, v17, v18);
  }
  System_Collections_Generic_List_object___Sort_55571192(
    v10,
    _9__20_0,
    (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Sort__);
  return (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v10;
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

  if ( (byte_4A5DD76 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5DD76 = 1;
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
          sub_1B8880C(data, method);
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
  _QWORD *v7; // x21
  __int64 v8; // x8
  __int64 v9; // x0
  __int64 v10; // x0
  _QWORD *v11; // x20
  __int64 v12; // x8
  __int64 v13; // x0
  __int64 v14; // x0
  struct BattleData_o *v15; // x8

  v3 = (System_Collections_Generic_IEnumerable_TSource__o *)prevFieldIndiv;
  if ( (byte_4A5DD77 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_Empty_int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_SequenceEqual_int___);
    byte_4A5DD77 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_29;
  QuestIndividualities = (System_Collections_Generic_IEnumerable_TSource__o *)BattleData__getQuestIndividualities(
                                                                                data,
                                                                                0LL);
  if ( !QuestIndividualities )
  {
    v7 = Method_System_Array_Empty_int___;
    v8 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v8 )
    {
      sub_1BDA4E8(Method_System_Array_Empty_int___);
      v8 = v7[7];
    }
    v9 = *(_QWORD *)(v8 + 16);
    if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
      v9 = sub_1BDA48C(v9);
    if ( !*(_DWORD *)(v9 + 224) )
      j_il2cpp_runtime_class_init_0(v9);
    v10 = *(_QWORD *)(v7[7] + 16LL);
    if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
      v10 = sub_1BDA48C(v10);
    QuestIndividualities = **(System_Collections_Generic_IEnumerable_TSource__o ***)(v10 + 184);
  }
  if ( !v3 )
  {
    v11 = Method_System_Array_Empty_int___;
    v12 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v12 )
    {
      sub_1BDA4E8(Method_System_Array_Empty_int___);
      v12 = v11[7];
    }
    v13 = *(_QWORD *)(v12 + 16);
    if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
      v13 = sub_1BDA48C(v13);
    if ( !*(_DWORD *)(v13 + 224) )
      j_il2cpp_runtime_class_init_0(v13);
    v14 = *(_QWORD *)(v11[7] + 16LL);
    if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
      v14 = sub_1BDA48C(v14);
    v3 = **(System_Collections_Generic_IEnumerable_TSource__o ***)(v14 + 184);
  }
  if ( !System_Linq_Enumerable__SequenceEqual_int_(
          QuestIndividualities,
          v3,
          (const MethodInfo_2EB2DC8 *)Method_System_Linq_Enumerable_SequenceEqual_int___) )
  {
    data = (BattleData_o *)this->fields.logic;
    if ( data )
    {
      BattleLogic__updateConditionsBuffAll((BattleLogic_o *)data, 0LL);
      v15 = this->fields.data;
      if ( v15 )
      {
        data = (BattleData_o *)v15->fields.perf;
        if ( data )
        {
          BattlePerformance__updateStatus((BattlePerformance_o *)data, 0LL);
          return;
        }
      }
    }
LABEL_29:
    sub_1B8880C(data, prevFieldIndiv);
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
    sub_1B8880C(data, method);
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
  int32_t v23; // w2
  int32_t v24; // w3
  int32_t v25; // w2
  int32_t v26; // w3
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  __int64 v32; // x0
  bool isFirstAdd; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4A5DD7B & 1) == 0 )
  {
    sub_1B885B0(&BattleLogicTask___TypeInfo);
    sub_1B885B0(&BattleLogicTask_TypeInfo);
    sub_1B885B0(&BattleSkillInfoData_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5DD7B = 1;
  }
  isFirstAdd = 0;
  v6 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_44;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SkillLvMaster___);
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
              v17 = (BattleSkillInfoData_o *)sub_1B887FC(BattleSkillInfoData_TypeInfo);
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
              v20 = (BattleLogicTask_o *)sub_1B887FC(BattleLogicTask_TypeInfo);
              BattleLogicTask___ctor(v20, 0LL);
              if ( !v20 )
                goto LABEL_44;
              BattleLogicTask__setReservationSkill(v20, v17, 0, 0LL);
              logic = this->fields.logic;
              Instance = sub_1B88658(BattleLogicTask___TypeInfo, 1LL);
              if ( !Instance )
                goto LABEL_44;
              v22 = Instance;
              Instance = sub_1B886EC(v20, *(_QWORD *)(*(_QWORD *)Instance + 64LL));
              if ( !Instance )
              {
                v32 = sub_1B88830(0LL);
                sub_1B886D8(v32, 0LL);
              }
              if ( !*(_DWORD *)(v22 + 24) )
                break;
              *(_QWORD *)(v22 + 32) = v20;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v22 + 32), (int32_t)v20, v23, v24);
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
              v28 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
              ++v6->fields._version;
              if ( !items )
                goto LABEL_44;
              size = v6->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v6,
                  (Il2CppObject *)v20,
                  *(const MethodInfo_34FD834 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
              }
              else
              {
                v30 = &items->obj.klass + size;
                v6->fields._size = size + 1;
                v30[4] = (Il2CppClass *)v20;
                sub_1B88554((ServantStatusBattleListViewItem_o *)(v30 + 4), (int32_t)v20, v25, v26);
              }
              max_length = v14->max_length;
              if ( (int)++v15 >= max_length )
                goto LABEL_38;
            }
LABEL_45:
            sub_1B88814(Instance, v8);
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
    sub_1B8880C(Instance, v8);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v6,
                                    (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  if ( (byte_4A5DD80 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__);
    this = (BattleLogicNomal_o *)sub_1B885B0(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
    byte_4A5DD80 = 1;
  }
  memset(&v39, 0, sizeof(v39));
  if ( !commandCodeBuffList )
    sub_1B8880C(this, checkInvokeBuff);
  System_Collections_Generic_List_object___GetEnumerator(
    &v38,
    (System_Collections_Generic_List_object__o *)commandCodeBuffList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
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
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v16 )
      break;
    if ( !command )
      sub_1B8880C(v16, v17);
    current = (BattleBuffData_BuffData_o *)v39.fields._current;
    IsEnableCommandCode = BattleCommandData__IsEnableCommandCode(command, 0LL);
    if ( !IsEnableCommandCode )
    {
      if ( !current )
        sub_1B8880C(IsEnableCommandCode, v20);
      IsEnableCommandCode = BattleBuffData_BuffData__isEnableCommandCardBuff(current, command, 0LL);
      if ( !IsEnableCommandCode )
      {
        IsEnableCommandCode = BattleCommandData__IsEnableCommandAssist(command, 0LL);
        if ( !IsEnableCommandCode )
          continue;
      }
    }
    if ( !checkInvokeBuff )
      sub_1B8880C(IsEnableCommandCode, v20);
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
          sub_1B8880C(v21, v22);
        vals = current->fields.vals;
        if ( !vals )
          sub_1B8880C(v21, v22);
        max_length = vals->max_length;
        if ( !max_length )
          sub_1B88814(v21, v22);
        if ( max_length == 1 )
          sub_1B88814(v21, v22);
        if ( !skillLvMst )
          sub_1B8880C(v21, v22);
        Entity = SkillLvMaster__GetEntity(skillLvMst, vals->m_Items[1], vals->m_Items[2], 0LL);
        v27 = Entity;
        if ( Entity )
        {
          if ( !arg )
            sub_1B8880C(Entity, v26);
          *(&arg->fields._SkillTiming_k__BackingField + 1) = current->fields.addOrder;
          if ( !actionData )
            sub_1B8880C(Entity, v26);
          logicfunction = v37->fields.logicfunction;
          SideEffectActionData = BattleActionData__MakeSideEffectActionData(actionData, type, 0LL);
          funcId = v27->fields.funcId;
          v31 = SideEffectActionData;
          DataValsList = SkillLvEntity__getDataValsList(v27, 0LL);
          if ( !logicfunction )
            sub_1B8880C(DataValsList, v33);
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
          sub_1B8880C(0LL, v22);
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
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
}


BattleActionData_o *__fastcall BattleLogicNomal__createBackStep(
        BattleLogicNomal_o *this,
        int32_t uniqueId,
        const MethodInfo *method)
{
  __int64 v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  int32_t v9; // w1

  if ( (byte_4A5DD6E & 1) == 0 )
  {
    sub_1B885B0(&BattleActionData_TypeInfo);
    sub_1B885B0(&StringLiteral_8710/*"MOTION_BACK"*/);
    byte_4A5DD6E = 1;
  }
  v4 = sub_1B887FC(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v4, 0LL);
  if ( !v4 )
    sub_1B8880C(v5, v6);
  *(_DWORD *)(v4 + 32) = uniqueId;
  v9 = StringLiteral_8710/*"MOTION_BACK"*/;
  *(_QWORD *)(v4 + 64) = StringLiteral_8710/*"MOTION_BACK"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v4 + 64), v9, v7, v8);
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
            sub_1B88814(data, task);
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
    sub_1B8880C(data, task);
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
  int32_t v16; // w2
  int32_t v17; // w3

  if ( (byte_4A5DD7A & 1) == 0 )
  {
    sub_1B885B0(&System_Action_AiNpcBattleServantData__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_AiNpcBattleServantData__ForEach__);
    sub_1B885B0(&Method_BattleLogicNomal___c__createBuffAddPlayer_b__38_0__);
    sub_1B885B0(&BattleLogicNomal___c_TypeInfo);
    byte_4A5DD7A = 1;
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
            sub_1B88814(data, task);
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
    sub_1B8880C(data, task);
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
    monitor = (System_Action_object__o *)sub_1B887FC(System_Action_AiNpcBattleServantData__TypeInfo);
    System_Action_object____ctor(monitor, klass, Method_BattleLogicNomal___c__createBuffAddPlayer_b__38_0__, 0LL);
    static_fields = BattleLogicNomal___c_TypeInfo->static_fields;
    static_fields->__9__38_0 = (struct System_Action_AiNpcBattleServantData__o *)monitor;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__38_0, (int32_t)monitor, v16, v17);
  }
  if ( !aiNpcDataList )
    goto LABEL_31;
  System_Collections_Generic_List_object___ForEach(
    aiNpcDataList,
    (System_Action_T__o *)monitor,
    (const MethodInfo_34FE274 *)Method_System_Collections_Generic_List_AiNpcBattleServantData__ForEach__);
  return 0LL;
}


BattleActionData_o *__fastcall BattleLogicNomal__createComboOrder(
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
  int32_t v11; // w3
  int v12; // w8
  ServantStatusBattleListViewItem_o *v13; // x0
  System_Array_o *v14; // x22
  int32_t v15; // w2
  int32_t v16; // w3
  __int64 *v17; // x8
  __int64 v18; // x1
  __int64 v19; // x8
  char v20; // w21
  unsigned __int64 v21; // x22
  System_Array_o *v23; // x22
  int32_t v24; // w2
  int32_t v25; // w3
  System_RuntimeFieldHandle_o v26; // 0:w1.4
  System_RuntimeFieldHandle_o v27; // 0:w1.4

  if ( (byte_4A5DD6F & 1) == 0 )
  {
    sub_1B885B0(&BattleActionData_TypeInfo);
    sub_1B885B0(&FunctionEntity_TypeInfo);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&Field__PrivateImplementationDetails__2C0F32A9C0CD29445188C9F9109E1308D5A59BD9D3C2479B8251491000F0DB36);
    sub_1B885B0(&Field__PrivateImplementationDetails__6E462A3A512B9CB4A6185FA60D2DAE01F4222A66EA50EDA56030DA3910331E5F);
    sub_1B885B0(&StringLiteral_6379/*"FIELD_PLAYER"*/);
    sub_1B885B0(&StringLiteral_6378/*"FIELD_ENEMY"*/);
    byte_4A5DD6F = 1;
  }
  v5 = sub_1B887FC(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_29;
  BattleActionData__setStateField((BattleActionData_o *)v5, 0LL);
  if ( !task )
    goto LABEL_29;
  targetIdlist = task->fields.targetIdlist;
  v9 = sub_1B887FC(FunctionEntity_TypeInfo);
  FunctionEntity___ctor((FunctionEntity_o *)v9, 0LL);
  if ( BattleLogicTask__isArts(task, 0LL) )
  {
    BattleActionData__setTypeOrderArts((BattleActionData_o *)v5, 0LL);
    isBuster = sub_1B88658(int___TypeInfo, 2LL);
    if ( isBuster )
    {
      v12 = *(_DWORD *)(isBuster + 24);
      v7 = isBuster;
      if ( !v12 || (*(_DWORD *)(isBuster + 32) = 102, v12 == 1) )
LABEL_30:
        sub_1B88814(isBuster, v7);
      *(_DWORD *)(isBuster + 36) = 1;
      if ( v9 )
      {
        *(_QWORD *)(v9 + 32) = isBuster;
        v13 = (ServantStatusBattleListViewItem_o *)(v9 + 32);
LABEL_14:
        sub_1B88554(v13, v7, v10, v11);
        v17 = &StringLiteral_6379/*"FIELD_PLAYER"*/;
LABEL_15:
        v18 = *v17;
        *(_QWORD *)(v5 + 64) = *v17;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 64), v18, v15, v16);
        goto LABEL_16;
      }
    }
LABEL_29:
    sub_1B8880C(isBuster, v7);
  }
  if ( BattleLogicTask__isQuick(task, 0LL) )
  {
    BattleActionData__setTypeOrderQuick((BattleActionData_o *)v5, 0LL);
    v14 = (System_Array_o *)sub_1B88658(int___TypeInfo, 3LL);
    v26.fields.value = Field__PrivateImplementationDetails__6E462A3A512B9CB4A6185FA60D2DAE01F4222A66EA50EDA56030DA3910331E5F;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61615112(v14, v26, 0LL);
    if ( !v9 )
      goto LABEL_29;
    *(_QWORD *)(v9 + 32) = v14;
    v13 = (ServantStatusBattleListViewItem_o *)(v9 + 32);
    LODWORD(v7) = (_DWORD)v14;
    goto LABEL_14;
  }
  isBuster = BattleLogicTask__isBuster(task, 0LL);
  if ( (isBuster & 1) != 0 )
  {
    BattleActionData__setTypeOrderBuster((BattleActionData_o *)v5, 0LL);
    v23 = (System_Array_o *)sub_1B88658(int___TypeInfo, 3LL);
    v27.fields.value = Field__PrivateImplementationDetails__2C0F32A9C0CD29445188C9F9109E1308D5A59BD9D3C2479B8251491000F0DB36;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61615112(v23, v27, 0LL);
    if ( v9 )
    {
      *(_QWORD *)(v9 + 32) = v23;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 32), (int32_t)v23, v24, v25);
      v17 = &StringLiteral_6378/*"FIELD_ENEMY"*/;
      goto LABEL_15;
    }
    goto LABEL_29;
  }
LABEL_16:
  if ( !targetIdlist )
    goto LABEL_29;
  v19 = *(_QWORD *)&targetIdlist->max_length;
  if ( (int)v19 < 1 )
    return 0LL;
  v20 = 0;
  v21 = 0LL;
  do
  {
    if ( v21 >= (unsigned int)v19 )
      goto LABEL_30;
    isBuster = (__int64)this->fields.data;
    if ( !isBuster )
      goto LABEL_29;
    isBuster = (__int64)BattleData__getServantData((BattleData_o *)isBuster, targetIdlist->m_Items[v21 + 1], 0LL);
    LODWORD(v19) = targetIdlist->max_length;
    ++v21;
    v20 |= isBuster != 0;
  }
  while ( (__int64)v21 < (int)v19 );
  if ( (v20 & 1) != 0 )
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
    sub_1B8880C(v5, v6);
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
  int32_t v7; // w2
  int32_t v8; // w3
  DataMasterBase_TMaster__TEntity__PKType__o *v9; // x21
  int32_t v10; // w1
  int32_t v11; // w2
  int32_t v12; // w3
  System_Collections_Generic_Dictionary_int__object__o *v13; // x23
  BattleData_o *data; // x8
  System_Int32_array *QuestIndividualities; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_Collections_Generic_List_int__o *v18; // x26
  int v19; // w8
  __int64 v20; // x28
  unsigned int v21; // w22
  __int64 v22; // x25
  __int64 *v23; // x25
  __int64 v24; // t1
  Il2CppObject *v25; // x29
  struct System_Int32_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  int monitor; // w8
  unsigned int v30; // w25
  Il2CppClass **v31; // x27
  Il2CppClass *v32; // x8
  char *v33; // x27
  Il2CppClass *v34; // t1
  struct BattleLogic_o *logic; // x8
  struct BattleData_o *v36; // x8
  int32_t v37; // w9
  struct BattleData_o *v38; // x8
  __int64 v39; // x28
  int v40; // w8
  unsigned int v41; // w22
  __int64 v42; // x23
  __int64 *v43; // x23
  __int64 v44; // t1
  bool v45; // w3
  char v46; // w29
  Il2CppObject *v47; // x29
  struct System_Int32_array *v48; // x8
  _QWORD *v49; // x9
  __int64 v50; // x10
  struct BaseBattleEvent_o *battleEvent; // x20
  struct BattleData_o *v52; // x8
  struct BattlePerformance_o *perf; // x9
  struct BattleData_o *v54; // x8
  System_Collections_Generic_List_object__o *aiNpcDataList; // x20
  System_Action_object__o *v56; // x26
  struct BattleData_o *v57; // x8
  const MethodInfo *v58; // x2
  struct BattleData_o *v59; // x8
  Il2CppObject *v60; // x0
  __int64 v61; // x1
  BattleBuffData_BuffData_array *value; // x24
  int max_length; // w8
  int32_t key; // w25
  unsigned int v65; // w23
  char v66; // w22
  BattleBuffData_BuffData_o *v67; // x28
  BattleSkillInfoData_o *v68; // x26
  __int64 v69; // x0
  __int64 v70; // x1
  struct System_Int32_array *vals; // x8
  __int64 v72; // x0
  __int64 v73; // x1
  struct System_Int32_array *v74; // x8
  BattleData_o *v75; // x0
  BattleServantData_o *ServantData; // x27
  __int64 v77; // x1
  SkillLvEntity_o *v78; // x0
  __int64 v79; // x1
  SkillLvEntity_o *v80; // x29
  BattleData_o *v81; // x0
  _BOOL8 v82; // x0
  __int64 v83; // x1
  BattleLogic_o *v84; // x0
  int32_t v85; // w20
  __int64 v86; // x0
  __int64 v87; // x1
  System_Int32_array *TargetIds; // x28
  bool exists; // w29
  BattleLogicSkill_o *logicskill; // x20
  System_Int32_array *v91; // x0
  __int64 v92; // x1
  System_Collections_ICollection_o *v93; // x0
  __int64 v94; // x1
  BattleLogicTask_array *v95; // x26
  _BOOL8 IsNullOrEmpty; // x0
  BattleLogicTask_o *v97; // x0
  BattleLogic_o *v98; // x0
  __int64 v99; // x1
  BattleData_o *v100; // x0
  int32_t v101; // w23
  Il2CppObject *v102; // x29
  BattleServantData_o *isEndAct; // x0
  __int64 v104; // x1
  BattleServantData_o *selfConcatSvtIndividualities_k__BackingField; // x24
  BattleBuffData_CheckIndividualitiesData_o *v106; // x20
  int v107; // w8
  int i; // w22
  BattleBuffData_BuffData_o *v109; // x26
  BattleSkillInfoData_o *v110; // x25
  __int64 v111; // x0
  __int64 v112; // x1
  struct System_Int32_array *v113; // x8
  __int64 v114; // x0
  __int64 v115; // x1
  struct System_Int32_array *v116; // x8
  BattleData_o *v117; // x0
  BattleServantData_o *v118; // x27
  __int64 v119; // x1
  SkillLvEntity_o *v120; // x0
  __int64 v121; // x1
  SkillLvEntity_o *v122; // x28
  BattleData_o *v123; // x0
  _BOOL8 v124; // x0
  __int64 v125; // x1
  BattleLogic_o *v126; // x0
  int32_t v127; // w20
  __int64 v128; // x0
  __int64 v129; // x1
  System_Int32_array *v130; // x26
  bool v131; // w27
  BattleLogicSkill_o *v132; // x20
  System_Int32_array *v133; // x0
  __int64 v134; // x1
  BattleLogicTask_array *v135; // x1
  BattleLogic_o *v136; // x0
  struct BattleData_o *v137; // x8
  BattleActionData_o *v138; // x1
  const MethodInfo *v140; // [xsp+8h] [xbp-F8h]
  System_Collections_Generic_Dictionary_int__object__o *v141; // [xsp+18h] [xbp-E8h]
  System_Collections_Generic_Dictionary_int__object__o *v142; // [xsp+20h] [xbp-E0h]
  BattleActionData_o *baseActData; // [xsp+30h] [xbp-D0h]
  char v144; // [xsp+3Ch] [xbp-C4h]
  SkillLvMaster_o *v145; // [xsp+40h] [xbp-C0h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v146; // [xsp+48h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v147; // [xsp+70h] [xbp-90h] BYREF
  Il2CppObject *entity; // [xsp+98h] [xbp-68h] BYREF

  if ( (byte_4A5DD78 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_AiNpcBattleServantData__TypeInfo);
    sub_1B885B0(&BattleActionData_TypeInfo);
    sub_1B885B0(&BattleSkillInfoData_TypeInfo);
    sub_1B885B0(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_BuffMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1B885B0(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData_____ctor__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____get_Current__);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_int__BattleBuffData_BuffData____get_Key__);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_int__BattleBuffData_BuffData____get_Value__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_AiNpcBattleServantData__ForEach__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_BattleLogicNomal___c__DisplayClass36_0__createEndTurnEnemy_b__0__);
    sub_1B885B0(&BattleLogicNomal___c__DisplayClass36_0_TypeInfo);
    sub_1B885B0(&StringLiteral_8721/*"MOTION_ENEMY_TURN_END"*/);
    byte_4A5DD78 = 1;
  }
  entity = 0LL;
  memset(&v147, 0, sizeof(v147));
  v4 = sub_1B887FC(BattleLogicNomal___c__DisplayClass36_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  if ( !v4 )
    goto LABEL_215;
  *(_QWORD *)(v4 + 32) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v4 + 32), (int32_t)this, v7, v8);
  baseActData = (BattleActionData_o *)sub_1B887FC(BattleActionData_TypeInfo);
  BattleActionData___ctor(baseActData, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_215;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_BuffMaster___);
  *(_BYTE *)(v4 + 16) = 1;
  if ( !this->fields.logic )
    goto LABEL_215;
  v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  BattleLogic__resetReducedHpAll(this->fields.logic, 0LL);
  Instance = (__int64)this->fields.logic;
  if ( !Instance )
    goto LABEL_215;
  BattleLogic__updateResultServant((BattleLogic_o *)Instance, 0LL);
  if ( !baseActData )
    goto LABEL_215;
  BattleActionData__setStateField(baseActData, 0LL);
  v10 = StringLiteral_8721/*"MOTION_ENEMY_TURN_END"*/;
  baseActData->fields.motionname = (struct System_String_o *)StringLiteral_8721/*"MOTION_ENEMY_TURN_END"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&baseActData->fields.motionname, v10, v11, v12);
  v142 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B887FC(System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v142,
    (const MethodInfo_316CF84 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData_____ctor__);
  v13 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B887FC(System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v13,
    (const MethodInfo_316CF84 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData_____ctor__);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_215;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  data = this->fields.data;
  v145 = (SkillLvMaster_o *)Instance;
  if ( !data )
    goto LABEL_215;
  QuestIndividualities = BattleData__getQuestIndividualities(data, 0LL);
  *(_QWORD *)(v4 + 24) = QuestIndividualities;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v4 + 24), (int32_t)QuestIndividualities, v16, v17);
  v18 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v18,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (__int64)this->fields.data;
  if ( !Instance )
    goto LABEL_215;
  v141 = v13;
  Instance = (__int64)BattleData__getFieldPlayerServantList((BattleData_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_215;
  v19 = *(_DWORD *)(Instance + 24);
  v20 = Instance;
  if ( v19 >= 1 )
  {
    v21 = 0;
    while ( 1 )
    {
      if ( v21 >= v19 )
        goto LABEL_220;
      v22 = v20 + 8LL * (int)v21;
      v24 = *(_QWORD *)(v22 + 32);
      v23 = (__int64 *)(v22 + 32);
      Instance = v24;
      if ( !v24 )
        goto LABEL_215;
      if ( *(_BYTE *)(Instance + 532) )
      {
        Instance = (__int64)BattleServantData__turnBuffProgressing(
                              (BattleServantData_o *)Instance,
                              *(_BYTE *)(v4 + 16),
                              *(System_Int32_array **)(v4 + 24),
                              this->fields.logic,
                              0LL,
                              0LL);
        if ( v21 >= *(_DWORD *)(v20 + 24) )
          goto LABEL_220;
        v25 = (Il2CppObject *)Instance;
        Instance = *v23;
        if ( !*v23 )
          goto LABEL_215;
        Instance = BattleServantData__isAlive((BattleServantData_o *)Instance, 0, 0LL);
        if ( (Instance & 1) != 0 )
        {
          if ( v21 >= *(_DWORD *)(v20 + 24) )
            goto LABEL_220;
          Instance = *v23;
          if ( !*v23 )
            goto LABEL_215;
          Instance = BattleServantData__isAliveLogic((BattleServantData_o *)Instance, 0, 0LL);
          if ( (Instance & 1) != 0 )
          {
            if ( !v25 )
              goto LABEL_215;
            if ( v25[1].monitor )
            {
              if ( v21 >= *(_DWORD *)(v20 + 24) )
                goto LABEL_220;
              Instance = (__int64)v142;
              if ( !*v23 || !v142 )
                goto LABEL_215;
              System_Collections_Generic_Dictionary_int__object___Add(
                v142,
                *(_DWORD *)(*v23 + 24),
                v25,
                (const MethodInfo_316D958 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
            }
          }
        }
        if ( v21 >= *(_DWORD *)(v20 + 24) )
          goto LABEL_220;
        if ( !*v23 )
          goto LABEL_215;
        if ( !v18 )
          goto LABEL_215;
        v6 = *(unsigned int *)(*v23 + 24);
        items = v18->fields._items;
        v27 = Method_System_Collections_Generic_List_int__Add__;
        ++v18->fields._version;
        if ( !items )
          goto LABEL_215;
        size = v18->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v18,
            v6,
            *(const MethodInfo_34E0810 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
        }
        else
        {
          v18->fields._size = size + 1;
          items->m_Items[size + 1] = v6;
        }
        if ( !v25 )
          goto LABEL_215;
        monitor = (int)v25[1].monitor;
        if ( monitor >= 1 )
          break;
      }
LABEL_52:
      v19 = *(_DWORD *)(v20 + 24);
      if ( (int)++v21 >= v19 )
        goto LABEL_53;
    }
    v30 = 0;
    while ( v30 < monitor )
    {
      v31 = &v25->klass + (int)v30;
      v34 = v31[4];
      v33 = (char *)(v31 + 4);
      v32 = v34;
      if ( !v34 || !v9 )
        goto LABEL_215;
      Instance = DataMasterBase_object__object__int___TryGetEntity(
                   v9,
                   &entity,
                   (int32_t)v32->_1.name,
                   (const MethodInfo_311D988 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
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
          v36 = logic->fields.data;
          if ( !v36 )
            goto LABEL_215;
          if ( v30 >= LODWORD(v25[1].monitor) )
            break;
          if ( !*(_QWORD *)v33 )
            goto LABEL_215;
          v37 = *(_DWORD *)(*(_QWORD *)v33 + 28LL);
          if ( v36->fields.endMasterSkillTurnBuffValue <= v37 )
            v36->fields.endMasterSkillTurnBuffValue = v37;
        }
      }
      monitor = (int)v25[1].monitor;
      if ( (int)++v30 >= monitor )
        goto LABEL_52;
    }
LABEL_220:
    sub_1B88814(Instance, v6);
  }
LABEL_53:
  Instance = (__int64)this->fields.data;
  if ( !Instance )
    goto LABEL_215;
  Instance = (__int64)BattleData__getFieldEnemyServantList((BattleData_o *)Instance, 0, 0LL);
  v38 = this->fields.data;
  if ( !v38 )
    goto LABEL_215;
  v39 = Instance;
  if ( v38->fields.leaderDown && v38->fields.endbattleFlg )
  {
    v144 = 0;
  }
  else
  {
    if ( !Instance )
      goto LABEL_215;
    v40 = *(_DWORD *)(Instance + 24);
    if ( v40 >= 1 )
    {
      v41 = 0;
      v144 = 0;
      while ( v41 < v40 )
      {
        v42 = v39 + 8LL * (int)v41;
        v44 = *(_QWORD *)(v42 + 32);
        v43 = (__int64 *)(v42 + 32);
        Instance = v44;
        if ( !v44 )
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
            v45 = 1;
          }
          else
          {
            Instance = (__int64)this->fields.data;
            if ( !Instance )
              goto LABEL_215;
            Instance = BattleData__checkDefeatPoint((BattleData_o *)Instance, 0, 0LL);
            v45 = Instance & 1;
          }
          if ( v41 >= *(_DWORD *)(v39 + 24) )
            goto LABEL_220;
          Instance = *v43;
          if ( !*v43 )
            goto LABEL_215;
          Instance = BattleServantData__turnProgressing(
                       (BattleServantData_o *)Instance,
                       *(System_Int32_array **)(v4 + 24),
                       this->fields.logic,
                       v45,
                       baseActData,
                       0LL);
          if ( v41 >= *(_DWORD *)(v39 + 24) )
            goto LABEL_220;
          v46 = Instance;
          Instance = *v43;
          if ( !*v43 )
            goto LABEL_215;
          Instance = BattleServantData__isAliveLogic((BattleServantData_o *)Instance, 0, 0LL);
          if ( (Instance & 1) != 0 )
          {
            if ( v41 >= *(_DWORD *)(v39 + 24) )
              goto LABEL_220;
            Instance = *v43;
            if ( !*v43 )
              goto LABEL_215;
            Instance = (__int64)BattleServantData__getTTurnEndBufflist((BattleServantData_o *)Instance, 0LL);
            if ( !Instance )
              goto LABEL_215;
            if ( *(_QWORD *)(Instance + 24) )
            {
              if ( v41 >= *(_DWORD *)(v39 + 24) )
                goto LABEL_220;
              if ( !*v43 || !v141 )
                goto LABEL_215;
              System_Collections_Generic_Dictionary_int__object___Add(
                v141,
                *(_DWORD *)(*v43 + 24),
                (Il2CppObject *)Instance,
                (const MethodInfo_316D958 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
            }
          }
          if ( v41 >= *(_DWORD *)(v39 + 24) )
            goto LABEL_220;
          if ( !*v43 )
            goto LABEL_215;
          Instance = *(_QWORD *)(*v43 + 792);
          if ( !Instance )
            goto LABEL_215;
          v144 |= v46;
          Instance = (__int64)BattleBuffData__usedProgressing((BattleBuffData_o *)Instance, 0LL);
        }
        if ( v41 >= *(_DWORD *)(v39 + 24) )
          goto LABEL_220;
        Instance = *v43;
        if ( !*v43 )
          goto LABEL_215;
        if ( *(_BYTE *)(Instance + 532) )
        {
          Instance = (__int64)BattleServantData__turnBuffProgressing(
                                (BattleServantData_o *)Instance,
                                *(_BYTE *)(v4 + 16),
                                *(System_Int32_array **)(v4 + 24),
                                this->fields.logic,
                                0LL,
                                0LL);
          if ( v41 >= *(_DWORD *)(v39 + 24) )
            goto LABEL_220;
          v47 = (Il2CppObject *)Instance;
          Instance = *v43;
          if ( !*v43 )
            goto LABEL_215;
          Instance = BattleServantData__isAlive((BattleServantData_o *)Instance, 0, 0LL);
          if ( (Instance & 1) != 0 )
          {
            if ( v41 >= *(_DWORD *)(v39 + 24) )
              goto LABEL_220;
            Instance = *v43;
            if ( !*v43 )
              goto LABEL_215;
            Instance = BattleServantData__isAliveLogic((BattleServantData_o *)Instance, 0, 0LL);
            if ( (Instance & 1) != 0 )
            {
              if ( !v47 )
                goto LABEL_215;
              if ( v47[1].monitor )
              {
                if ( v41 >= *(_DWORD *)(v39 + 24) )
                  goto LABEL_220;
                Instance = (__int64)v142;
                if ( !*v43 || !v142 )
                  goto LABEL_215;
                System_Collections_Generic_Dictionary_int__object___Add(
                  v142,
                  *(_DWORD *)(*v43 + 24),
                  v47,
                  (const MethodInfo_316D958 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
              }
            }
          }
          if ( v41 >= *(_DWORD *)(v39 + 24) )
            goto LABEL_220;
          if ( !*v43 )
            goto LABEL_215;
          if ( !v18 )
            goto LABEL_215;
          v6 = *(unsigned int *)(*v43 + 24);
          v48 = v18->fields._items;
          v49 = Method_System_Collections_Generic_List_int__Add__;
          ++v18->fields._version;
          if ( !v48 )
            goto LABEL_215;
          v50 = v18->fields._size;
          if ( (unsigned int)v50 >= v48->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v18,
              v6,
              *(const MethodInfo_34E0810 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
          }
          else
          {
            v18->fields._size = v50 + 1;
            v48->m_Items[v50 + 1] = v6;
          }
        }
        v40 = *(_DWORD *)(v39 + 24);
        if ( (int)++v41 >= v40 )
          goto LABEL_111;
      }
      goto LABEL_220;
    }
    v144 = 0;
LABEL_111:
    v38 = this->fields.data;
    if ( !v38 )
      goto LABEL_215;
  }
  if ( !v18 )
    goto LABEL_215;
  battleEvent = v38->fields.battleEvent;
  Instance = (__int64)System_Collections_Generic_List_int___ToArray(
                        v18,
                        (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !battleEvent )
    goto LABEL_215;
  Instance = ((__int64 (__fastcall *)(struct BaseBattleEvent_o *, __int64, _QWORD, Il2CppMethodPointer))battleEvent->klass->vtable._34_ProgressNoExecJoinServantsBuff.method)(
               battleEvent,
               Instance,
               *(unsigned __int8 *)(v4 + 16),
               battleEvent->klass->vtable._35_IsPossibleAddBuffParam.methodPtr);
  v52 = this->fields.data;
  if ( !v52 )
    goto LABEL_215;
  perf = v52->fields.perf;
  if ( !perf )
    goto LABEL_215;
  Instance = (__int64)v52->fields.defenceTargetData;
  if ( !Instance )
    goto LABEL_215;
  BattleDefenceTargetData__BuffTurnProgress((BattleDefenceTargetData_o *)Instance, perf->fields.defenceTarget, 0LL);
  v54 = this->fields.data;
  if ( !v54 )
    goto LABEL_215;
  aiNpcDataList = (System_Collections_Generic_List_object__o *)v54->fields.aiNpcDataList;
  v56 = (System_Action_object__o *)sub_1B887FC(System_Action_AiNpcBattleServantData__TypeInfo);
  System_Action_object____ctor(
    v56,
    (Il2CppObject *)v4,
    Method_BattleLogicNomal___c__DisplayClass36_0__createEndTurnEnemy_b__0__,
    0LL);
  if ( !aiNpcDataList )
    goto LABEL_215;
  System_Collections_Generic_List_object___ForEach(
    aiNpcDataList,
    (System_Action_T__o *)v56,
    (const MethodInfo_34FE274 *)Method_System_Collections_Generic_List_AiNpcBattleServantData__ForEach__);
  v57 = this->fields.data;
  if ( !v57 )
    goto LABEL_215;
  Instance = (__int64)v57->fields._FieldEnvData_k__BackingField;
  if ( !Instance )
    goto LABEL_215;
  BattleFieldEnvironmentData__TurnProgressing(
    (BattleFieldEnvironmentData_o *)Instance,
    this->fields.logic,
    *(_BYTE *)(v4 + 16),
    0LL);
  BattleLogicNomal__UpdateEndTurnBuff(this, *(System_Int32_array **)(v4 + 24), v58);
  v59 = this->fields.data;
  if ( !v59 )
    goto LABEL_215;
  v59->fields.currentTurn = 0;
  if ( !v141 )
    goto LABEL_215;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v146,
    v141,
    (const MethodInfo_316DD90 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____GetEnumerator__);
  v147 = v146;
  while ( 1 )
  {
    v60 = (Il2CppObject *)System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
                            &v147,
                            (const MethodInfo_32B7418 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____MoveNext__);
    if ( ((unsigned __int8)v60 & 1) == 0 )
      break;
    value = (BattleBuffData_BuffData_array *)v147.fields._current.fields.value;
    if ( !v147.fields._current.fields.value )
      sub_1B8880C(v60, v61);
    max_length = (int)v147.fields._current.fields.value[1].monitor;
    if ( max_length >= 1 )
    {
      key = (int32_t)v147.fields._current.fields.key;
      v65 = 0;
      v66 = 1;
LABEL_128:
      if ( v65 >= max_length )
        sub_1B88814(v60, v61);
      v67 = value->m_Items[v65];
      if ( !v67 )
        sub_1B8880C(v60, v61);
      if ( v67->fields._isRemove )
        goto LABEL_164;
      if ( !v9 )
        sub_1B8880C(v60, v61);
      v60 = DataMasterBase_object__object__int___GetEntity(
              v9,
              v67->fields.buffId,
              (const MethodInfo_311D934 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
      if ( !v60 )
        goto LABEL_164;
      v68 = (BattleSkillInfoData_o *)sub_1B887FC(BattleSkillInfoData_TypeInfo);
      BattleSkillInfoData___ctor(v68, 0LL);
      if ( !v68 )
        sub_1B8880C(v69, v70);
      v68->fields.svtUniqueId = key;
      vals = v67->fields.vals;
      if ( !vals )
        sub_1B8880C(v69, v70);
      if ( !vals->max_length )
        sub_1B88814(v69, v70);
      v72 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))v68->klass->vtable._4_set_skillId.method)(
              v68,
              (unsigned int)vals->m_Items[1],
              v68->klass->vtable._5_get_skillId.methodPtr);
      v74 = v67->fields.vals;
      if ( !v74 )
        sub_1B8880C(v72, v73);
      if ( v74->max_length <= 1 )
        sub_1B88814(v72, v73);
      v68->fields.skilllv = v74->m_Items[2];
      v75 = this->fields.data;
      if ( !v75 )
        sub_1B8880C(0LL, v73);
      ServantData = BattleData__getServantData(v75, v68->fields.svtUniqueId, 0LL);
      v77 = ((unsigned __int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))v68->klass->vtable._5_get_skillId.method)(
              v68,
              v68->klass->vtable._6_get_IndividualityArray.methodPtr);
      if ( !v145 )
        sub_1B8880C(0LL, v77);
      v78 = SkillLvMaster__GetEntity(v145, v77, v68->fields.skilllv, 0LL);
      if ( !ServantData )
        sub_1B8880C(v78, v79);
      v80 = v78;
      v81 = this->fields.data;
      if ( !v81 )
        sub_1B8880C(0LL, v79);
      v82 = BattleData__checkAliveOther(v81, ServantData->fields.uniqueId, 0LL);
      if ( !v82 )
      {
        if ( !v80 )
          sub_1B8880C(v82, v83);
        v84 = this->fields.logic;
        if ( !v84 )
          sub_1B8880C(0LL, v83);
        v60 = (Il2CppObject *)BattleLogic__checkPtTargetFunction(v84, v80->fields.funcId, 0LL);
        if ( ((unsigned __int8)v60 & 1) == 0 )
          goto LABEL_164;
      }
      v85 = BattleServantData__GetRevengeIdCheckOpponentOnly(ServantData, v67, 0LL);
      if ( (v85 & 0x80000000) != 0 )
      {
        TargetIds = Target__getTargetIds(this->fields.data, v68->fields.svtUniqueId, -1, key, 13, 0LL, 0LL);
        exists = BattleSkillInfoData__ExistsNoTargetNoActionType(v68, 0LL);
      }
      else
      {
        v86 = sub_1B88658(int___TypeInfo, 1LL);
        TargetIds = (System_Int32_array *)v86;
        if ( !v86 )
          sub_1B8880C(0LL, v87);
        if ( !*(_DWORD *)(v86 + 24) )
          sub_1B88814(v86, v87);
        exists = 0;
        *(_DWORD *)(v86 + 32) = v85;
      }
      logicskill = this->fields.logicskill;
      v91 = (System_Int32_array *)sub_1B88658(int___TypeInfo, 1LL);
      if ( !v91 )
        sub_1B8880C(0LL, v92);
      if ( !v91->max_length )
        sub_1B88814(v91, v92);
      v91->m_Items[1] = key;
      if ( !logicskill )
        sub_1B8880C(v91, v92);
      v93 = (System_Collections_ICollection_o *)BattleLogicSkill__taskSkill(
                                                  logicskill,
                                                  v68,
                                                  v91,
                                                  TargetIds,
                                                  1,
                                                  exists,
                                                  0,
                                                  0,
                                                  0,
                                                  v140);
      v95 = (BattleLogicTask_array *)v93;
      if ( (v66 & 1) != 0 )
      {
        IsNullOrEmpty = BasicHelper__IsNullOrEmpty(v93, 0LL);
        if ( IsNullOrEmpty )
        {
          v66 = 1;
          goto LABEL_162;
        }
        if ( !v95 )
          sub_1B8880C(IsNullOrEmpty, v94);
        if ( !v95->max_length )
          sub_1B88814(IsNullOrEmpty, v94);
        v97 = v95->m_Items[0];
        if ( !v97 )
          sub_1B8880C(0LL, v94);
        BattleLogicTask__SetDisplayTriggerIntervalBuff(v97, ServantData, value, 0LL);
      }
      v66 = 0;
LABEL_162:
      v98 = this->fields.logic;
      if ( !v98 )
        sub_1B8880C(0LL, v94);
      BattleLogic__addBattleLogicTask(v98, v95, 0LL);
LABEL_164:
      max_length = value->max_length;
      if ( (int)++v65 >= max_length )
        continue;
      goto LABEL_128;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v147,
    (const MethodInfo_32B753C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____Dispose__);
  Instance = (__int64)v142;
  if ( !v142 )
    goto LABEL_215;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v146,
    v142,
    (const MethodInfo_316DD90 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____GetEnumerator__);
  v147 = v146;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v147,
            (const MethodInfo_32B7418 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____MoveNext__) )
  {
    v100 = this->fields.data;
    if ( !v100 )
      sub_1B8880C(0LL, v99);
    v101 = (int32_t)v147.fields._current.fields.key;
    v102 = v147.fields._current.fields.value;
    isEndAct = BattleData__getServantData(v100, (int32_t)v147.fields._current.fields.key, 0LL);
    selfConcatSvtIndividualities_k__BackingField = isEndAct;
    if ( isEndAct )
    {
      v106 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B887FC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
      BattleBuffData_CheckIndividualitiesData___ctor(
        v106,
        selfConcatSvtIndividualities_k__BackingField,
        0LL,
        0LL,
        0LL,
        0LL,
        0LL,
        0LL);
      if ( !v106 )
        sub_1B8880C(isEndAct, v104);
      selfConcatSvtIndividualities_k__BackingField = (BattleServantData_o *)v106->fields._selfConcatSvtIndividualities_k__BackingField;
    }
    if ( !v102 )
      sub_1B8880C(isEndAct, v104);
    v107 = (int)v102[1].monitor;
    if ( v107 >= 1 )
    {
      for ( i = 0; i < v107; ++i )
      {
        if ( i >= (unsigned int)v107 )
          sub_1B88814(isEndAct, v104);
        v109 = (BattleBuffData_BuffData_o *)*((_QWORD *)&v102[2].klass + i);
        if ( !v109 )
          sub_1B8880C(isEndAct, v104);
        if ( !v109->fields._isRemove )
        {
          if ( !v9 )
            sub_1B8880C(isEndAct, v104);
          isEndAct = (BattleServantData_o *)DataMasterBase_object__object__int___GetEntity(
                                              v9,
                                              v109->fields.buffId,
                                              (const MethodInfo_311D934 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
          if ( isEndAct )
          {
            isEndAct = (BattleServantData_o *)BuffEntity__isEndAct(
                                                (BuffEntity_o *)isEndAct,
                                                (System_Int32_array *)selfConcatSvtIndividualities_k__BackingField,
                                                0LL);
            if ( ((unsigned __int8)isEndAct & 1) != 0 )
            {
              isEndAct = (BattleServantData_o *)BattleBuffData_BuffData__checkAct(v109, 1, 0LL);
              if ( ((unsigned __int8)isEndAct & 1) != 0 )
              {
                v110 = (BattleSkillInfoData_o *)sub_1B887FC(BattleSkillInfoData_TypeInfo);
                BattleSkillInfoData___ctor(v110, 0LL);
                if ( !v110 )
                  sub_1B8880C(v111, v112);
                v110->fields.svtUniqueId = v101;
                v113 = v109->fields.vals;
                if ( !v113 )
                  sub_1B8880C(v111, v112);
                if ( !v113->max_length )
                  sub_1B88814(v111, v112);
                v114 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))v110->klass->vtable._4_set_skillId.method)(
                         v110,
                         (unsigned int)v113->m_Items[1],
                         v110->klass->vtable._5_get_skillId.methodPtr);
                v116 = v109->fields.vals;
                if ( !v116 )
                  sub_1B8880C(v114, v115);
                if ( v116->max_length <= 1 )
                  sub_1B88814(v114, v115);
                v110->fields.skilllv = v116->m_Items[2];
                v117 = this->fields.data;
                if ( !v117 )
                  sub_1B8880C(0LL, v115);
                v118 = BattleData__getServantData(v117, v110->fields.svtUniqueId, 0LL);
                v119 = ((unsigned __int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))v110->klass->vtable._5_get_skillId.method)(
                         v110,
                         v110->klass->vtable._6_get_IndividualityArray.methodPtr);
                if ( !v145 )
                  sub_1B8880C(0LL, v119);
                v120 = SkillLvMaster__GetEntity(v145, v119, v110->fields.skilllv, 0LL);
                if ( !v118 )
                  sub_1B8880C(v120, v121);
                v122 = v120;
                v123 = this->fields.data;
                if ( !v123 )
                  sub_1B8880C(0LL, v121);
                v124 = BattleData__checkAliveOther(v123, v118->fields.uniqueId, 0LL);
                if ( v124 )
                  goto LABEL_198;
                if ( !v122 )
                  sub_1B8880C(v124, v125);
                v126 = this->fields.logic;
                if ( !v126 )
                  sub_1B8880C(0LL, v125);
                isEndAct = (BattleServantData_o *)BattleLogic__checkPtTargetFunction(v126, v122->fields.funcId, 0LL);
                if ( ((unsigned __int8)isEndAct & 1) != 0 )
                {
LABEL_198:
                  v127 = BattleServantData__GetRevengeIdCheckOpponentOnly(v118, v109, 0LL);
                  if ( (v127 & 0x80000000) != 0 )
                  {
                    v130 = Target__getTargetIds(this->fields.data, v110->fields.svtUniqueId, -1, v101, 13, 0LL, 0LL);
                    v131 = BattleSkillInfoData__ExistsNoTargetNoActionType(v110, 0LL);
                  }
                  else
                  {
                    v128 = sub_1B88658(int___TypeInfo, 1LL);
                    v130 = (System_Int32_array *)v128;
                    if ( !v128 )
                      sub_1B8880C(0LL, v129);
                    if ( !*(_DWORD *)(v128 + 24) )
                      sub_1B88814(v128, v129);
                    v131 = 0;
                    *(_DWORD *)(v128 + 32) = v127;
                  }
                  v132 = this->fields.logicskill;
                  v133 = (System_Int32_array *)sub_1B88658(int___TypeInfo, 1LL);
                  if ( !v133 )
                    sub_1B8880C(0LL, v134);
                  if ( !v133->max_length )
                    sub_1B88814(v133, v134);
                  v133->m_Items[1] = v101;
                  if ( !v132 )
                    sub_1B8880C(v133, v134);
                  v135 = BattleLogicSkill__taskSkill(v132, v110, v133, v130, 1, v131, 0, 0, 0, v140);
                  v136 = this->fields.logic;
                  if ( !v136 )
                    sub_1B8880C(0LL, v135);
                  BattleLogic__addBattleLogicTask(v136, v135, 0LL);
                }
              }
            }
          }
        }
        v107 = (int)v102[1].monitor;
      }
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v147,
    (const MethodInfo_32B753C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____Dispose__);
  v137 = this->fields.data;
  if ( !v137
    || (Instance = (__int64)v137->fields._FieldEnvData_k__BackingField) == 0
    || (BattleFieldEnvironmentData__RemoveBgmThenPlayCurrentBgm((BattleFieldEnvironmentData_o *)Instance, 0LL),
        (Instance = (__int64)this->fields.logic) == 0) )
  {
LABEL_215:
    sub_1B8880C(Instance, v6);
  }
  if ( (v144 & 1) != 0 )
    v138 = baseActData;
  else
    v138 = 0LL;
  return BattleLogic__PrevReturnCreateActionData((BattleLogic_o *)Instance, v138, baseActData, 0LL);
}


BattleActionData_o *__fastcall BattleLogicNomal__createEndTurnPlayer(
        BattleLogicNomal_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  __int64 v4; // x24
  __int64 Instance; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  const MethodInfo *v9; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v10; // x21
  int32_t v11; // w1
  int32_t v12; // w2
  int32_t v13; // w3
  BattleData_o *data; // x8
  System_Int32_array *QuestIndividualities; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_Collections_Generic_List_int__o *v18; // x26
  int v19; // w8
  __int64 v20; // x28
  unsigned int v21; // w20
  __int64 v22; // x22
  __int64 *v23; // x22
  __int64 v24; // t1
  bool v25; // w3
  char v26; // w29
  Il2CppObject *v27; // x2
  Il2CppObject *v28; // x29
  struct System_Int32_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  int monitor; // w8
  unsigned int v33; // w22
  Il2CppClass **v34; // x23
  Il2CppClass *v35; // x8
  char *v36; // x23
  Il2CppClass *v37; // t1
  struct BattleLogic_o *logic; // x8
  struct BattleData_o *v39; // x8
  int32_t v40; // w9
  struct BattleData_o *v41; // x8
  __int64 v42; // x27
  int v43; // w8
  unsigned int v44; // w20
  __int64 v45; // x22
  __int64 *v46; // x22
  __int64 v47; // t1
  Il2CppObject *v48; // x28
  struct System_Int32_array *v49; // x8
  _QWORD *v50; // x9
  __int64 v51; // x10
  struct BaseBattleEvent_o *battleEvent; // x23
  struct BattleData_o *v53; // x8
  struct BattlePerformance_o *perf; // x9
  struct BattleData_o *v55; // x8
  System_Collections_Generic_List_object__o *aiNpcDataList; // x23
  System_Action_object__o *v57; // x26
  struct BattleData_o *v58; // x8
  const MethodInfo *v59; // x2
  struct BattleData_o *v60; // x8
  Il2CppObject *v61; // x0
  __int64 v62; // x1
  BattleBuffData_BuffData_array *value; // x24
  int max_length; // w8
  int32_t key; // w25
  unsigned int v66; // w20
  char v67; // w22
  BattleBuffData_BuffData_o *v68; // x28
  BattleSkillInfoData_o *v69; // x26
  __int64 v70; // x0
  __int64 v71; // x1
  struct System_Int32_array *vals; // x8
  __int64 v73; // x0
  __int64 v74; // x1
  struct System_Int32_array *v75; // x8
  BattleData_o *v76; // x0
  BattleServantData_o *ServantData; // x27
  __int64 v78; // x1
  SkillLvEntity_o *v79; // x0
  __int64 v80; // x1
  SkillLvEntity_o *v81; // x29
  BattleData_o *v82; // x0
  _BOOL8 v83; // x0
  __int64 v84; // x1
  BattleLogic_o *v85; // x0
  int32_t v86; // w23
  __int64 v87; // x0
  __int64 v88; // x1
  System_Int32_array *TargetIds; // x28
  bool exists; // w29
  BattleLogicSkill_o *logicskill; // x23
  System_Int32_array *v92; // x0
  __int64 v93; // x1
  System_Collections_ICollection_o *v94; // x0
  __int64 v95; // x1
  BattleLogicTask_array *v96; // x26
  _BOOL8 IsNullOrEmpty; // x0
  BattleLogicTask_o *v98; // x0
  BattleLogic_o *v99; // x0
  __int64 v100; // x1
  BattleData_o *v101; // x0
  int32_t v102; // w23
  Il2CppObject *v103; // x29
  BattleServantData_o *isEndAct; // x0
  __int64 v105; // x1
  BattleServantData_o *v106; // x25
  BattleBuffData_CheckIndividualitiesData_o *v107; // x24
  System_Int32_array *selfConcatSvtIndividualities_k__BackingField; // x24
  int v109; // w8
  int i; // w20
  BattleBuffData_BuffData_o *v111; // x26
  BattleSkillInfoData_o *v112; // x25
  __int64 v113; // x0
  __int64 v114; // x1
  struct System_Int32_array *v115; // x8
  __int64 v116; // x0
  __int64 v117; // x1
  struct System_Int32_array *v118; // x8
  BattleData_o *v119; // x0
  BattleServantData_o *v120; // x27
  __int64 v121; // x1
  SkillLvEntity_o *v122; // x0
  __int64 v123; // x1
  SkillLvEntity_o *v124; // x28
  BattleData_o *v125; // x0
  _BOOL8 v126; // x0
  __int64 v127; // x1
  BattleLogic_o *v128; // x0
  int32_t v129; // w28
  __int64 v130; // x0
  __int64 v131; // x1
  System_Int32_array *v132; // x26
  bool v133; // w27
  BattleLogicSkill_o *v134; // x28
  System_Int32_array *v135; // x0
  __int64 v136; // x1
  BattleLogicTask_array *v137; // x1
  BattleLogic_o *v138; // x0
  struct BattleData_o *v139; // x8
  BattleActionData_o *v140; // x1
  const MethodInfo *v142; // [xsp+8h] [xbp-E8h]
  System_Collections_Generic_Dictionary_int__object__o *v143; // [xsp+10h] [xbp-E0h]
  System_Collections_Generic_Dictionary_int__object__o *v144; // [xsp+18h] [xbp-D8h]
  BattleActionData_o *actiondata; // [xsp+20h] [xbp-D0h]
  char v146; // [xsp+2Ch] [xbp-C4h]
  SkillLvMaster_o *v147; // [xsp+30h] [xbp-C0h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v148; // [xsp+38h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v149; // [xsp+60h] [xbp-90h] BYREF
  Il2CppObject *entity; // [xsp+88h] [xbp-68h] BYREF

  if ( (byte_4A5DD75 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_AiNpcBattleServantData__TypeInfo);
    sub_1B885B0(&BattleActionData_TypeInfo);
    sub_1B885B0(&BattleSkillInfoData_TypeInfo);
    sub_1B885B0(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_BuffMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1B885B0(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData_____ctor__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____get_Current__);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_int__BattleBuffData_BuffData____get_Key__);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_int__BattleBuffData_BuffData____get_Value__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_AiNpcBattleServantData__ForEach__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_BattleLogicNomal___c__DisplayClass33_0__createEndTurnPlayer_b__0__);
    sub_1B885B0(&BattleLogicNomal___c__DisplayClass33_0_TypeInfo);
    sub_1B885B0(&StringLiteral_8726/*"MOTION_PLAYER_TURN_END"*/);
    byte_4A5DD75 = 1;
  }
  entity = 0LL;
  memset(&v149, 0, sizeof(v149));
  v4 = sub_1B887FC(BattleLogicNomal___c__DisplayClass33_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  if ( !v4 )
    goto LABEL_215;
  *(_QWORD *)(v4 + 32) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v4 + 32), (int32_t)this, v7, v8);
  BattleLogicNomal__SetNextTargetId(this, v9);
  actiondata = (BattleActionData_o *)sub_1B887FC(BattleActionData_TypeInfo);
  BattleActionData___ctor(actiondata, 0LL);
  *(_BYTE *)(v4 + 16) = 0;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_215;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_BuffMaster___);
  if ( !this->fields.logic )
    goto LABEL_215;
  v10 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  BattleLogic__resetReducedHpAll(this->fields.logic, 0LL);
  Instance = (__int64)this->fields.logic;
  if ( !Instance )
    goto LABEL_215;
  BattleLogic__updateResultServant((BattleLogic_o *)Instance, 0LL);
  if ( !actiondata )
    goto LABEL_215;
  BattleActionData__setStateField(actiondata, 0LL);
  v11 = StringLiteral_8726/*"MOTION_PLAYER_TURN_END"*/;
  actiondata->fields.motionname = (struct System_String_o *)StringLiteral_8726/*"MOTION_PLAYER_TURN_END"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&actiondata->fields.motionname, v11, v12, v13);
  v144 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B887FC(System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v144,
    (const MethodInfo_316CF84 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData_____ctor__);
  v143 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B887FC(System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v143,
    (const MethodInfo_316CF84 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData_____ctor__);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_215;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  data = this->fields.data;
  v147 = (SkillLvMaster_o *)Instance;
  if ( !data )
    goto LABEL_215;
  QuestIndividualities = BattleData__getQuestIndividualities(data, 0LL);
  *(_QWORD *)(v4 + 24) = QuestIndividualities;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v4 + 24), (int32_t)QuestIndividualities, v16, v17);
  v18 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v18,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (__int64)this->fields.data;
  if ( !Instance )
    goto LABEL_215;
  Instance = (__int64)BattleData__getFieldPlayerServantList((BattleData_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_215;
  v19 = *(_DWORD *)(Instance + 24);
  v20 = Instance;
  if ( v19 >= 1 )
  {
    v146 = 0;
    v21 = 0;
    while ( 1 )
    {
      if ( v21 >= v19 )
        goto LABEL_220;
      v22 = v20 + 8LL * (int)v21;
      v24 = *(_QWORD *)(v22 + 32);
      v23 = (__int64 *)(v22 + 32);
      Instance = v24;
      if ( !v24 )
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
          v25 = 1;
        }
        else
        {
          Instance = (__int64)this->fields.data;
          if ( !Instance )
            goto LABEL_215;
          Instance = BattleData__checkDefeatPoint((BattleData_o *)Instance, 1, 0LL);
          v25 = Instance & 1;
        }
        if ( v21 >= *(_DWORD *)(v20 + 24) )
          goto LABEL_220;
        Instance = *v23;
        if ( !*v23 )
          goto LABEL_215;
        Instance = BattleServantData__turnProgressing(
                     (BattleServantData_o *)Instance,
                     *(System_Int32_array **)(v4 + 24),
                     this->fields.logic,
                     v25,
                     actiondata,
                     0LL);
        if ( v21 >= *(_DWORD *)(v20 + 24) )
          goto LABEL_220;
        v26 = Instance;
        Instance = *v23;
        if ( !*v23 )
          goto LABEL_215;
        Instance = BattleServantData__isAliveLogic((BattleServantData_o *)Instance, 0, 0LL);
        if ( (Instance & 1) != 0 )
        {
          if ( v21 >= *(_DWORD *)(v20 + 24) )
            goto LABEL_220;
          Instance = *v23;
          if ( !*v23 )
            goto LABEL_215;
          Instance = (__int64)BattleServantData__getTTurnEndBufflist((BattleServantData_o *)Instance, 0LL);
          if ( !Instance )
            goto LABEL_215;
          v27 = (Il2CppObject *)Instance;
          if ( *(_QWORD *)(Instance + 24) )
          {
            if ( v21 >= *(_DWORD *)(v20 + 24) )
              goto LABEL_220;
            Instance = (__int64)v143;
            if ( !*v23 || !v143 )
              goto LABEL_215;
            System_Collections_Generic_Dictionary_int__object___Add(
              v143,
              *(_DWORD *)(*v23 + 24),
              v27,
              (const MethodInfo_316D958 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
          }
        }
        if ( v21 >= *(_DWORD *)(v20 + 24) )
          goto LABEL_220;
        if ( !*v23 )
          goto LABEL_215;
        Instance = *(_QWORD *)(*v23 + 792);
        if ( !Instance )
          goto LABEL_215;
        v146 |= v26;
        Instance = (__int64)BattleBuffData__usedProgressing((BattleBuffData_o *)Instance, 0LL);
      }
      if ( v21 >= *(_DWORD *)(v20 + 24) )
        goto LABEL_220;
      Instance = *v23;
      if ( !*v23 )
        goto LABEL_215;
      if ( *(_BYTE *)(Instance + 532) )
      {
        Instance = (__int64)BattleServantData__turnBuffProgressing(
                              (BattleServantData_o *)Instance,
                              *(_BYTE *)(v4 + 16),
                              *(System_Int32_array **)(v4 + 24),
                              this->fields.logic,
                              0LL,
                              0LL);
        if ( v21 >= *(_DWORD *)(v20 + 24) )
          goto LABEL_220;
        v28 = (Il2CppObject *)Instance;
        Instance = *v23;
        if ( !*v23 )
          goto LABEL_215;
        Instance = BattleServantData__isAlive((BattleServantData_o *)Instance, 0, 0LL);
        if ( (Instance & 1) != 0 )
        {
          if ( v21 >= *(_DWORD *)(v20 + 24) )
            goto LABEL_220;
          Instance = *v23;
          if ( !*v23 )
            goto LABEL_215;
          Instance = BattleServantData__isAliveLogic((BattleServantData_o *)Instance, 0, 0LL);
          if ( (Instance & 1) != 0 )
          {
            if ( !v28 )
              goto LABEL_215;
            if ( v28[1].monitor )
            {
              if ( v21 >= *(_DWORD *)(v20 + 24) )
                goto LABEL_220;
              Instance = (__int64)v144;
              if ( !*v23 || !v144 )
                goto LABEL_215;
              System_Collections_Generic_Dictionary_int__object___Add(
                v144,
                *(_DWORD *)(*v23 + 24),
                v28,
                (const MethodInfo_316D958 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
            }
          }
        }
        if ( v21 >= *(_DWORD *)(v20 + 24) )
          goto LABEL_220;
        if ( !*v23 )
          goto LABEL_215;
        if ( !v18 )
          goto LABEL_215;
        v6 = *(unsigned int *)(*v23 + 24);
        items = v18->fields._items;
        v30 = Method_System_Collections_Generic_List_int__Add__;
        ++v18->fields._version;
        if ( !items )
          goto LABEL_215;
        size = v18->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v18,
            v6,
            *(const MethodInfo_34E0810 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
        }
        else
        {
          v18->fields._size = size + 1;
          items->m_Items[size + 1] = v6;
        }
        if ( !v28 )
          goto LABEL_215;
        monitor = (int)v28[1].monitor;
        if ( monitor >= 1 )
          break;
      }
LABEL_77:
      v19 = *(_DWORD *)(v20 + 24);
      if ( (int)++v21 >= v19 )
        goto LABEL_80;
    }
    v33 = 0;
    while ( v33 < monitor )
    {
      v34 = &v28->klass + (int)v33;
      v37 = v34[4];
      v36 = (char *)(v34 + 4);
      v35 = v37;
      if ( !v37 || !v10 )
        goto LABEL_215;
      Instance = DataMasterBase_object__object__int___TryGetEntity(
                   v10,
                   &entity,
                   (int32_t)v35->_1.name,
                   (const MethodInfo_311D988 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
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
          v39 = logic->fields.data;
          if ( !v39 )
            goto LABEL_215;
          if ( v33 >= LODWORD(v28[1].monitor) )
            break;
          if ( !*(_QWORD *)v36 )
            goto LABEL_215;
          v40 = *(_DWORD *)(*(_QWORD *)v36 + 28LL);
          if ( v39->fields.endMasterSkillTurnBuffValue <= v40 )
            v39->fields.endMasterSkillTurnBuffValue = v40;
        }
      }
      monitor = (int)v28[1].monitor;
      if ( (int)++v33 >= monitor )
        goto LABEL_77;
    }
LABEL_220:
    sub_1B88814(Instance, v6);
  }
  v146 = 0;
LABEL_80:
  Instance = (__int64)this->fields.data;
  if ( !Instance )
    goto LABEL_215;
  Instance = (__int64)BattleData__getFieldEnemyServantList((BattleData_o *)Instance, 0, 0LL);
  v41 = this->fields.data;
  if ( !v41 )
    goto LABEL_215;
  v42 = Instance;
  if ( !v41->fields.leaderDown || !v41->fields.endbattleFlg )
  {
    if ( !Instance )
      goto LABEL_215;
    v43 = *(_DWORD *)(Instance + 24);
    if ( v43 >= 1 )
    {
      v44 = 0;
      while ( v44 < v43 )
      {
        v45 = v42 + 8LL * (int)v44;
        v47 = *(_QWORD *)(v45 + 32);
        v46 = (__int64 *)(v45 + 32);
        Instance = v47;
        if ( !v47 )
          goto LABEL_215;
        if ( *(_BYTE *)(Instance + 532) )
        {
          Instance = (__int64)BattleServantData__turnBuffProgressing(
                                (BattleServantData_o *)Instance,
                                *(_BYTE *)(v4 + 16),
                                *(System_Int32_array **)(v4 + 24),
                                this->fields.logic,
                                0LL,
                                0LL);
          if ( v44 >= *(_DWORD *)(v42 + 24) )
            goto LABEL_220;
          v48 = (Il2CppObject *)Instance;
          Instance = *v46;
          if ( !*v46 )
            goto LABEL_215;
          Instance = BattleServantData__isAlive((BattleServantData_o *)Instance, 0, 0LL);
          if ( (Instance & 1) != 0 )
          {
            if ( v44 >= *(_DWORD *)(v42 + 24) )
              goto LABEL_220;
            Instance = *v46;
            if ( !*v46 )
              goto LABEL_215;
            Instance = BattleServantData__isAliveLogic((BattleServantData_o *)Instance, 0, 0LL);
            if ( (Instance & 1) != 0 )
            {
              if ( !v48 )
                goto LABEL_215;
              if ( v48[1].monitor )
              {
                if ( v44 >= *(_DWORD *)(v42 + 24) )
                  goto LABEL_220;
                Instance = (__int64)v144;
                if ( !*v46 || !v144 )
                  goto LABEL_215;
                System_Collections_Generic_Dictionary_int__object___Add(
                  v144,
                  *(_DWORD *)(*v46 + 24),
                  v48,
                  (const MethodInfo_316D958 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____Add__);
              }
            }
          }
          if ( v44 >= *(_DWORD *)(v42 + 24) )
            goto LABEL_220;
          if ( !*v46 )
            goto LABEL_215;
          if ( !v18 )
            goto LABEL_215;
          v6 = *(unsigned int *)(*v46 + 24);
          v49 = v18->fields._items;
          v50 = Method_System_Collections_Generic_List_int__Add__;
          ++v18->fields._version;
          if ( !v49 )
            goto LABEL_215;
          v51 = v18->fields._size;
          if ( (unsigned int)v51 >= v49->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v18,
              v6,
              *(const MethodInfo_34E0810 **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
          }
          else
          {
            v18->fields._size = v51 + 1;
            v49->m_Items[v51 + 1] = v6;
          }
        }
        v43 = *(_DWORD *)(v42 + 24);
        if ( (int)++v44 >= v43 )
          goto LABEL_110;
      }
      goto LABEL_220;
    }
LABEL_110:
    v41 = this->fields.data;
    if ( !v41 )
      goto LABEL_215;
  }
  if ( !v18 )
    goto LABEL_215;
  battleEvent = v41->fields.battleEvent;
  Instance = (__int64)System_Collections_Generic_List_int___ToArray(
                        v18,
                        (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !battleEvent )
    goto LABEL_215;
  Instance = ((__int64 (__fastcall *)(struct BaseBattleEvent_o *, __int64, _QWORD, Il2CppMethodPointer))battleEvent->klass->vtable._34_ProgressNoExecJoinServantsBuff.method)(
               battleEvent,
               Instance,
               *(unsigned __int8 *)(v4 + 16),
               battleEvent->klass->vtable._35_IsPossibleAddBuffParam.methodPtr);
  v53 = this->fields.data;
  if ( !v53 )
    goto LABEL_215;
  perf = v53->fields.perf;
  if ( !perf )
    goto LABEL_215;
  Instance = (__int64)v53->fields.defenceTargetData;
  if ( !Instance )
    goto LABEL_215;
  BattleDefenceTargetData__BuffTurnProgress((BattleDefenceTargetData_o *)Instance, perf->fields.defenceTarget, 0LL);
  v55 = this->fields.data;
  if ( !v55 )
    goto LABEL_215;
  aiNpcDataList = (System_Collections_Generic_List_object__o *)v55->fields.aiNpcDataList;
  v57 = (System_Action_object__o *)sub_1B887FC(System_Action_AiNpcBattleServantData__TypeInfo);
  System_Action_object____ctor(
    v57,
    (Il2CppObject *)v4,
    Method_BattleLogicNomal___c__DisplayClass33_0__createEndTurnPlayer_b__0__,
    0LL);
  if ( !aiNpcDataList )
    goto LABEL_215;
  System_Collections_Generic_List_object___ForEach(
    aiNpcDataList,
    (System_Action_T__o *)v57,
    (const MethodInfo_34FE274 *)Method_System_Collections_Generic_List_AiNpcBattleServantData__ForEach__);
  v58 = this->fields.data;
  if ( !v58 )
    goto LABEL_215;
  Instance = (__int64)v58->fields._FieldEnvData_k__BackingField;
  if ( !Instance )
    goto LABEL_215;
  BattleFieldEnvironmentData__TurnProgressing(
    (BattleFieldEnvironmentData_o *)Instance,
    this->fields.logic,
    *(_BYTE *)(v4 + 16),
    0LL);
  BattleLogicNomal__UpdateEndTurnBuff(this, *(System_Int32_array **)(v4 + 24), v59);
  v60 = this->fields.data;
  if ( !v60 )
    goto LABEL_215;
  Instance = (__int64)v143;
  v60->fields.currentTurn = 1;
  if ( !v143 )
    goto LABEL_215;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v148,
    v143,
    (const MethodInfo_316DD90 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____GetEnumerator__);
  v149 = v148;
  while ( 1 )
  {
    v61 = (Il2CppObject *)System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
                            &v149,
                            (const MethodInfo_32B7418 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____MoveNext__);
    if ( ((unsigned __int8)v61 & 1) == 0 )
      break;
    value = (BattleBuffData_BuffData_array *)v149.fields._current.fields.value;
    if ( !v149.fields._current.fields.value )
      sub_1B8880C(v61, v62);
    max_length = (int)v149.fields._current.fields.value[1].monitor;
    if ( max_length >= 1 )
    {
      key = (int32_t)v149.fields._current.fields.key;
      v66 = 0;
      v67 = 1;
LABEL_127:
      if ( v66 >= max_length )
        sub_1B88814(v61, v62);
      v68 = value->m_Items[v66];
      if ( !v68 )
        sub_1B8880C(v61, v62);
      if ( v68->fields._isRemove )
        goto LABEL_163;
      if ( !v10 )
        sub_1B8880C(v61, v62);
      v61 = DataMasterBase_object__object__int___GetEntity(
              v10,
              v68->fields.buffId,
              (const MethodInfo_311D934 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
      if ( !v61 )
        goto LABEL_163;
      v69 = (BattleSkillInfoData_o *)sub_1B887FC(BattleSkillInfoData_TypeInfo);
      BattleSkillInfoData___ctor(v69, 0LL);
      if ( !v69 )
        sub_1B8880C(v70, v71);
      v69->fields.svtUniqueId = key;
      vals = v68->fields.vals;
      if ( !vals )
        sub_1B8880C(v70, v71);
      if ( !vals->max_length )
        sub_1B88814(v70, v71);
      v73 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))v69->klass->vtable._4_set_skillId.method)(
              v69,
              (unsigned int)vals->m_Items[1],
              v69->klass->vtable._5_get_skillId.methodPtr);
      v75 = v68->fields.vals;
      if ( !v75 )
        sub_1B8880C(v73, v74);
      if ( v75->max_length <= 1 )
        sub_1B88814(v73, v74);
      v69->fields.skilllv = v75->m_Items[2];
      v76 = this->fields.data;
      if ( !v76 )
        sub_1B8880C(0LL, v74);
      ServantData = BattleData__getServantData(v76, v69->fields.svtUniqueId, 0LL);
      v78 = ((unsigned __int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))v69->klass->vtable._5_get_skillId.method)(
              v69,
              v69->klass->vtable._6_get_IndividualityArray.methodPtr);
      if ( !v147 )
        sub_1B8880C(0LL, v78);
      v79 = SkillLvMaster__GetEntity(v147, v78, v69->fields.skilllv, 0LL);
      if ( !ServantData )
        sub_1B8880C(v79, v80);
      v81 = v79;
      v82 = this->fields.data;
      if ( !v82 )
        sub_1B8880C(0LL, v80);
      v83 = BattleData__checkAliveOther(v82, ServantData->fields.uniqueId, 0LL);
      if ( !v83 )
      {
        if ( !v81 )
          sub_1B8880C(v83, v84);
        v85 = this->fields.logic;
        if ( !v85 )
          sub_1B8880C(0LL, v84);
        v61 = (Il2CppObject *)BattleLogic__checkPtTargetFunction(v85, v81->fields.funcId, 0LL);
        if ( ((unsigned __int8)v61 & 1) == 0 )
          goto LABEL_163;
      }
      v86 = BattleServantData__GetRevengeIdCheckOpponentOnly(ServantData, v68, 0LL);
      if ( (v86 & 0x80000000) != 0 )
      {
        TargetIds = Target__getTargetIds(this->fields.data, v69->fields.svtUniqueId, -1, key, 13, 0LL, 0LL);
        exists = BattleSkillInfoData__ExistsNoTargetNoActionType(v69, 0LL);
      }
      else
      {
        v87 = sub_1B88658(int___TypeInfo, 1LL);
        TargetIds = (System_Int32_array *)v87;
        if ( !v87 )
          sub_1B8880C(0LL, v88);
        if ( !*(_DWORD *)(v87 + 24) )
          sub_1B88814(v87, v88);
        exists = 0;
        *(_DWORD *)(v87 + 32) = v86;
      }
      logicskill = this->fields.logicskill;
      v92 = (System_Int32_array *)sub_1B88658(int___TypeInfo, 1LL);
      if ( !v92 )
        sub_1B8880C(0LL, v93);
      if ( !v92->max_length )
        sub_1B88814(v92, v93);
      v92->m_Items[1] = key;
      if ( !logicskill )
        sub_1B8880C(v92, v93);
      v94 = (System_Collections_ICollection_o *)BattleLogicSkill__taskSkill(
                                                  logicskill,
                                                  v69,
                                                  v92,
                                                  TargetIds,
                                                  1,
                                                  exists,
                                                  0,
                                                  0,
                                                  0,
                                                  v142);
      v96 = (BattleLogicTask_array *)v94;
      if ( (v67 & 1) != 0 )
      {
        IsNullOrEmpty = BasicHelper__IsNullOrEmpty(v94, 0LL);
        if ( IsNullOrEmpty )
        {
          v67 = 1;
          goto LABEL_161;
        }
        if ( !v96 )
          sub_1B8880C(IsNullOrEmpty, v95);
        if ( !v96->max_length )
          sub_1B88814(IsNullOrEmpty, v95);
        v98 = v96->m_Items[0];
        if ( !v98 )
          sub_1B8880C(0LL, v95);
        BattleLogicTask__SetDisplayTriggerIntervalBuff(v98, ServantData, value, 0LL);
      }
      v67 = 0;
LABEL_161:
      v99 = this->fields.logic;
      if ( !v99 )
        sub_1B8880C(0LL, v95);
      BattleLogic__addBattleLogicTask(v99, v96, 0LL);
LABEL_163:
      max_length = value->max_length;
      if ( (int)++v66 >= max_length )
        continue;
      goto LABEL_127;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v149,
    (const MethodInfo_32B753C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____Dispose__);
  Instance = (__int64)v144;
  if ( !v144 )
    goto LABEL_215;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v148,
    v144,
    (const MethodInfo_316DD90 *)Method_System_Collections_Generic_Dictionary_int__BattleBuffData_BuffData____GetEnumerator__);
  v149 = v148;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v149,
            (const MethodInfo_32B7418 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____MoveNext__) )
  {
    v101 = this->fields.data;
    if ( !v101 )
      sub_1B8880C(0LL, v100);
    v102 = (int32_t)v149.fields._current.fields.key;
    v103 = v149.fields._current.fields.value;
    isEndAct = BattleData__getServantData(v101, (int32_t)v149.fields._current.fields.key, 0LL);
    v106 = isEndAct;
    if ( isEndAct )
    {
      v107 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B887FC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
      BattleBuffData_CheckIndividualitiesData___ctor(v107, v106, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
      if ( !v107 )
        sub_1B8880C(isEndAct, v105);
      selfConcatSvtIndividualities_k__BackingField = v107->fields._selfConcatSvtIndividualities_k__BackingField;
      if ( !v103 )
LABEL_250:
        sub_1B8880C(isEndAct, v105);
    }
    else
    {
      selfConcatSvtIndividualities_k__BackingField = 0LL;
      if ( !v103 )
        goto LABEL_250;
    }
    v109 = (int)v103[1].monitor;
    if ( v109 >= 1 )
    {
      for ( i = 0; i < v109; ++i )
      {
        if ( i >= (unsigned int)v109 )
          sub_1B88814(isEndAct, v105);
        v111 = (BattleBuffData_BuffData_o *)*((_QWORD *)&v103[2].klass + i);
        if ( !v111 )
          sub_1B8880C(isEndAct, v105);
        if ( !v111->fields._isRemove )
        {
          if ( !v10 )
            sub_1B8880C(isEndAct, v105);
          isEndAct = (BattleServantData_o *)DataMasterBase_object__object__int___GetEntity(
                                              v10,
                                              v111->fields.buffId,
                                              (const MethodInfo_311D934 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
          if ( isEndAct )
          {
            isEndAct = (BattleServantData_o *)BuffEntity__isEndAct(
                                                (BuffEntity_o *)isEndAct,
                                                selfConcatSvtIndividualities_k__BackingField,
                                                0LL);
            if ( ((unsigned __int8)isEndAct & 1) != 0 )
            {
              isEndAct = (BattleServantData_o *)BattleBuffData_BuffData__checkAct(v111, 1, 0LL);
              if ( ((unsigned __int8)isEndAct & 1) != 0 )
              {
                v112 = (BattleSkillInfoData_o *)sub_1B887FC(BattleSkillInfoData_TypeInfo);
                BattleSkillInfoData___ctor(v112, 0LL);
                if ( !v112 )
                  sub_1B8880C(v113, v114);
                v112->fields.svtUniqueId = v102;
                v115 = v111->fields.vals;
                if ( !v115 )
                  sub_1B8880C(v113, v114);
                if ( !v115->max_length )
                  sub_1B88814(v113, v114);
                v116 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))v112->klass->vtable._4_set_skillId.method)(
                         v112,
                         (unsigned int)v115->m_Items[1],
                         v112->klass->vtable._5_get_skillId.methodPtr);
                v118 = v111->fields.vals;
                if ( !v118 )
                  sub_1B8880C(v116, v117);
                if ( v118->max_length <= 1 )
                  sub_1B88814(v116, v117);
                v112->fields.skilllv = v118->m_Items[2];
                v119 = this->fields.data;
                if ( !v119 )
                  sub_1B8880C(0LL, v117);
                v120 = BattleData__getServantData(v119, v112->fields.svtUniqueId, 0LL);
                v121 = ((unsigned __int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))v112->klass->vtable._5_get_skillId.method)(
                         v112,
                         v112->klass->vtable._6_get_IndividualityArray.methodPtr);
                if ( !v147 )
                  sub_1B8880C(0LL, v121);
                v122 = SkillLvMaster__GetEntity(v147, v121, v112->fields.skilllv, 0LL);
                if ( !v120 )
                  sub_1B8880C(v122, v123);
                v124 = v122;
                v125 = this->fields.data;
                if ( !v125 )
                  sub_1B8880C(0LL, v123);
                v126 = BattleData__checkAliveOther(v125, v120->fields.uniqueId, 0LL);
                if ( v126 )
                  goto LABEL_198;
                if ( !v124 )
                  sub_1B8880C(v126, v127);
                v128 = this->fields.logic;
                if ( !v128 )
                  sub_1B8880C(0LL, v127);
                isEndAct = (BattleServantData_o *)BattleLogic__checkPtTargetFunction(v128, v124->fields.funcId, 0LL);
                if ( ((unsigned __int8)isEndAct & 1) != 0 )
                {
LABEL_198:
                  v129 = BattleServantData__GetRevengeIdCheckOpponentOnly(v120, v111, 0LL);
                  if ( (v129 & 0x80000000) != 0 )
                  {
                    v132 = Target__getTargetIds(this->fields.data, v112->fields.svtUniqueId, -1, v102, 13, 0LL, 0LL);
                    v133 = BattleSkillInfoData__ExistsNoTargetNoActionType(v112, 0LL);
                  }
                  else
                  {
                    v130 = sub_1B88658(int___TypeInfo, 1LL);
                    v132 = (System_Int32_array *)v130;
                    if ( !v130 )
                      sub_1B8880C(0LL, v131);
                    if ( !*(_DWORD *)(v130 + 24) )
                      sub_1B88814(v130, v131);
                    v133 = 0;
                    *(_DWORD *)(v130 + 32) = v129;
                  }
                  v134 = this->fields.logicskill;
                  v135 = (System_Int32_array *)sub_1B88658(int___TypeInfo, 1LL);
                  if ( !v135 )
                    sub_1B8880C(0LL, v136);
                  if ( !v135->max_length )
                    sub_1B88814(v135, v136);
                  v135->m_Items[1] = v102;
                  if ( !v134 )
                    sub_1B8880C(v135, v136);
                  v137 = BattleLogicSkill__taskSkill(v134, v112, v135, v132, 1, v133, 0, 0, 0, v142);
                  v138 = this->fields.logic;
                  if ( !v138 )
                    sub_1B8880C(0LL, v137);
                  BattleLogic__addBattleLogicTask(v138, v137, 0LL);
                }
              }
            }
          }
        }
        v109 = (int)v103[1].monitor;
      }
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v149,
    (const MethodInfo_32B753C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__BattleBuffData_BuffData____Dispose__);
  v139 = this->fields.data;
  if ( !v139
    || (Instance = (__int64)v139->fields._FieldEnvData_k__BackingField) == 0
    || (BattleFieldEnvironmentData__RemoveBgmThenPlayCurrentBgm((BattleFieldEnvironmentData_o *)Instance, 0LL),
        (Instance = (__int64)this->fields.logic) == 0) )
  {
LABEL_215:
    sub_1B8880C(Instance, v6);
  }
  if ( (v146 & 1) != 0 )
    v140 = actiondata;
  else
    v140 = 0LL;
  return BattleLogic__PrevReturnCreateActionData((BattleLogic_o *)Instance, v140, actiondata, 0LL);
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

  if ( (byte_4A5DD72 & 1) == 0 )
  {
    sub_1B885B0(&BattleActionData_TypeInfo);
    byte_4A5DD72 = 1;
  }
  v4 = sub_1B887FC(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v4, 0LL);
  if ( !v4 || (BattleActionData__setStateMotion((BattleActionData_o *)v4, 0LL), !task) )
    sub_1B8880C(v5, v6);
  *(_BYTE *)(v4 + 241) = task->fields.isForcedSpeedOne;
  *(_DWORD *)(v4 + 32) = BattleLogicTask__getActorId(task, 0LL);
  motionName = task->fields.motionName;
  *(_QWORD *)(v4 + 64) = motionName;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v4 + 64), (int32_t)motionName, v8, v9);
  motionMessage = task->fields.motionMessage;
  *(_QWORD *)(v4 + 128) = motionMessage;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v4 + 128), (int32_t)motionMessage, v11, v12);
  *(_DWORD *)(v4 + 136) = task->fields.messageType;
  targetObject = task->fields.targetObject;
  *(_QWORD *)(v4 + 72) = targetObject;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v4 + 72), (int32_t)targetObject, v14, v15);
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
    sub_1B8880C(this, task);
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
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w1
  BattleActionData_ShiftServant_o *v11; // x22

  v4 = this;
  if ( (byte_4A5DD7C & 1) == 0 )
  {
    sub_1B885B0(&BattleActionData_TypeInfo);
    sub_1B885B0(&BattleActionData_ShiftServant_TypeInfo);
    this = (BattleLogicNomal_o *)sub_1B885B0(&StringLiteral_8730/*"MOTION_SHIFT"*/);
    byte_4A5DD7C = 1;
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
    v7 = sub_1B887FC(BattleActionData_TypeInfo);
    BattleActionData___ctor((BattleActionData_o *)v7, 0LL);
    if ( v7 )
    {
      *(_DWORD *)(v7 + 32) = v6->fields.uniqueId;
      v10 = StringLiteral_8730/*"MOTION_SHIFT"*/;
      *(_QWORD *)(v7 + 64) = StringLiteral_8730/*"MOTION_SHIFT"*/;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 64), v10, v8, v9);
      v11 = (BattleActionData_ShiftServant_o *)sub_1B887FC(BattleActionData_ShiftServant_TypeInfo);
      BattleActionData_ShiftServant___ctor(v11, 0, 0LL);
      if ( v11 )
      {
        BattleActionData_ShiftServant__setBeforeSvtData(v11, v6, 0LL);
        BattleServantData__setShiftServant(v6, v4->fields.data, 1, 0LL);
        BattleServantData__SetIsBattleShift(v6, 1, 0LL);
        BattleActionData_ShiftServant__setCheckSvtData(v11, v6, 0LL);
        BattleActionData__setShiftServant((BattleActionData_o *)v7, v11, 0LL);
        this = (BattleLogicNomal_o *)v4->fields.logic;
        if ( this )
        {
          BattleLogic__actEnemyPtPassiveSkill((BattleLogic_o *)this, v6->fields.uniqueId, 1, 0, 0LL);
          return (BattleActionData_o *)v7;
        }
      }
    }
LABEL_12:
    sub_1B8880C(this, task);
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

  if ( (byte_4A5DD73 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_11068/*"RESET_CAMERA_BAT"*/);
    byte_4A5DD73 = 1;
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
              (System_String_o *)StringLiteral_11068/*"RESET_CAMERA_BAT"*/,
              0LL);
            return v8;
          }
        }
      }
LABEL_18:
      sub_1B8880C(StartTurn, v6);
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
        sub_1B88814(data, task);
      v8 = *((_QWORD *)data + v7 + 4);
      if ( !v8 )
        break;
      ++v7;
      *(_BYTE *)(v8 + 532) = 1;
      if ( v6 == v7 )
        goto LABEL_8;
    }
LABEL_12:
    sub_1B8880C(data, task);
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
    sub_1B8880C(this, 0LL);
  v3 = *(_QWORD *)&svtList->max_length;
  if ( (int)v3 < 1 )
    return 0;
  v5 = 0;
  v6 = 0LL;
  do
  {
    if ( v6 >= (unsigned int)v3 )
      sub_1B88814(this, svtList);
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
    sub_1B88814(data, *(_QWORD *)&uniqueId);
  if ( !*(_QWORD *)v9 )
LABEL_14:
    sub_1B8880C(data, *(_QWORD *)&uniqueId);
  return *(_DWORD *)(*(_QWORD *)v9 + 24LL);
}


BaseBattleEvent_o *__fastcall BattleLogicNomal__get_BattleEvent(BattleLogicNomal_o *this, const MethodInfo *method)
{
  struct BattleData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_1B8880C(this, method);
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

  if ( (byte_4A5DD66 & 1) == 0 )
  {
    sub_1B885B0(&Method_BattleLogicNomal_shiftServantTaskReaction__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
    sub_1B885B0(&BattleLogic_reactionFunction_TypeInfo);
    byte_4A5DD66 = 1;
  }
  v5 = (BattleLogic_reactionFunction_o *)sub_1B887FC(BattleLogic_reactionFunction_TypeInfo);
  BattleLogic_reactionFunction___ctor(v5, (Il2CppObject *)this, Method_BattleLogicNomal_shiftServantTaskReaction__, 0LL);
  if ( !list )
    sub_1B8880C(v6, v7);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)list,
    36,
    (Il2CppObject *)v5,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_BattleLogicTask_ACTIONTYPE__BattleLogic_reactionFunction__Add__);
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
  int32_t v13; // w2
  int32_t v14; // w3
  struct System_Object_array *v15; // x8
  _QWORD *v16; // x9
  __int64 v17; // x10
  Il2CppClass **v18; // x0
  const MethodInfo *v19; // x2
  __int64 v21; // x22
  const MethodInfo *v22; // x2
  __int64 v23; // x23
  System_Func_object__bool__o *v24; // x24
  int32_t v25; // w2
  int32_t v26; // w3
  int32_t v27; // w2
  int32_t v28; // w3
  const MethodInfo *v29; // x2
  struct BattleLogic_o *logic; // x8
  struct BattleLogicReaction_o *logicReaction; // x8
  BattleLogicTask_o *v32; // x21
  int32_t v33; // w2
  int32_t v34; // w3
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  Il2CppClass **v38; // x0
  struct BattleLogic_o *v39; // x8
  System_Collections_Generic_IEnumerable_T__o *TaskGuts; // x0
  BattleLogicTask_o *v41; // x21
  int32_t v42; // w2
  int32_t v43; // w3
  struct System_Object_array *v44; // x8
  _QWORD *v45; // x9
  __int64 v46; // x10
  Il2CppClass **v47; // x0

  if ( (byte_4A5DD7D & 1) == 0 )
  {
    sub_1B885B0(&BattleLogicTask_TypeInfo);
    sub_1B885B0(&BeforeShiftServantReactTaskCreator_TypeInfo);
    sub_1B885B0(&System_Func_BattleServantData__bool__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_1B885B0(&ReactTaskTargetFilter_TypeInfo);
    sub_1B885B0(&Method_BattleLogicNomal___c__DisplayClass46_0__shiftServantTaskReaction_b__0__);
    sub_1B885B0(&BattleLogicNomal___c__DisplayClass46_0_TypeInfo);
    byte_4A5DD7D = 1;
  }
  v5 = sub_1B887FC(BattleLogicNomal___c__DisplayClass46_0_TypeInfo);
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
  v10 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
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
    v21 = sub_1B887FC(BeforeShiftServantReactTaskCreator_TypeInfo);
    ServantReactTaskCreator___ctor((ServantReactTaskCreator_o *)v21, 24, v22);
    if ( v21 )
    {
      ServantReactTaskCreator__OrderE((ServantReactTaskCreator_o *)v21, v7);
      v23 = sub_1B887FC(ReactTaskTargetFilter_TypeInfo);
      System_Object___ctor((Il2CppObject *)v23, 0LL);
      v24 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_BattleServantData__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v24,
        (Il2CppObject *)v5,
        Method_BattleLogicNomal___c__DisplayClass46_0__shiftServantTaskReaction_b__0__,
        0LL);
      if ( v23 )
      {
        *(_QWORD *)(v23 + 16) = v24;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v23 + 16), (int32_t)v24, v25, v26);
        *(_QWORD *)(v21 + 24) = v23;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v21 + 24), v23, v27, v28);
        logic = this->fields.logic;
        if ( logic )
        {
          logicReaction = logic->fields.logicReaction;
          if ( logicReaction )
          {
            ShiftableUniqueId = (BattleData_o *)ServantReactTaskCreator__CreateTasks(
                                                  (ServantReactTaskCreator_o *)v21,
                                                  logicReaction->fields.logic,
                                                  v29);
            if ( v10 )
            {
              System_Collections_Generic_List_object___AddRange(
                v10,
                (System_Collections_Generic_IEnumerable_T__o *)ShiftableUniqueId,
                (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
              v32 = (BattleLogicTask_o *)sub_1B887FC(BattleLogicTask_TypeInfo);
              BattleLogicTask___ctor(v32, 0LL);
              if ( v32 )
              {
                v32->fields.actiontype = 37;
                BattleLogicTask__setActor(v32, 3, *(_DWORD *)(v5 + 16), 0LL);
                items = v10->fields._items;
                v36 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
                ++v10->fields._version;
                if ( items )
                {
                  size = v10->fields._size;
                  if ( (unsigned int)size >= items->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v10,
                      (Il2CppObject *)v32,
                      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v38 = &items->obj.klass + size;
                    v10->fields._size = size + 1;
                    v38[4] = (Il2CppClass *)v32;
                    sub_1B88554((ServantStatusBattleListViewItem_o *)(v38 + 4), (int32_t)v32, v33, v34);
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
    sub_1B8880C(ShiftableUniqueId, v7);
  }
  v12 = (BattleLogicTask_o *)sub_1B887FC(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v12, 0LL);
  if ( !v12 )
    goto LABEL_37;
  v12->fields.actiontype = 62;
  BattleLogicTask__setActor(v12, 3, *(_DWORD *)(v5 + 16), 0LL);
  if ( !v10 )
    goto LABEL_37;
  v15 = v10->fields._items;
  v16 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v10->fields._version;
  if ( !v15 )
    goto LABEL_37;
  v17 = v10->fields._size;
  if ( (unsigned int)v17 >= v15->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v10,
      (Il2CppObject *)v12,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
  }
  else
  {
    v18 = &v15->obj.klass + v17;
    v10->fields._size = v17 + 1;
    v18[4] = (Il2CppClass *)v12;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v18 + 4), (int32_t)v12, v13, v14);
  }
  v39 = this->fields.logic;
  if ( !v39 )
    goto LABEL_37;
  ShiftableUniqueId = (BattleData_o *)v39->fields.logicReaction;
  if ( !ShiftableUniqueId )
    goto LABEL_37;
  TaskGuts = (System_Collections_Generic_IEnumerable_T__o *)BattleLogicReaction__createTaskGuts(
                                                              (BattleLogicReaction_o *)ShiftableUniqueId,
                                                              *(_DWORD *)(v5 + 16),
                                                              v19);
  if ( TaskGuts )
    System_Collections_Generic_List_object___AddRange(
      v10,
      TaskGuts,
      (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
LABEL_31:
  v41 = (BattleLogicTask_o *)sub_1B887FC(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v41, 0LL);
  if ( !v41 )
    goto LABEL_37;
  v41->fields.actiontype = 36;
  BattleLogicTask__setActor(v41, 3, *(_DWORD *)(v5 + 16), 0LL);
  v44 = v10->fields._items;
  v45 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v10->fields._version;
  if ( !v44 )
    goto LABEL_37;
  v46 = v10->fields._size;
  if ( (unsigned int)v46 >= v44->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v10,
      (Il2CppObject *)v41,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
  }
  else
  {
    v47 = &v44->obj.klass + v46;
    v10->fields._size = v46 + 1;
    v47[4] = (Il2CppClass *)v41;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v47 + 4), (int32_t)v41, v42, v43);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v10,
                                    (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  BattleCommandData_o *v12; // x22
  BattleServantData_o *v13; // x23
  BattleLogicTask_o *v14; // x23
  int32_t v15; // w2
  int32_t v16; // w3
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0

  if ( (byte_4A5DD68 & 1) == 0 )
  {
    sub_1B885B0(&BattleDataDefine_TypeInfo);
    sub_1B885B0(&BattleLogicTask_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4A5DD68 = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
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
  battleEvent = (BattleData_o *)BattleData__getSelectCommand(data, v11->static_fields->COMMAND_CARD_NUM_TO_SELECT, 0LL);
  if ( !battleEvent )
    goto LABEL_26;
  v12 = (BattleCommandData_o *)battleEvent;
  battleEvent = this->fields.data;
  if ( !battleEvent )
    goto LABEL_26;
  battleEvent = (BattleData_o *)BattleData__getServantData(battleEvent, v12->fields.uniqueId, 0LL);
  if ( !battleEvent )
    goto LABEL_26;
  v13 = (BattleServantData_o *)battleEvent;
  battleEvent = (BattleData_o *)BattleServantData__isAlive((BattleServantData_o *)battleEvent, 0, 0LL);
  if ( ((unsigned __int8)battleEvent & 1) == 0
    || !v13->fields.isEntry
    || (battleEvent = (BattleData_o *)BattleServantData__isAction(v13, 0LL), ((unsigned __int8)battleEvent & 1) == 0) )
  {
LABEL_23:
    if ( v6 )
      return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                        v6,
                                        (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_26:
    sub_1B8880C(battleEvent, v8);
  }
  v14 = (BattleLogicTask_o *)sub_1B887FC(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v14, 0LL);
  if ( !v14 )
    goto LABEL_26;
  BattleLogicTask__setActor(v14, 2, v12->fields.uniqueId, 0LL);
  battleEvent = (BattleData_o *)this->fields.logictarget;
  if ( !battleEvent )
    goto LABEL_26;
  BattleLogicTarget__getTargetBattleServantData((BattleLogicTarget_o *)battleEvent, v14, 0LL);
  BattleLogicTask__setAddAttackCommand(v14, data->fields.combodata, v12, 0LL);
  v14->fields.isCanCounterTask = 1;
  if ( !v6 )
    goto LABEL_26;
  items = v6->fields._items;
  v18 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v6->fields._version;
  if ( !items )
    goto LABEL_26;
  size = v6->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v6,
      (Il2CppObject *)v14,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    v20 = &items->obj.klass + size;
    v6->fields._size = size + 1;
    v20[4] = (Il2CppClass *)v14;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v20 + 4), (int32_t)v14, v15, v16);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v6,
                                    (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  int32_t v9; // w2
  int32_t v10; // w3
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x0

  if ( (byte_4A5DD79 & 1) == 0 )
  {
    sub_1B885B0(&BattleLogicTask_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4A5DD79 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( ltype == 35 )
  {
    v8 = (BattleLogicTask_o *)sub_1B887FC(BattleLogicTask_TypeInfo);
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
                                          (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_14:
      sub_1B8880C(v6, v7);
    }
    v8 = (BattleLogicTask_o *)sub_1B887FC(BattleLogicTask_TypeInfo);
    BattleLogicTask___ctor(v8, 0LL);
    if ( !v8 )
      goto LABEL_14;
    BattleLogicTask__setBuffAddPlayer(v8, 0LL);
  }
  if ( !v5 )
    goto LABEL_14;
  items = v5->fields._items;
  v12 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v5->fields._version;
  if ( !items )
    goto LABEL_14;
  size = v5->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v5,
      (Il2CppObject *)v8,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    v5->fields._size = size + 1;
    v14[4] = (Il2CppClass *)v8;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v14 + 4), (int32_t)v8, v9, v10);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v5,
                                    (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  int32_t v9; // w2
  int32_t v10; // w3
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x0

  if ( (byte_4A5DD6B & 1) == 0 )
  {
    sub_1B885B0(&BattleLogicTask_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4A5DD6B = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  logic = this->fields.logic;
  if ( !logic
    || (BattleLogic__resetOverKill(logic, 0LL),
        v8 = (BattleLogicTask_o *)sub_1B887FC(BattleLogicTask_TypeInfo),
        BattleLogicTask___ctor(v8, 0LL),
        !v8)
    || (BattleLogicTask__setSystem(v8, 0LL), !v5)
    || (items = v5->fields._items,
        v12 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++v5->fields._version,
        !items) )
  {
    sub_1B8880C(logic, v6);
  }
  size = v5->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v5,
      (Il2CppObject *)v8,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    v5->fields._size = size + 1;
    v14[4] = (Il2CppClass *)v8;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v14 + 4), (int32_t)v8, v9, v10);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v5,
                                    (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
    sub_1B8880C(this, *(_QWORD *)&ltype);
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
  int32_t v18; // w2
  int32_t v19; // w3
  struct System_Object_array *v20; // x8
  _QWORD *v21; // x9
  __int64 v22; // x10
  Il2CppClass **v23; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0

  if ( (byte_4A5DD67 & 1) == 0 )
  {
    sub_1B885B0(&BattleLogicTask_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4A5DD67 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
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
                                        (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    goto LABEL_37;
  }
  v15 = (BattleLogicTask_o *)sub_1B887FC(BattleLogicTask_TypeInfo);
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
        v27 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
        ++v7->fields._version;
        if ( items )
        {
          size = v7->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v7,
              (Il2CppObject *)v15,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
          }
          else
          {
            v29 = &items->obj.klass + size;
            v7->fields._size = size + 1;
            v29[4] = (Il2CppClass *)v15;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v29 + 4), (int32_t)v15, v24, v25);
          }
          return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                            v7,
                                            (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
        }
      }
    }
LABEL_37:
    sub_1B8880C(battleEvent, v9);
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
  v20 = v7->fields._items;
  v21 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v7->fields._version;
  if ( !v20 )
    goto LABEL_37;
  v22 = v7->fields._size;
  if ( (unsigned int)v22 >= v20->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v7,
      (Il2CppObject *)v15,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
  }
  else
  {
    v23 = &v20->obj.klass + v22;
    v7->fields._size = v22 + 1;
    v23[4] = (Il2CppClass *)v15;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v23 + 4), (int32_t)v15, v18, v19);
  }
  BattleData__setTDChain(data, 1, 0LL);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v7,
                                    (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  int32_t v35; // w2
  int32_t v36; // w3
  struct System_Object_array *items; // x8
  _QWORD *v38; // x9
  __int64 size; // x10
  Il2CppClass **v40; // x0
  __int64 v41; // x9
  BattleLogicNomal___c_c *v42; // x0
  System_Action_object__o *_9__16_0; // x20
  Il2CppObject *v44; // x21
  struct BattleLogicNomal___c_StaticFields *static_fields; // x0
  int32_t v46; // w2
  int32_t v47; // w3
  struct BattleLogic_o *logic; // x8
  _BOOL4 v50; // [xsp+4h] [xbp-9Ch]
  BattleLogicNomal_o *v51; // [xsp+8h] [xbp-98h]
  SkillLvMaster_o *v52; // [xsp+10h] [xbp-90h]
  System_Collections_Generic_HashSet_T__o *v53; // [xsp+18h] [xbp-88h]
  DataMasterBase_TMaster__TEntity__PKType__o *v54; // [xsp+20h] [xbp-80h]
  char v56; // [xsp+38h] [xbp-68h]
  int32_t type; // [xsp+3Ch] [xbp-64h]

  v6 = isInitLogicHp;
  if ( (byte_4A5DD69 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_BattleBuffData_BuffData__TypeInfo);
    sub_1B885B0(&Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
    sub_1B885B0(&BattleLogicTask_TypeInfo);
    sub_1B885B0(&BattleSkillInfoData_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_BuffMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1B885B0(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Remove__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData___ctor___76017376);
    sub_1B885B0(&System_Collections_Generic_HashSet_BattleBuffData_BuffData__TypeInfo);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask__get_Count__);
    sub_1B885B0(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_BattleLogicNomal___c__taskCounterFunc_b__16_0__);
    sub_1B885B0(&BattleLogicNomal___c_TypeInfo);
    byte_4A5DD69 = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_76;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_76;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_BuffMaster___);
  v54 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
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
        sub_1B88814(Instance, wasAttackTargetId);
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
                if ( v19->fields.isEnemy != *(unsigned __int8 *)(Instance + 471) )
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
                      v51 = this;
                      v52 = (SkillLvMaster_o *)MasterData_object;
                      v50 = v6;
                      v53 = (System_Collections_Generic_HashSet_T__o *)sub_1B887FC(System_Collections_Generic_HashSet_BattleBuffData_BuffData__TypeInfo);
                      System_Collections_Generic_HashSet_object____ctor_54235764(
                        v53,
                        v21,
                        (const MethodInfo_33B9274 *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData___ctor___76017376);
                      monitor = v21[1].monitor;
                      v23 = isSkillCounter;
                      v24 = v54;
                      if ( (int)monitor >= 1 )
                      {
                        v25 = 4LL;
                        v56 = 1;
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
                            v27 = (BattleLogicTask_o *)sub_1B887FC(BattleLogicTask_TypeInfo);
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
                                Instance = (__int64)v52;
                                if ( !v52 )
                                  goto LABEL_76;
                                Instance = (__int64)SkillLvMaster__GetEntity(v52, wasAttackTargetId, counterLv, 0LL);
                                if ( !Instance )
                                {
                                  v23 = isSkillCounter;
                                  v24 = v54;
                                  goto LABEL_58;
                                }
                                v29 = Instance;
                                v30 = sub_1B887FC(BattleSkillInfoData_TypeInfo);
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
                                Instance = sub_1B88658(int___TypeInfo, 1LL);
                                if ( !Instance )
                                  goto LABEL_76;
                                v33 = (System_Int32_array *)Instance;
                                if ( !*(_DWORD *)(Instance + 24) )
                                  goto LABEL_77;
                                *(_DWORD *)(Instance + 32) = v19->fields.wasAttackTargetId;
                                Instance = sub_1B88658(int___TypeInfo, 1LL);
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
                                v24 = v54;
                                if ( !v54 )
                                  goto LABEL_76;
                              }
                              Instance = (__int64)DataMasterBase_object__object__int___GetEntity(
                                                    v24,
                                                    v26->fields.buffId,
                                                    (const MethodInfo_311D934 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
                              if ( !Instance )
                                goto LABEL_76;
                              CounterMessage = BuffEntity__GetCounterMessage((BuffEntity_o *)Instance, 0LL);
                              BattleLogicTask__setMessage(v27, CounterMessage, 2, 0LL);
                              v27->fields.isCounter = 1;
                              if ( (v56 & 1) != 0 )
                                BattleLogicTask__SetDisplayTriggerIntervalBuff(
                                  v27,
                                  v19,
                                  (BattleBuffData_BuffData_array *)v21,
                                  0LL);
                              if ( !v10 )
                                goto LABEL_76;
                              items = v10->fields._items;
                              v38 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
                              ++v10->fields._version;
                              if ( !items )
                                goto LABEL_76;
                              size = v10->fields._size;
                              if ( (unsigned int)size >= items->max_length )
                              {
                                System_Collections_Generic_List_object___AddWithResize(
                                  v10,
                                  (Il2CppObject *)v27,
                                  *(const MethodInfo_34FD834 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
                              }
                              else
                              {
                                v40 = &items->obj.klass + size;
                                v10->fields._size = size + 1;
                                v40[4] = (Il2CppClass *)v27;
                                sub_1B88554((ServantStatusBattleListViewItem_o *)(v40 + 4), (int32_t)v27, v35, v36);
                              }
                              Instance = (__int64)v53;
                              if ( !v53 )
                                goto LABEL_76;
                              Instance = System_Collections_Generic_HashSet_object___Remove(
                                           v53,
                                           (Il2CppObject *)v26,
                                           (const MethodInfo_33B9A44 *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Remove__);
                              v56 = 0;
                            }
                          }
LABEL_58:
                          LODWORD(monitor) = v21[1].monitor;
                          v41 = v25 - 3;
                          ++v25;
                        }
                        while ( v41 < (int)monitor );
                      }
                      v42 = BattleLogicNomal___c_TypeInfo;
                      if ( !BattleLogicNomal___c_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo);
                        v42 = BattleLogicNomal___c_TypeInfo;
                      }
                      this = v51;
                      MasterData_object = (Il2CppObject *)v52;
                      v6 = v50;
                      _9__16_0 = (System_Action_object__o *)v42->static_fields->__9__16_0;
                      if ( !_9__16_0 )
                      {
                        if ( !v42->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(v42);
                          v42 = BattleLogicNomal___c_TypeInfo;
                        }
                        v44 = (Il2CppObject *)v42->static_fields->__9;
                        _9__16_0 = (System_Action_object__o *)sub_1B887FC(System_Action_BattleBuffData_BuffData__TypeInfo);
                        System_Action_object____ctor(
                          _9__16_0,
                          v44,
                          Method_BattleLogicNomal___c__taskCounterFunc_b__16_0__,
                          0LL);
                        static_fields = BattleLogicNomal___c_TypeInfo->static_fields;
                        static_fields->__9__16_0 = (struct System_Action_BattleBuffData_BuffData__o *)_9__16_0;
                        sub_1B88554(
                          (ServantStatusBattleListViewItem_o *)&static_fields->__9__16_0,
                          (int32_t)_9__16_0,
                          v46,
                          v47);
                      }
                      BasicHelper__ForEach_object_(
                        (System_Collections_Generic_IEnumerable_T__o *)v53,
                        (System_Action_T__o *)_9__16_0,
                        (const MethodInfo_2E6CCC0 *)Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
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
    sub_1B8880C(Instance, wasAttackTargetId);
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
                                    (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  __int64 v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w1
  int32_t v16; // w2
  int32_t v17; // w3
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0

  if ( (byte_4A5DD70 & 1) == 0 )
  {
    sub_1B885B0(&BattleLogicTask_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4A5DD70 = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v9 = sub_1B887FC(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor((BattleLogicTask_o *)v9, 0LL);
  if ( !v9 )
    goto LABEL_15;
  BattleLogicTask__setPlayMoiton((BattleLogicTask_o *)v9, motionName, 0LL);
  if ( !Tr )
    goto LABEL_15;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Tr, 0LL);
  *(_QWORD *)(v9 + 112) = gameObject;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 112), (int32_t)gameObject, v13, v14);
  if ( !svtData )
    goto LABEL_15;
  v15 = svtData->fields.isEnemy ? 3 : 2;
  BattleLogicTask__setActor((BattleLogicTask_o *)v9, v15, svtData->fields.uniqueId, 0LL);
  if ( !v8
    || (items = v8->fields._items,
        v19 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++v8->fields._version,
        !items) )
  {
LABEL_15:
    sub_1B8880C(v10, v11);
  }
  size = v8->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v8,
      (Il2CppObject *)v9,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
  }
  else
  {
    v21 = &items->obj.klass + size;
    v8->fields._size = size + 1;
    v21[4] = (Il2CppClass *)v9;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v21 + 4), v9, v16, v17);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v8,
                                    (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  __int64 v12; // x21
  BattleEntity_o *battle_ent; // x0
  __int64 v14; // x1
  System_String_o *v15; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v17; // w2
  int32_t v18; // w3
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
  int32_t v47; // w3
  struct System_Object_array *items; // x8
  _QWORD *v49; // x9
  __int64 size; // x10
  Il2CppClass **v51; // x0
  int v53; // [xsp+8h] [xbp-58h] BYREF
  int32_t CountSubmember; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4A5DD71 & 1) == 0 )
  {
    sub_1B885B0(&BattleLogicTask_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_2995/*"BATTLE_SUBENTRY_PLAYER"*/);
    sub_1B885B0(&StringLiteral_8722/*"MOTION_ENTRY"*/);
    sub_1B885B0(&StringLiteral_2993/*"BATTLE_SUBENTRY_ENEMY"*/);
    sub_1B885B0(&StringLiteral_2994/*"BATTLE_SUBENTRY_ENEMY_UNKNOWN"*/);
    sub_1B885B0(&StringLiteral_8723/*"MOTION_ENTRY_TAC"*/);
    byte_4A5DD71 = 1;
  }
  v9 = StringLiteral_8723/*"MOTION_ENTRY_TAC"*/;
  v10 = StringLiteral_8722/*"MOTION_ENTRY"*/;
  v11 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v12 = sub_1B887FC(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor((BattleLogicTask_o *)v12, 0LL);
  if ( !v12 )
    goto LABEL_30;
  v15 = (System_String_o *)(isTactical ? v9 : v10);
  BattleLogicTask__setPlayMoiton((BattleLogicTask_o *)v12, v15, 0LL);
  if ( !Tr )
    goto LABEL_30;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Tr, 0LL);
  *(_QWORD *)(v12 + 112) = gameObject;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v12 + 112), (int32_t)gameObject, v17, v18);
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
          v21 = isNotDisplayRemain;
          if ( LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            if ( isNotDisplayRemain )
            {
LABEL_15:
              v22 = LocalizationManager__Get((System_String_o *)StringLiteral_2994/*"BATTLE_SUBENTRY_ENEMY_UNKNOWN"*/, 0LL);
LABEL_23:
              v45 = v22;
              BattleLogicTask__setActor((BattleLogicTask_o *)v12, 3, svtData->fields.uniqueId, 0LL);
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
          battle_ent = (BattleEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2993/*"BATTLE_SUBENTRY_ENEMY"*/, 0LL);
          v36 = this->fields.data;
          if ( !v36 )
            goto LABEL_30;
          EnemyCountStartValue_k__BackingField = v36->fields._EnemyCountStartValue_k__BackingField;
          v38 = (System_String_o *)battle_ent;
          EnemyServantList = (BattleLogicNomal_o *)BattleData__getEnemyServantList(v36, 0LL);
          v53 = BattleLogicNomal__getCountSubmember(EnemyServantList, (BattleServantData_array *)EnemyServantList, v40)
              + EnemyCountStartValue_k__BackingField;
          v44 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v53, v41, v42, v43);
          v22 = System_String__Format(v38, v44, 0LL);
          goto LABEL_23;
        }
      }
    }
LABEL_30:
    sub_1B8880C(battle_ent, v14);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  battle_ent = (BattleEntity_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2995/*"BATTLE_SUBENTRY_PLAYER"*/, 0LL);
  v23 = this->fields.data;
  if ( !v23 )
    goto LABEL_30;
  v24 = (System_String_o *)battle_ent;
  PlayerServantList = (BattleLogicNomal_o *)BattleData__getPlayerServantList(v23, 0LL);
  CountSubmember = BattleLogicNomal__getCountSubmember(
                     PlayerServantList,
                     (BattleServantData_array *)PlayerServantList,
                     v26);
  v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &CountSubmember, v27, v28, v29);
  v31 = System_String__Format(v24, v30, 0LL);
  uniqueId = svtData->fields.uniqueId;
  v33 = v31;
  BattleLogicTask__setActor((BattleLogicTask_o *)v12, 2, uniqueId, 0LL);
  v34 = (BattleLogicTask_o *)v12;
  v35 = v33;
LABEL_24:
  BattleLogicTask__setMessage(v34, v35, 1, 0LL);
  if ( !v11 )
    goto LABEL_30;
  items = v11->fields._items;
  v49 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
  ++v11->fields._version;
  if ( !items )
    goto LABEL_30;
  size = v11->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v11,
      (Il2CppObject *)v12,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
  }
  else
  {
    v51 = &items->obj.klass + size;
    v11->fields._size = size + 1;
    v51[4] = (Il2CppClass *)v12;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v51 + 4), v12, v46, v47);
  }
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v11,
                                    (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  int32_t _1__state; // w8
  struct BattleLogicNomal_o *_4__this; // x23
  struct BattleData_o *data; // x8
  struct BattleCommandData_array *selectcommandlist; // x1
  _BOOL8 IsEnableToAttack; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__18_o *v13; // x8
  int v14; // w9
  int32_t _7__wrap5; // w8
  int v16; // w9
  bool result; // w0
  ServantStatusBattleListViewItem_o *p__7__wrap1; // x8
  struct BattleCommandData_array *v19; // x10
  struct BattleCommandData_array *_7__wrap1; // t1
  int max_length; // w11
  BattleCommandData_o *v22; // x19
  BattleData_o *v23; // x0
  BattleServantData_o *ServantData; // x20
  const MethodInfo *v25; // x2
  System_Collections_Generic_IEnumerable_BattleSkillInfoData__o *v26; // x20
  BattleLogicNomal___c_c *v27; // x0
  System_Func_object__int__o *_9__18_0; // x21
  Il2CppObject *v29; // x22
  struct BattleLogicNomal___c_StaticFields *static_fields; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  System_Linq_IOrderedEnumerable_TSource__o *v33; // x0
  __int64 v34; // x1
  System_Linq_IOrderedEnumerable_TSource__o *v35; // x20
  System_Linq_IOrderedEnumerable_TSource__c *klass; // x8
  __int64 v37; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  __int64 v43; // x0
  __int64 v44; // x1
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__18_o *v45; // x8
  struct System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *v46; // x19
  System_Collections_Generic_IEnumerator_BattleSkillInfoData__c *v47; // x8
  __int64 v48; // x9
  int *v49; // x10
  __int64 v50; // x0
  __int64 v51; // x0
  __int64 v52; // x1
  BattleSkillInfoData_o *v53; // x19
  BattleLogicSkill_o *logicskill; // x20
  System_Int32_array *v55; // x0
  __int64 v56; // x1
  BattleLogicTask_array *v57; // x1
  int32_t v58; // w2
  int32_t v59; // w3
  struct BattleLogicTask_array *_7__wrap4; // x10
  il2cpp_array_size_t v61; // w11
  struct System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *_7__wrap3; // x19
  System_Collections_Generic_IEnumerator_BattleSkillInfoData__c *v63; // x8
  __int64 v64; // x9
  int *v65; // x10
  __int64 v66; // x0
  const MethodInfo *v67; // x1
  int32_t v68; // w2
  int32_t v69; // w3
  struct BattleLogicTask_o *v70; // x1
  const MethodInfo *v71; // [xsp+8h] [xbp-58h]
  BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__18_o *v72; // [xsp+28h] [xbp-38h]

  v72 = this;
  v4 = this;
  if ( (byte_4A5DD88 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_OrderBy_BattleSkillInfoData__int___);
    sub_1B885B0(&System_Func_BattleSkillInfoData__int__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&Method_BattleLogicNomal___c__GetConfirmCommandFunctionBuffTask_b__18_0__);
    this = (BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__18_o *)sub_1B885B0(&BattleLogicNomal___c_TypeInfo);
    byte_4A5DD88 = 1;
  }
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( _1__state == 1 )
  {
    _7__wrap5 = v4->fields.__7__wrap5;
    v4->fields.__1__state = -3;
    v16 = _7__wrap5 + 1;
    v4->fields.__7__wrap5 = _7__wrap5 + 1;
    goto LABEL_57;
  }
  if ( _1__state )
    return 0;
  v4->fields.__1__state = -1;
  if ( !_4__this )
    sub_1B8880C(this, method);
  data = _4__this->fields.data;
  if ( !data )
    sub_1B8880C(this, method);
  selectcommandlist = data->fields.selectcommandlist;
  v4->fields.__7__wrap1 = selectcommandlist;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields.__7__wrap1, (int32_t)selectcommandlist, v2, v3);
  v13 = v72;
  v14 = 0;
  for ( v72->fields.__7__wrap2 = 0; ; v72->fields.__7__wrap2 = v14 )
  {
    _7__wrap1 = v13->fields.__7__wrap1;
    p__7__wrap1 = (ServantStatusBattleListViewItem_o *)&v13->fields.__7__wrap1;
    v19 = _7__wrap1;
    if ( !_7__wrap1 )
      sub_1B8880C(IsEnableToAttack, v10);
    max_length = v19->max_length;
    if ( v14 >= max_length )
    {
      p__7__wrap1->klass = 0LL;
      sub_1B88554(p__7__wrap1, 0, v11, v12);
      return 0;
    }
    if ( v14 >= (unsigned int)max_length )
      sub_1B88814(IsEnableToAttack, v10);
    if ( !_4__this )
      sub_1B8880C(IsEnableToAttack, v10);
    v22 = v19->m_Items[v14];
    if ( !v22 )
      sub_1B8880C(IsEnableToAttack, v10);
    v23 = _4__this->fields.data;
    if ( !v23 )
      sub_1B8880C(0LL, v10);
    ServantData = BattleData__getServantData(v23, v22->fields.uniqueId, 0LL);
    IsEnableToAttack = BattleLogicNomal__IsEnableToAttack(ServantData, v22, v25);
    if ( IsEnableToAttack )
      break;
LABEL_69:
    v13 = v72;
    v14 = v72->fields.__7__wrap2 + 1;
  }
  if ( !ServantData )
    sub_1B8880C(IsEnableToAttack, v10);
  v26 = BattleServantData__EnumerateConfirmCommandFunctionSkill(ServantData, v22, 0LL);
  v27 = BattleLogicNomal___c_TypeInfo;
  if ( !BattleLogicNomal___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicNomal___c_TypeInfo);
    v27 = BattleLogicNomal___c_TypeInfo;
  }
  _9__18_0 = (System_Func_object__int__o *)v27->static_fields->__9__18_0;
  if ( !_9__18_0 )
  {
    if ( !v27->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v27);
      v27 = BattleLogicNomal___c_TypeInfo;
    }
    v29 = (Il2CppObject *)v27->static_fields->__9;
    _9__18_0 = (System_Func_object__int__o *)sub_1B887FC(System_Func_BattleSkillInfoData__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__18_0,
      v29,
      Method_BattleLogicNomal___c__GetConfirmCommandFunctionBuffTask_b__18_0__,
      0LL);
    static_fields = BattleLogicNomal___c_TypeInfo->static_fields;
    static_fields->__9__18_0 = (struct System_Func_BattleSkillInfoData__int__o *)_9__18_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__18_0, (int32_t)_9__18_0, v31, v32);
  }
  v33 = System_Linq_Enumerable__OrderBy_object__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v26,
          (System_Func_TSource__TKey__o *)_9__18_0,
          (const MethodInfo_2EA9E2C *)Method_System_Linq_Enumerable_OrderBy_BattleSkillInfoData__int___);
  v35 = v33;
  if ( !v33 )
    sub_1B8880C(0LL, v34);
  klass = v33->klass;
  v37 = *(unsigned __int16 *)(&v33->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v33->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleSkillInfoData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo )
    {
      --v37;
      p_offset += 4;
      if ( !v37 )
        goto LABEL_31;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_31:
    p_method = sub_1BDA590(v33, System_Collections_Generic_IEnumerable_BattleSkillInfoData__TypeInfo, 0LL);
  }
  v40 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))p_method)(
          v35,
          *(_QWORD *)(p_method + 8));
  if ( !v72 )
    sub_1B8880C(v40, v40);
  v72->fields.__7__wrap3 = (struct System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *)v40;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v72->fields.__7__wrap3, v40, v41, v42);
  v45 = v72;
  v72->fields.__1__state = -3;
  while ( 1 )
  {
    _7__wrap3 = v45->fields.__7__wrap3;
    if ( !_7__wrap3 )
      sub_1B8880C(v43, v44);
    v63 = _7__wrap3->klass;
    v64 = *(unsigned __int16 *)(&_7__wrap3->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&_7__wrap3->klass->_2.bitflags2 + 3) )
    {
      v65 = &v63->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v65 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v64;
        v65 += 4;
        if ( !v64 )
          goto LABEL_65;
      }
      v66 = (__int64)&v63->vtable[*v65].method;
    }
    else
    {
LABEL_65:
      v66 = sub_1BDA590(_7__wrap3, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *, _QWORD))v66)(
            _7__wrap3,
            *(_QWORD *)(v66 + 8)) & 1) == 0 )
    {
      BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__18____m__Finally1(v72, v67);
      v72->fields.__7__wrap3 = 0LL;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v72->fields.__7__wrap3, 0, v68, v69);
      goto LABEL_69;
    }
    v46 = v72->fields.__7__wrap3;
    if ( !v46 )
      sub_1B8880C(v72, v67);
    v47 = v46->klass;
    v48 = *(unsigned __int16 *)(&v46->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v46->klass->_2.bitflags2 + 3) )
    {
      v49 = &v47->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_BattleSkillInfoData__c **)v49 - 1) != System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo )
      {
        --v48;
        v49 += 4;
        if ( !v48 )
          goto LABEL_49;
      }
      v50 = (__int64)&v47->vtable[*v49].method;
    }
    else
    {
LABEL_49:
      v50 = sub_1BDA590(
              v72->fields.__7__wrap3,
              System_Collections_Generic_IEnumerator_BattleSkillInfoData__TypeInfo,
              0LL);
    }
    v51 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *, _QWORD))v50)(
            v46,
            *(_QWORD *)(v50 + 8));
    if ( !_4__this )
      sub_1B8880C(v51, v52);
    v53 = (BattleSkillInfoData_o *)v51;
    logicskill = _4__this->fields.logicskill;
    v55 = (System_Int32_array *)sub_1B88658(int___TypeInfo, 1LL);
    if ( !v53 )
      sub_1B8880C(v55, v56);
    if ( !v55 )
      sub_1B8880C(0LL, v56);
    if ( !v55->max_length )
      sub_1B88814(v55, v56);
    v55->m_Items[1] = v53->fields.svtUniqueId;
    if ( !logicskill )
      sub_1B8880C(v55, v56);
    v57 = BattleLogicSkill__taskSkill(logicskill, v53, v55, 0LL, 0, 0, 0, 0, 0, v71);
    v72->fields.__7__wrap4 = v57;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v72->fields.__7__wrap4, (int32_t)v57, v58, v59);
    v4 = v72;
    v16 = 0;
    v72->fields.__7__wrap5 = 0;
LABEL_57:
    _7__wrap4 = v4->fields.__7__wrap4;
    if ( !_7__wrap4 )
      sub_1B8880C(this, method);
    v61 = _7__wrap4->max_length;
    if ( v16 < (int)v61 )
      break;
    v4->fields.__7__wrap4 = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields.__7__wrap4, 0, v2, v3);
    v45 = v72;
  }
  if ( v16 >= v61 )
    sub_1B88814(this, method);
  v70 = _7__wrap4->m_Items[v16];
  v4->fields.__2__current = v70;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields.__2__current, (int32_t)v70, v2, v3);
  result = 1;
  v72->fields.__1__state = 1;
  return result;
}


System_Collections_Generic_IEnumerator_BattleLogicTask__o *__fastcall BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__18__System_Collections_Generic_IEnumerable_BattleLogicTask__GetEnumerator(
        BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__18_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  __int64 v4; // x20
  struct BattleLogicNomal_o *_4__this; // x1
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A5DD8A & 1) == 0 )
  {
    sub_1B885B0(&BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__18_TypeInfo);
    byte_4A5DD8A = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0LL)) )
  {
    this->fields.__1__state = 0;
  }
  else
  {
    v4 = sub_1B887FC(BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__18_TypeInfo);
    System_Object___ctor((Il2CppObject *)v4, 0LL);
    *(_DWORD *)(v4 + 16) = 0;
    *(_DWORD *)(v4 + 32) = System_Environment__get_CurrentManagedThreadId(0LL);
    _4__this = this->fields.__4__this;
    *(_QWORD *)(v4 + 40) = _4__this;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v4 + 40), (int32_t)_4__this, v6, v7);
    return (System_Collections_Generic_IEnumerator_BattleLogicTask__o *)v4;
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_BattleLogicNomal__GetConfirmCommandFunctionBuffTask_d__18_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
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

  if ( (byte_4A5DD89 & 1) == 0 )
  {
    sub_1B885B0(&System_IDisposable_TypeInfo);
    byte_4A5DD89 = 1;
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
      p_method = sub_1BDA590(_7__wrap3, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(struct System_Collections_Generic_IEnumerator_BattleSkillInfoData__o *, _QWORD))p_method)(
      _7__wrap3,
      *(_QWORD *)(p_method + 8));
  }
}


void __fastcall BattleLogicNomal___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5DD82 & 1) == 0 )
  {
    sub_1B885B0(&BattleLogicNomal___c_TypeInfo);
    byte_4A5DD82 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(BattleLogicNomal___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  BattleLogicNomal___c_TypeInfo->static_fields->__9 = (struct BattleLogicNomal___c_o *)v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)BattleLogicNomal___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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


System_Collections_Generic_List_BattleBuffData_BuffData__o *__fastcall BattleLogicNomal___c___CreateCommandBattle_b__22_3(
        BattleLogicNomal___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19

  if ( (byte_4A5DD83 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
    byte_4A5DD83 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  return (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v3;
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
    sub_1B8880C(this, 0LL);
  return x->fields.priority;
}


int32_t __fastcall BattleLogicNomal___c___GetTargetCommandCodeBuffList_b__20_0(
        BattleLogicNomal___c_o *this,
        BattleBuffData_BuffData_o *a,
        BattleBuffData_BuffData_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1B8880C(this, a);
  return a->fields.addOrder - b->fields.addOrder;
}


void __fastcall BattleLogicNomal___c___createBuffAddPlayer_b__38_0(
        BattleLogicNomal___c_o *this,
        AiNpcBattleServantData_o *npc,
        const MethodInfo *method)
{
  if ( !npc )
    sub_1B8880C(this, 0LL);
  BattleServantData__turnBuffProgressingIncrease((BattleServantData_o *)npc, 0LL);
}


void __fastcall BattleLogicNomal___c___taskCounterFunc_b__16_0(
        BattleLogicNomal___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
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
  BuffList_c *v5; // x0
  BattleServantData_o *actSvtData; // x20
  BuffList_ACTION_array *CommandCodeFunctionActs; // x21
  BattleBuffData_CheckInvokeBuff_o *v8; // x22

  if ( (byte_4A5DD84 & 1) == 0 )
  {
    sub_1B885B0(&BuffList_TypeInfo);
    sub_1B885B0(&BattleBuffData_CheckInvokeBuff_TypeInfo);
    byte_4A5DD84 = 1;
  }
  v5 = BuffList_TypeInfo;
  actSvtData = this->fields.actSvtData;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
    v5 = BuffList_TypeInfo;
  }
  CommandCodeFunctionActs = v5->static_fields->CommandCodeFunctionActs;
  v8 = (BattleBuffData_CheckInvokeBuff_o *)sub_1B887FC(BattleBuffData_CheckInvokeBuff_TypeInfo);
  BattleBuffData_CheckInvokeBuff___ctor(v8, actSvtData, targetSvtData, CommandCodeFunctionActs, 0LL);
  return v8;
}


void __fastcall BattleLogicNomal___c__DisplayClass22_0___CreateCommandBattle_b__4(
        BattleLogicNomal___c__DisplayClass22_0_o *this,
        BuffEntity_o *buffEnt,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BattleLogicNomal___c__DisplayClass22_0_o *v6; // x21
  int32_t v7; // w2
  int32_t v8; // w3
  struct BattleLogicNomal_o *_4__this; // x8
  _QWORD *v10; // x9
  __int64 actSvtData_low; // x10
  BattleLogicNomal_c **v12; // x8

  v6 = this;
  if ( (byte_4A5DD85 & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_GetValue_BuffList_TYPE__List_BattleBuffData_BuffData____);
    this = (BattleLogicNomal___c__DisplayClass22_0_o *)sub_1B885B0(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
    byte_4A5DD85 = 1;
  }
  if ( !buffEnt )
    goto LABEL_10;
  this = (BattleLogicNomal___c__DisplayClass22_0_o *)BasicHelper__GetValue_Int32Enum__object_(
                                                       (System_Collections_Generic_Dictionary_K__V__o *)v6->fields.commandCodeDict,
                                                       buffEnt->fields.type,
                                                       0LL,
                                                       (const MethodInfo_2E6E1CC *)Method_BasicHelper_GetValue_BuffList_TYPE__List_BattleBuffData_BuffData____);
  if ( !this )
    return;
  _4__this = this->fields.__4__this;
  v10 = Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__;
  ++HIDWORD(this->fields.actSvtData);
  if ( !_4__this )
LABEL_10:
    sub_1B8880C(this, buffEnt);
  actSvtData_low = SLODWORD(this->fields.actSvtData);
  if ( (unsigned int)actSvtData_low >= LODWORD(_4__this->fields.logic) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)buff,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
  }
  else
  {
    v12 = &_4__this->klass + actSvtData_low;
    LODWORD(this->fields.actSvtData) = actSvtData_low + 1;
    v12[4] = (BattleLogicNomal_c *)buff;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v12 + 4), (int32_t)buff, v7, v8);
  }
}


void __fastcall BattleLogicNomal___c__DisplayClass22_0___CreateCommandBattle_b__5(
        BattleLogicNomal___c__DisplayClass22_0_o *this,
        BuffEntity_o *buffEnt,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BattleLogicNomal___c__DisplayClass22_0_o *v6; // x21
  int32_t v7; // w2
  int32_t v8; // w3
  struct BattleLogicNomal_o *_4__this; // x8
  _QWORD *v10; // x9
  __int64 actSvtData_low; // x10
  BattleLogicNomal_c **v12; // x8

  v6 = this;
  if ( (byte_4A5DD86 & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_GetValue_BuffList_TYPE__List_BattleBuffData_BuffData____);
    this = (BattleLogicNomal___c__DisplayClass22_0_o *)sub_1B885B0(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
    byte_4A5DD86 = 1;
  }
  if ( !buffEnt )
    goto LABEL_10;
  this = (BattleLogicNomal___c__DisplayClass22_0_o *)BasicHelper__GetValue_Int32Enum__object_(
                                                       (System_Collections_Generic_Dictionary_K__V__o *)v6->fields.commandCodeDict,
                                                       buffEnt->fields.type,
                                                       0LL,
                                                       (const MethodInfo_2E6E1CC *)Method_BasicHelper_GetValue_BuffList_TYPE__List_BattleBuffData_BuffData____);
  if ( !this )
    return;
  _4__this = this->fields.__4__this;
  v10 = Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__;
  ++HIDWORD(this->fields.actSvtData);
  if ( !_4__this )
LABEL_10:
    sub_1B8880C(this, buffEnt);
  actSvtData_low = SLODWORD(this->fields.actSvtData);
  if ( (unsigned int)actSvtData_low >= LODWORD(_4__this->fields.logic) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)buff,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
  }
  else
  {
    v12 = &_4__this->klass + actSvtData_low;
    LODWORD(this->fields.actSvtData) = actSvtData_low + 1;
    v12[4] = (BattleLogicNomal_c *)buff;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v12 + 4), (int32_t)buff, v7, v8);
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
    sub_1B8880C(this, targetSvtData);
  }
  result = targetSvtData;
  actiondata->fields.targetId = targetSvtData->fields.uniqueId;
  return result;
}


System_Collections_Generic_IEnumerable_BattleServantData__o *__fastcall BattleLogicNomal___c__DisplayClass22_0___CreateCommandBattle_b__7(
        BattleLogicNomal___c__DisplayClass22_0_o *this,
        bool isOnlyMain,
        bool isFunctionAll,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o **p_targetSvtList; // x9

  if ( (byte_4A5DD87 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_BattleServantData__BattleServantData___);
    byte_4A5DD87 = 1;
  }
  if ( isFunctionAll || !isOnlyMain )
    p_targetSvtList = (System_Collections_Generic_IEnumerable_TSource__o **)&this->fields.targetSvtList;
  else
    p_targetSvtList = (System_Collections_Generic_IEnumerable_TSource__o **)&this->fields.mainTarget;
  return (System_Collections_Generic_IEnumerable_BattleServantData__o *)System_Linq_Enumerable__Select_object__object_(
                                                                          *p_targetSvtList,
                                                                          (System_Func_TSource__TResult__o *)this->fields.targetTo,
                                                                          (const MethodInfo_2EB040C *)Method_System_Linq_Enumerable_Select_BattleServantData__BattleServantData___);
}


BattleServantData_o *__fastcall BattleLogicNomal___c__DisplayClass22_0___CreateCommandBattle_b__8(
        BattleLogicNomal___c__DisplayClass22_0_o *this,
        int32_t id,
        const MethodInfo *method)
{
  struct BattleLogicNomal_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (this = (BattleLogicNomal___c__DisplayClass22_0_o *)_4__this->fields.data) == 0LL )
    sub_1B8880C(this, id);
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
    sub_1B8880C(this, npc);
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
    sub_1B8880C(this, npc);
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
    sub_1B8880C(this, 0LL);
  return x->fields.uniqueId == this->fields.uniqueId;
}