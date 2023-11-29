void __fastcall ReactTaskTarget___ctor(ReactTaskTarget_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
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
  System_Collections_Generic_IEnumerable_T__o *v14; // x19
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v19; // x20

  if ( (byte_40F82A3 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_BattleLogicTask___ctor__, creator);
    sub_B16FFC(&System_Action_BattleLogicTask__TypeInfo, v9);
    sub_B16FFC(&Method_BasicHelper_ForEach_BattleLogicTask___, v10);
    sub_B16FFC(&Method_ReactTaskTarget___c__DisplayClass0_0__CreateReactionTasks_b__0__, v11);
    sub_B16FFC(&ReactTaskTarget___c__DisplayClass0_0_TypeInfo, v12);
    byte_40F82A3 = 1;
  }
  v13 = (ReactTaskTarget___c__DisplayClass0_0_o *)sub_B170CC(
                                                    ReactTaskTarget___c__DisplayClass0_0_TypeInfo,
                                                    creator,
                                                    logic,
                                                    *(_QWORD *)&priority,
                                                    method);
  ReactTaskTarget___c__DisplayClass0_0___ctor(v13, 0LL);
  if ( !v13 )
    sub_B170D4();
  v13->fields.priority = priority;
  v14 = (System_Collections_Generic_IEnumerable_T__o *)((__int64 (__fastcall *)(ReactTaskTarget_o *, ServantReactTaskCreator_o *, BattleLogic_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._4_CreateReactionTasksPartial.method)(
                                                         this,
                                                         creator,
                                                         logic,
                                                         (unsigned int)priority,
                                                         this->klass->vtable._5_TargetServants.methodPtr);
  v19 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                               System_Action_BattleLogicTask__TypeInfo,
                                                                               v15,
                                                                               v16,
                                                                               v17,
                                                                               v18);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v19,
    (Il2CppObject *)v13,
    Method_ReactTaskTarget___c__DisplayClass0_0__CreateReactionTasks_b__0__,
    (const MethodInfo_24B7310 *)Method_System_Action_BattleLogicTask___ctor__);
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    v14,
    (System_Action_T__o *)v19,
    (const MethodInfo_18B756C *)Method_BasicHelper_ForEach_BattleLogicTask___);
  return (BattleLogicTask_array *)v14;
}


// local variable allocation has failed, the output may be wrong!
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
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  __int64 v31; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x19
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v37; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x19
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v43; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v44; // x0

  if ( (byte_40F82A4 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Select_BattleServantData__BattleLogicTask___, creator);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_BattleLogicTask___, v9);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_BattleServantData___, v10);
    sub_B16FFC(&Method_System_Func_BattleServantData__BattleLogicTask___ctor__, v11);
    sub_B16FFC(&Method_System_Func_BattleServantData__bool___ctor__, v12);
    sub_B16FFC(&System_Func_BattleServantData__bool__TypeInfo, v13);
    sub_B16FFC(&System_Func_BattleServantData__BattleLogicTask__TypeInfo, v14);
    sub_B16FFC(&Method_ReactTaskTarget___c__DisplayClass1_0__CreateReactionTasksPartial_b__0__, v15);
    sub_B16FFC(&Method_ReactTaskTarget___c__DisplayClass1_0__CreateReactionTasksPartial_b__1__, v16);
    sub_B16FFC(&ReactTaskTarget___c__DisplayClass1_0_TypeInfo, v17);
    byte_40F82A4 = 1;
  }
  v18 = sub_B170CC(ReactTaskTarget___c__DisplayClass1_0_TypeInfo, creator, logic, *(_QWORD *)&priority, method);
  ReactTaskTarget___c__DisplayClass1_0___ctor((ReactTaskTarget___c__DisplayClass1_0_o *)v18, 0LL);
  if ( !v18
    || (*(_QWORD *)(v18 + 16) = creator,
        sub_B16F98(
          (BattleServantConfConponent_o *)(v18 + 16),
          (System_Int32_array **)creator,
          v19,
          v20,
          v21,
          v22,
          v23,
          v24),
        *(_QWORD *)(v18 + 24) = logic,
        sub_B16F98(
          (BattleServantConfConponent_o *)(v18 + 24),
          (System_Int32_array **)logic,
          v25,
          v26,
          v27,
          v28,
          v29,
          v30),
        v31 = *(_QWORD *)(v18 + 24),
        *(_DWORD *)(v18 + 32) = priority,
        !v31) )
  {
    sub_B170D4();
  }
  v32 = (System_Collections_Generic_IEnumerable_TSource__o *)((__int64 (__fastcall *)(ReactTaskTarget_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._5_TargetServants.method)(
                                                               this,
                                                               *(_QWORD *)(v31 + 32),
                                                               this->klass->vtable._6_ExistPriorityUpToAny.methodPtr);
  v37 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_BattleServantData__bool__TypeInfo,
                                                                             v33,
                                                                             v34,
                                                                             v35,
                                                                             v36);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v37,
    (Il2CppObject *)v18,
    Method_ReactTaskTarget___c__DisplayClass1_0__CreateReactionTasksPartial_b__0__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_BattleServantData__bool___ctor__);
  v38 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          v32,
          (System_Func_TSource__bool__o *)v37,
          (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  v43 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B170CC(
                                                                                          System_Func_BattleServantData__BattleLogicTask__TypeInfo,
                                                                                          v39,
                                                                                          v40,
                                                                                          v41,
                                                                                          v42);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
    v43,
    (Il2CppObject *)v18,
    Method_ReactTaskTarget___c__DisplayClass1_0__CreateReactionTasksPartial_b__1__,
    (const MethodInfo_2B6C28C *)Method_System_Func_BattleServantData__BattleLogicTask___ctor__);
  v44 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                               v38,
                                                               (System_Func_TSource__TResult__o *)v43,
                                                               (const MethodInfo_19C0B1C *)Method_System_Linq_Enumerable_Select_BattleServantData__BattleLogicTask___);
  return (BattleLogicTask_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                    v44,
                                    (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_BattleLogicTask___);
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


// local variable allocation has failed, the output may be wrong!
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
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  __int64 v26; // x8
  WellFired_USFGOPlayBgmEventConditional_CondBGM_array *v27; // x19
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v32; // x20

  if ( (byte_40F82A6 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Any_BattleServantData____66805536, creator);
    sub_B16FFC(&Method_System_Func_BattleServantData__bool___ctor__, v9);
    sub_B16FFC(&System_Func_BattleServantData__bool__TypeInfo, v10);
    sub_B16FFC(&Method_ReactTaskTarget___c__DisplayClass4_0__ExistTargetPriority_b__0__, v11);
    sub_B16FFC(&ReactTaskTarget___c__DisplayClass4_0_TypeInfo, v12);
    byte_40F82A6 = 1;
  }
  v13 = sub_B170CC(ReactTaskTarget___c__DisplayClass4_0_TypeInfo, creator, logic, *(_QWORD *)&priority, method);
  ReactTaskTarget___c__DisplayClass4_0___ctor((ReactTaskTarget___c__DisplayClass4_0_o *)v13, 0LL);
  if ( !v13
    || (*(_QWORD *)(v13 + 16) = creator,
        sub_B16F98(
          (BattleServantConfConponent_o *)(v13 + 16),
          (System_Int32_array **)creator,
          v14,
          v15,
          v16,
          v17,
          v18,
          v19),
        *(_QWORD *)(v13 + 24) = logic,
        sub_B16F98(
          (BattleServantConfConponent_o *)(v13 + 24),
          (System_Int32_array **)logic,
          v20,
          v21,
          v22,
          v23,
          v24,
          v25),
        v26 = *(_QWORD *)(v13 + 24),
        *(_DWORD *)(v13 + 32) = priority,
        !v26) )
  {
    sub_B170D4();
  }
  v27 = (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)((__int64 (__fastcall *)(ReactTaskTarget_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._5_TargetServants.method)(
                                                                  this,
                                                                  *(_QWORD *)(v26 + 32),
                                                                  this->klass->vtable._6_ExistPriorityUpToAny.methodPtr);
  v32 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_BattleServantData__bool__TypeInfo,
                                                                             v28,
                                                                             v29,
                                                                             v30,
                                                                             v31);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v32,
    (Il2CppObject *)v13,
    Method_ReactTaskTarget___c__DisplayClass4_0__ExistTargetPriority_b__0__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_BattleServantData__bool___ctor__);
  return BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
           v27,
           (System_Func_T__bool__o *)v32,
           (const MethodInfo_18B6074 *)Method_BasicHelper_Any_BattleServantData____66805536);
}


BattleServantData_array *__fastcall ReactTaskTarget__TargetServants(
        ReactTaskTarget_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  if ( (byte_40F82A5 & 1) == 0 )
  {
    sub_B16FFC(&BattleServantData___TypeInfo, data);
    byte_40F82A5 = 1;
  }
  return (BattleServantData_array *)sub_B17014(BattleServantData___TypeInfo, 0LL, method);
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
    sub_B170D4();
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
    sub_B170D4();
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
    sub_B170D4();
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
    sub_B170D4();
  return ((__int64 (__fastcall *)(struct ServantReactTaskCreator_o *, struct BattleLogic_o *, BattleServantData_o *, _QWORD, Il2CppMethodPointer))creator->klass->vtable._7_IsCreatable.method)(
           creator,
           this->fields.logic,
           svt,
           (unsigned int)this->fields.priority,
           creator->klass->vtable._8_Create.methodPtr);
}