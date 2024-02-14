void __fastcall ReactTaskTarget___ctor(ReactTaskTarget_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


BattleLogicTask_array *__fastcall ReactTaskTarget__CreateReactionTasks(
        ReactTaskTarget_o *this,
        ServantReactTaskCreator_o *creator,
        BattleLogic_o *logic,
        int32_t priority,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  ReactTaskTarget___c__DisplayClass0_0_o *v13; // x23
  __int64 v14; // x0
  System_Collections_Generic_IEnumerable_T__o *v15; // x19
  __int64 v16; // x1
  __int64 v17; // x2
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v18; // x20

  if ( (byte_4212F05 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_BattleLogicTask___ctor__, creator);
    sub_B0D8A4(&System_Action_BattleLogicTask__TypeInfo, v9);
    sub_B0D8A4(&Method_BasicHelper_ForEach_BattleLogicTask___, v10);
    sub_B0D8A4(&Method_ReactTaskTarget___c__DisplayClass0_0__CreateReactionTasks_b__0__, v11);
    sub_B0D8A4(&ReactTaskTarget___c__DisplayClass0_0_TypeInfo, v12);
    byte_4212F05 = 1;
  }
  v13 = (ReactTaskTarget___c__DisplayClass0_0_o *)sub_B0D974(
                                                    ReactTaskTarget___c__DisplayClass0_0_TypeInfo,
                                                    creator,
                                                    logic);
  ReactTaskTarget___c__DisplayClass0_0___ctor(v13, 0LL);
  if ( !v13 )
    sub_B0D97C(v14);
  v13->fields.priority = priority;
  v15 = (System_Collections_Generic_IEnumerable_T__o *)((__int64 (__fastcall *)(ReactTaskTarget_o *, ServantReactTaskCreator_o *, BattleLogic_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._4_CreateReactionTasksPartial.method)(
                                                         this,
                                                         creator,
                                                         logic,
                                                         (unsigned int)priority,
                                                         this->klass->vtable._5_TargetServants.methodPtr);
  v18 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                               System_Action_BattleLogicTask__TypeInfo,
                                                                               v16,
                                                                               v17);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v18,
    (Il2CppObject *)v13,
    Method_ReactTaskTarget___c__DisplayClass0_0__CreateReactionTasks_b__0__,
    (const MethodInfo_246EA3C *)Method_System_Action_BattleLogicTask___ctor__);
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    v15,
    (System_Action_T__o *)v18,
    (const MethodInfo_17086DC *)Method_BasicHelper_ForEach_BattleLogicTask___);
  return (BattleLogicTask_array *)v15;
}


BattleLogicTask_array *__fastcall ReactTaskTarget__CreateReactionTasksPartial(
        ReactTaskTarget_o *this,
        ServantReactTaskCreator_o *creator,
        BattleLogic_o *logic,
        int32_t priority,
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
  __int64 v18; // x22
  __int64 v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  __int64 v32; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x19
  __int64 v34; // x1
  __int64 v35; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v36; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x19
  __int64 v38; // x1
  __int64 v39; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v40; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v41; // x0

  if ( (byte_4212F06 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_Select_BattleServantData__BattleLogicTask___, creator);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_BattleLogicTask___, v9);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_BattleServantData___, v10);
    sub_B0D8A4(&Method_System_Func_BattleServantData__BattleLogicTask___ctor__, v11);
    sub_B0D8A4(&Method_System_Func_BattleServantData__bool___ctor__, v12);
    sub_B0D8A4(&System_Func_BattleServantData__bool__TypeInfo, v13);
    sub_B0D8A4(&System_Func_BattleServantData__BattleLogicTask__TypeInfo, v14);
    sub_B0D8A4(&Method_ReactTaskTarget___c__DisplayClass1_0__CreateReactionTasksPartial_b__0__, v15);
    sub_B0D8A4(&Method_ReactTaskTarget___c__DisplayClass1_0__CreateReactionTasksPartial_b__1__, v16);
    sub_B0D8A4(&ReactTaskTarget___c__DisplayClass1_0_TypeInfo, v17);
    byte_4212F06 = 1;
  }
  v18 = sub_B0D974(ReactTaskTarget___c__DisplayClass1_0_TypeInfo, creator, logic);
  ReactTaskTarget___c__DisplayClass1_0___ctor((ReactTaskTarget___c__DisplayClass1_0_o *)v18, 0LL);
  if ( !v18
    || (*(_QWORD *)(v18 + 16) = creator,
        sub_B0D840(
          (BattleServantConfConponent_o *)(v18 + 16),
          (System_Int32_array **)creator,
          v20,
          v21,
          v22,
          v23,
          v24,
          v25),
        *(_QWORD *)(v18 + 24) = logic,
        sub_B0D840(
          (BattleServantConfConponent_o *)(v18 + 24),
          (System_Int32_array **)logic,
          v26,
          v27,
          v28,
          v29,
          v30,
          v31),
        v32 = *(_QWORD *)(v18 + 24),
        *(_DWORD *)(v18 + 32) = priority,
        !v32) )
  {
    sub_B0D97C(v19);
  }
  v33 = (System_Collections_Generic_IEnumerable_TSource__o *)((__int64 (__fastcall *)(ReactTaskTarget_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._5_TargetServants.method)(
                                                               this,
                                                               *(_QWORD *)(v32 + 32),
                                                               this->klass->vtable._6_ExistPriorityUpToAny.methodPtr);
  v36 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                             System_Func_BattleServantData__bool__TypeInfo,
                                                                             v34,
                                                                             v35);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v36,
    (Il2CppObject *)v18,
    Method_ReactTaskTarget___c__DisplayClass1_0__CreateReactionTasksPartial_b__0__,
    (const MethodInfo_26189B8 *)Method_System_Func_BattleServantData__bool___ctor__);
  v37 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          v33,
          (System_Func_TSource__bool__o *)v36,
          (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  v40 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B0D974(
                                                                                          System_Func_BattleServantData__BattleLogicTask__TypeInfo,
                                                                                          v38,
                                                                                          v39);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
    v40,
    (Il2CppObject *)v18,
    Method_ReactTaskTarget___c__DisplayClass1_0__CreateReactionTasksPartial_b__1__,
    (const MethodInfo_261A104 *)Method_System_Func_BattleServantData__BattleLogicTask___ctor__);
  v41 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                               v37,
                                                               (System_Func_TSource__TResult__o *)v40,
                                                               (const MethodInfo_1B5200C *)Method_System_Linq_Enumerable_Select_BattleServantData__BattleLogicTask___);
  return (BattleLogicTask_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                    v41,
                                    (const MethodInfo_1B56294 *)Method_System_Linq_Enumerable_ToArray_BattleLogicTask___);
}


bool __fastcall ReactTaskTarget__ExistPriorityUpToAny(
        ReactTaskTarget_o *this,
        ServantReactTaskCreator_o *creator,
        BattleLogic_o *logic,
        int32_t maxPriority,
        const MethodInfo *method)
{
  int32_t i; // w19

  if ( (maxPriority & 0x80000000) != 0 )
    return 0;
  for ( i = maxPriority;
        (((__int64 (__fastcall *)(ReactTaskTarget_o *, ServantReactTaskCreator_o *, BattleLogic_o *, _QWORD, void *))this->klass->vtable._7_ExistTargetPriority.method)(
           this,
           creator,
           logic,
           (unsigned int)i,
           this->klass[1]._1.image) & 1) == 0;
        --i )
  {
    if ( i <= 0 )
      return 0;
  }
  return 1;
}


bool __fastcall ReactTaskTarget__ExistTargetPriority(
        ReactTaskTarget_o *this,
        ServantReactTaskCreator_o *creator,
        BattleLogic_o *logic,
        int32_t priority,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x23
  __int64 v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  __int64 v27; // x8
  WellFired_USFGOPlayBgmEventConditional_CondBGM_array *v28; // x19
  __int64 v29; // x1
  __int64 v30; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v31; // x20

  if ( (byte_4212F08 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_Any_BattleServantData____67954192, creator);
    sub_B0D8A4(&Method_System_Func_BattleServantData__bool___ctor__, v9);
    sub_B0D8A4(&System_Func_BattleServantData__bool__TypeInfo, v10);
    sub_B0D8A4(&Method_ReactTaskTarget___c__DisplayClass4_0__ExistTargetPriority_b__0__, v11);
    sub_B0D8A4(&ReactTaskTarget___c__DisplayClass4_0_TypeInfo, v12);
    byte_4212F08 = 1;
  }
  v13 = sub_B0D974(ReactTaskTarget___c__DisplayClass4_0_TypeInfo, creator, logic);
  ReactTaskTarget___c__DisplayClass4_0___ctor((ReactTaskTarget___c__DisplayClass4_0_o *)v13, 0LL);
  if ( !v13
    || (*(_QWORD *)(v13 + 16) = creator,
        sub_B0D840(
          (BattleServantConfConponent_o *)(v13 + 16),
          (System_Int32_array **)creator,
          v15,
          v16,
          v17,
          v18,
          v19,
          v20),
        *(_QWORD *)(v13 + 24) = logic,
        sub_B0D840(
          (BattleServantConfConponent_o *)(v13 + 24),
          (System_Int32_array **)logic,
          v21,
          v22,
          v23,
          v24,
          v25,
          v26),
        v27 = *(_QWORD *)(v13 + 24),
        *(_DWORD *)(v13 + 32) = priority,
        !v27) )
  {
    sub_B0D97C(v14);
  }
  v28 = (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)((__int64 (__fastcall *)(ReactTaskTarget_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._5_TargetServants.method)(
                                                                  this,
                                                                  *(_QWORD *)(v27 + 32),
                                                                  this->klass->vtable._6_ExistPriorityUpToAny.methodPtr);
  v31 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                             System_Func_BattleServantData__bool__TypeInfo,
                                                                             v29,
                                                                             v30);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v31,
    (Il2CppObject *)v13,
    Method_ReactTaskTarget___c__DisplayClass4_0__ExistTargetPriority_b__0__,
    (const MethodInfo_26189B8 *)Method_System_Func_BattleServantData__bool___ctor__);
  return BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
           v28,
           (System_Func_T__bool__o *)v31,
           (const MethodInfo_17071E4 *)Method_BasicHelper_Any_BattleServantData____67954192);
}


BattleServantData_array *__fastcall ReactTaskTarget__TargetServants(
        ReactTaskTarget_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  if ( (byte_4212F07 & 1) == 0 )
  {
    sub_B0D8A4(&BattleServantData___TypeInfo, data);
    byte_4212F07 = 1;
  }
  return (BattleServantData_array *)sub_B0D8BC(BattleServantData___TypeInfo, 0LL);
}


void __fastcall ReactTaskTarget___c__DisplayClass0_0___ctor(
        ReactTaskTarget___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ReactTaskTarget___c__DisplayClass0_0___CreateReactionTasks_b__0(
        ReactTaskTarget___c__DisplayClass0_0_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  if ( !task )
    sub_B0D97C(this);
  BattleLogicTask__SetAiPriority(task, this->fields.priority, 0LL);
}


void __fastcall ReactTaskTarget___c__DisplayClass1_0___ctor(
        ReactTaskTarget___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ReactTaskTarget___c__DisplayClass1_0___CreateReactionTasksPartial_b__0(
        ReactTaskTarget___c__DisplayClass1_0_o *this,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  struct ServantReactTaskCreator_o *creator; // x0

  creator = this->fields.creator;
  if ( !creator )
    sub_B0D97C(0LL);
  return ((__int64 (__fastcall *)(struct ServantReactTaskCreator_o *, struct BattleLogic_o *, BattleServantData_o *, _QWORD, Il2CppMethodPointer))creator->klass->vtable._7_IsCreatable.method)(
           creator,
           this->fields.logic,
           svt,
           (unsigned int)this->fields.priority,
           creator->klass->vtable._8_Create.methodPtr);
}


BattleLogicTask_o *__fastcall ReactTaskTarget___c__DisplayClass1_0___CreateReactionTasksPartial_b__1(
        ReactTaskTarget___c__DisplayClass1_0_o *this,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  struct ServantReactTaskCreator_o *creator; // x0

  creator = this->fields.creator;
  if ( !creator )
    sub_B0D97C(0LL);
  return (BattleLogicTask_o *)((__int64 (__fastcall *)(struct ServantReactTaskCreator_o *, BattleServantData_o *, struct BattleLogic_o *, void *))creator->klass->vtable._8_Create.method)(
                                creator,
                                svt,
                                this->fields.logic,
                                creator->klass[1]._1.image);
}


void __fastcall ReactTaskTarget___c__DisplayClass4_0___ctor(
        ReactTaskTarget___c__DisplayClass4_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ReactTaskTarget___c__DisplayClass4_0___ExistTargetPriority_b__0(
        ReactTaskTarget___c__DisplayClass4_0_o *this,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  struct ServantReactTaskCreator_o *creator; // x0

  creator = this->fields.creator;
  if ( !creator )
    sub_B0D97C(0LL);
  return ((__int64 (__fastcall *)(struct ServantReactTaskCreator_o *, struct BattleLogic_o *, BattleServantData_o *, _QWORD, Il2CppMethodPointer))creator->klass->vtable._7_IsCreatable.method)(
           creator,
           this->fields.logic,
           svt,
           (unsigned int)this->fields.priority,
           creator->klass->vtable._8_Create.methodPtr);
}