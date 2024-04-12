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
  ReactTaskTarget___c__DisplayClass0_0_o *v9; // x23
  __int64 v10; // x0
  __int64 v11; // x1
  System_Collections_Generic_IEnumerable_T__o *v12; // x19
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v13; // x20

  if ( (byte_42AE516 & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_BattleLogicTask___ctor__);
    sub_B52984(&System_Action_BattleLogicTask__TypeInfo);
    sub_B52984(&Method_BasicHelper_ForEach_BattleLogicTask___);
    sub_B52984(&Method_ReactTaskTarget___c__DisplayClass0_0__CreateReactionTasks_b__0__);
    sub_B52984(&ReactTaskTarget___c__DisplayClass0_0_TypeInfo);
    byte_42AE516 = 1;
  }
  v9 = (ReactTaskTarget___c__DisplayClass0_0_o *)sub_B52A54(ReactTaskTarget___c__DisplayClass0_0_TypeInfo);
  ReactTaskTarget___c__DisplayClass0_0___ctor(v9, 0LL);
  if ( !v9 )
    sub_B52A5C(v10, v11);
  v9->fields.priority = priority;
  v12 = (System_Collections_Generic_IEnumerable_T__o *)((__int64 (__fastcall *)(ReactTaskTarget_o *, ServantReactTaskCreator_o *, BattleLogic_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._4_CreateReactionTasksPartial.method)(
                                                         this,
                                                         creator,
                                                         logic,
                                                         (unsigned int)priority,
                                                         this->klass->vtable._5_TargetServants.methodPtr);
  v13 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B52A54(System_Action_BattleLogicTask__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v13,
    (Il2CppObject *)v9,
    Method_ReactTaskTarget___c__DisplayClass0_0__CreateReactionTasks_b__0__,
    (const MethodInfo_2627780 *)Method_System_Action_BattleLogicTask___ctor__);
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    v12,
    (System_Action_T__o *)v13,
    (const MethodInfo_1A43210 *)Method_BasicHelper_ForEach_BattleLogicTask___);
  return (BattleLogicTask_array *)v12;
}


BattleLogicTask_array *__fastcall ReactTaskTarget__CreateReactionTasksPartial(
        ReactTaskTarget_o *this,
        ServantReactTaskCreator_o *creator,
        BattleLogic_o *logic,
        int32_t priority,
        const MethodInfo *method)
{
  __int64 v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  __int64 v24; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v26; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v28; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0

  if ( (byte_42AE517 & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_Select_BattleServantData__BattleLogicTask___);
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_BattleLogicTask___);
    sub_B52984(&Method_System_Linq_Enumerable_Where_BattleServantData___);
    sub_B52984(&Method_System_Func_BattleServantData__BattleLogicTask___ctor__);
    sub_B52984(&Method_System_Func_BattleServantData__bool___ctor__);
    sub_B52984(&System_Func_BattleServantData__bool__TypeInfo);
    sub_B52984(&System_Func_BattleServantData__BattleLogicTask__TypeInfo);
    sub_B52984(&Method_ReactTaskTarget___c__DisplayClass1_0__CreateReactionTasksPartial_b__0__);
    sub_B52984(&Method_ReactTaskTarget___c__DisplayClass1_0__CreateReactionTasksPartial_b__1__);
    sub_B52984(&ReactTaskTarget___c__DisplayClass1_0_TypeInfo);
    byte_42AE517 = 1;
  }
  v9 = sub_B52A54(ReactTaskTarget___c__DisplayClass1_0_TypeInfo);
  ReactTaskTarget___c__DisplayClass1_0___ctor((ReactTaskTarget___c__DisplayClass1_0_o *)v9, 0LL);
  if ( !v9
    || (*(_QWORD *)(v9 + 16) = creator,
        sub_B52920(
          (BattleServantConfConponent_o *)(v9 + 16),
          (System_Int32_array **)creator,
          v12,
          v13,
          v14,
          v15,
          v16,
          v17),
        *(_QWORD *)(v9 + 24) = logic,
        sub_B52920(
          (BattleServantConfConponent_o *)(v9 + 24),
          (System_Int32_array **)logic,
          v18,
          v19,
          v20,
          v21,
          v22,
          v23),
        v24 = *(_QWORD *)(v9 + 24),
        *(_DWORD *)(v9 + 32) = priority,
        !v24) )
  {
    sub_B52A5C(v10, v11);
  }
  v25 = (System_Collections_Generic_IEnumerable_TSource__o *)((__int64 (__fastcall *)(ReactTaskTarget_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._5_TargetServants.method)(
                                                               this,
                                                               *(_QWORD *)(v24 + 32),
                                                               this->klass->vtable._6_ExistPriorityUpToAny.methodPtr);
  v26 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_BattleServantData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v26,
    (Il2CppObject *)v9,
    Method_ReactTaskTarget___c__DisplayClass1_0__CreateReactionTasksPartial_b__0__,
    (const MethodInfo_2BC90BC *)Method_System_Func_BattleServantData__bool___ctor__);
  v27 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          v25,
          (System_Func_TSource__bool__o *)v26,
          (const MethodInfo_1B72CC0 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  v28 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B52A54(System_Func_BattleServantData__BattleLogicTask__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
    v28,
    (Il2CppObject *)v9,
    Method_ReactTaskTarget___c__DisplayClass1_0__CreateReactionTasksPartial_b__1__,
    (const MethodInfo_2BCA808 *)Method_System_Func_BattleServantData__BattleLogicTask___ctor__);
  v29 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                               v27,
                                                               (System_Func_TSource__TResult__o *)v28,
                                                               (const MethodInfo_1B6A2FC *)Method_System_Linq_Enumerable_Select_BattleServantData__BattleLogicTask___);
  return (BattleLogicTask_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                    v29,
                                    (const MethodInfo_1B6E610 *)Method_System_Linq_Enumerable_ToArray_BattleLogicTask___);
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
  __int64 v9; // x23
  __int64 v10; // x0
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  __int64 v24; // x8
  WellFired_USFGOPlayBgmEventConditional_CondBGM_array *v25; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v26; // x20

  if ( (byte_42AE519 & 1) == 0 )
  {
    sub_B52984(&Method_BasicHelper_Any_BattleServantData____68582712);
    sub_B52984(&Method_System_Func_BattleServantData__bool___ctor__);
    sub_B52984(&System_Func_BattleServantData__bool__TypeInfo);
    sub_B52984(&Method_ReactTaskTarget___c__DisplayClass4_0__ExistTargetPriority_b__0__);
    sub_B52984(&ReactTaskTarget___c__DisplayClass4_0_TypeInfo);
    byte_42AE519 = 1;
  }
  v9 = sub_B52A54(ReactTaskTarget___c__DisplayClass4_0_TypeInfo);
  ReactTaskTarget___c__DisplayClass4_0___ctor((ReactTaskTarget___c__DisplayClass4_0_o *)v9, 0LL);
  if ( !v9
    || (*(_QWORD *)(v9 + 16) = creator,
        sub_B52920(
          (BattleServantConfConponent_o *)(v9 + 16),
          (System_Int32_array **)creator,
          v12,
          v13,
          v14,
          v15,
          v16,
          v17),
        *(_QWORD *)(v9 + 24) = logic,
        sub_B52920(
          (BattleServantConfConponent_o *)(v9 + 24),
          (System_Int32_array **)logic,
          v18,
          v19,
          v20,
          v21,
          v22,
          v23),
        v24 = *(_QWORD *)(v9 + 24),
        *(_DWORD *)(v9 + 32) = priority,
        !v24) )
  {
    sub_B52A5C(v10, v11);
  }
  v25 = (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)((__int64 (__fastcall *)(ReactTaskTarget_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._5_TargetServants.method)(
                                                                  this,
                                                                  *(_QWORD *)(v24 + 32),
                                                                  this->klass->vtable._6_ExistPriorityUpToAny.methodPtr);
  v26 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_BattleServantData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v26,
    (Il2CppObject *)v9,
    Method_ReactTaskTarget___c__DisplayClass4_0__ExistTargetPriority_b__0__,
    (const MethodInfo_2BC90BC *)Method_System_Func_BattleServantData__bool___ctor__);
  return BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
           v25,
           (System_Func_T__bool__o *)v26,
           (const MethodInfo_1A41D18 *)Method_BasicHelper_Any_BattleServantData____68582712);
}


BattleServantData_array *__fastcall ReactTaskTarget__TargetServants(
        ReactTaskTarget_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  if ( (byte_42AE518 & 1) == 0 )
  {
    sub_B52984(&BattleServantData___TypeInfo);
    byte_42AE518 = 1;
  }
  return (BattleServantData_array *)sub_B5299C(BattleServantData___TypeInfo, 0LL);
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
    sub_B52A5C(this, 0LL);
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
    sub_B52A5C(0LL, svt);
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
    sub_B52A5C(0LL, svt);
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
    sub_B52A5C(0LL, svt);
  return ((__int64 (__fastcall *)(struct ServantReactTaskCreator_o *, struct BattleLogic_o *, BattleServantData_o *, _QWORD, Il2CppMethodPointer))creator->klass->vtable._7_IsCreatable.method)(
           creator,
           this->fields.logic,
           svt,
           (unsigned int)this->fields.priority,
           creator->klass->vtable._8_Create.methodPtr);
}