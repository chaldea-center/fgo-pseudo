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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  ReactTaskTarget___c__DisplayClass0_0_o *v21; // x23
  __int64 v22; // x0
  __int64 v23; // x1
  System_Collections_Generic_IEnumerable_T__o *v24; // x19
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v25; // x20

  if ( (byte_42E6F87 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_BattleLogicTask___ctor__, (_DWORD)creator, (_DWORD)logic, *(_QWORD *)&priority);
    sub_B5D5C4(&System_Action_BattleLogicTask__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_BasicHelper_ForEach_BattleLogicTask___, v12, v13, v14);
    sub_B5D5C4(&Method_ReactTaskTarget___c__DisplayClass0_0__CreateReactionTasks_b__0__, v15, v16, v17);
    sub_B5D5C4(&ReactTaskTarget___c__DisplayClass0_0_TypeInfo, v18, v19, v20);
    byte_42E6F87 = 1;
  }
  v21 = (ReactTaskTarget___c__DisplayClass0_0_o *)sub_B5D694(ReactTaskTarget___c__DisplayClass0_0_TypeInfo);
  ReactTaskTarget___c__DisplayClass0_0___ctor(v21, 0LL);
  if ( !v21 )
    sub_B5D69C(v22, v23);
  v21->fields.priority = priority;
  v24 = (System_Collections_Generic_IEnumerable_T__o *)((__int64 (__fastcall *)(ReactTaskTarget_o *, ServantReactTaskCreator_o *, BattleLogic_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._4_CreateReactionTasksPartial.method)(
                                                         this,
                                                         creator,
                                                         logic,
                                                         (unsigned int)priority,
                                                         this->klass->vtable._5_TargetServants.methodPtr);
  v25 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_BattleLogicTask__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v25,
    (Il2CppObject *)v21,
    Method_ReactTaskTarget___c__DisplayClass0_0__CreateReactionTasks_b__0__,
    (const MethodInfo_258B320 *)Method_System_Action_BattleLogicTask___ctor__);
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    v24,
    (System_Action_T__o *)v25,
    (const MethodInfo_1AD82D8 *)Method_BasicHelper_ForEach_BattleLogicTask___);
  return (BattleLogicTask_array *)v24;
}


// local variable allocation has failed, the output may be wrong!
BattleLogicTask_array *__fastcall ReactTaskTarget__CreateReactionTasksPartial(
        ReactTaskTarget_o *this,
        ServantReactTaskCreator_o *creator,
        BattleLogic_o *logic,
        int32_t priority,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  __int64 v36; // x22
  __int64 v37; // x0
  __int64 v38; // x1
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  __int64 v51; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v52; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v53; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v54; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v55; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v56; // x0

  if ( (byte_42E6F88 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Linq_Enumerable_Select_BattleServantData__BattleLogicTask___,
      (_DWORD)creator,
      (_DWORD)logic,
      *(_QWORD *)&priority);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_BattleLogicTask___, v9, v10, v11);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_BattleServantData___, v12, v13, v14);
    sub_B5D5C4(&Method_System_Func_BattleServantData__BattleLogicTask___ctor__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Func_BattleServantData__bool___ctor__, v18, v19, v20);
    sub_B5D5C4(&System_Func_BattleServantData__bool__TypeInfo, v21, v22, v23);
    sub_B5D5C4(&System_Func_BattleServantData__BattleLogicTask__TypeInfo, v24, v25, v26);
    sub_B5D5C4(&Method_ReactTaskTarget___c__DisplayClass1_0__CreateReactionTasksPartial_b__0__, v27, v28, v29);
    sub_B5D5C4(&Method_ReactTaskTarget___c__DisplayClass1_0__CreateReactionTasksPartial_b__1__, v30, v31, v32);
    sub_B5D5C4(&ReactTaskTarget___c__DisplayClass1_0_TypeInfo, v33, v34, v35);
    byte_42E6F88 = 1;
  }
  v36 = sub_B5D694(ReactTaskTarget___c__DisplayClass1_0_TypeInfo);
  ReactTaskTarget___c__DisplayClass1_0___ctor((ReactTaskTarget___c__DisplayClass1_0_o *)v36, 0LL);
  if ( !v36
    || (*(_QWORD *)(v36 + 16) = creator,
        sub_B5D560(
          (BattleServantConfConponent_o *)(v36 + 16),
          (System_Int32_array **)creator,
          v39,
          v40,
          v41,
          v42,
          v43,
          v44),
        *(_QWORD *)(v36 + 24) = logic,
        sub_B5D560(
          (BattleServantConfConponent_o *)(v36 + 24),
          (System_Int32_array **)logic,
          v45,
          v46,
          v47,
          v48,
          v49,
          v50),
        v51 = *(_QWORD *)(v36 + 24),
        *(_DWORD *)(v36 + 32) = priority,
        !v51) )
  {
    sub_B5D69C(v37, v38);
  }
  v52 = (System_Collections_Generic_IEnumerable_TSource__o *)((__int64 (__fastcall *)(ReactTaskTarget_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._5_TargetServants.method)(
                                                               this,
                                                               *(_QWORD *)(v51 + 32),
                                                               this->klass->vtable._6_ExistPriorityUpToAny.methodPtr);
  v53 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_BattleServantData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v53,
    (Il2CppObject *)v36,
    Method_ReactTaskTarget___c__DisplayClass1_0__CreateReactionTasksPartial_b__0__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_BattleServantData__bool___ctor__);
  v54 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          v52,
          (System_Func_TSource__bool__o *)v53,
          (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  v55 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B5D694(System_Func_BattleServantData__BattleLogicTask__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
    v55,
    (Il2CppObject *)v36,
    Method_ReactTaskTarget___c__DisplayClass1_0__CreateReactionTasksPartial_b__1__,
    (const MethodInfo_2C3041C *)Method_System_Func_BattleServantData__BattleLogicTask___ctor__);
  v56 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                               v54,
                                                               (System_Func_TSource__TResult__o *)v55,
                                                               (const MethodInfo_1CB354C *)Method_System_Linq_Enumerable_Select_BattleServantData__BattleLogicTask___);
  return (BattleLogicTask_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                    v56,
                                    (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_BattleLogicTask___);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  __int64 v21; // x23
  __int64 v22; // x0
  __int64 v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  __int64 v36; // x8
  WellFired_USFGOPlayBgmEventConditional_CondBGM_array *v37; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v38; // x20

  if ( (byte_42E6F8A & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_BasicHelper_Any_BattleServantData____68810264,
      (_DWORD)creator,
      (_DWORD)logic,
      *(_QWORD *)&priority);
    sub_B5D5C4(&Method_System_Func_BattleServantData__bool___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Func_BattleServantData__bool__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_ReactTaskTarget___c__DisplayClass4_0__ExistTargetPriority_b__0__, v15, v16, v17);
    sub_B5D5C4(&ReactTaskTarget___c__DisplayClass4_0_TypeInfo, v18, v19, v20);
    byte_42E6F8A = 1;
  }
  v21 = sub_B5D694(ReactTaskTarget___c__DisplayClass4_0_TypeInfo);
  ReactTaskTarget___c__DisplayClass4_0___ctor((ReactTaskTarget___c__DisplayClass4_0_o *)v21, 0LL);
  if ( !v21
    || (*(_QWORD *)(v21 + 16) = creator,
        sub_B5D560(
          (BattleServantConfConponent_o *)(v21 + 16),
          (System_Int32_array **)creator,
          v24,
          v25,
          v26,
          v27,
          v28,
          v29),
        *(_QWORD *)(v21 + 24) = logic,
        sub_B5D560(
          (BattleServantConfConponent_o *)(v21 + 24),
          (System_Int32_array **)logic,
          v30,
          v31,
          v32,
          v33,
          v34,
          v35),
        v36 = *(_QWORD *)(v21 + 24),
        *(_DWORD *)(v21 + 32) = priority,
        !v36) )
  {
    sub_B5D69C(v22, v23);
  }
  v37 = (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)((__int64 (__fastcall *)(ReactTaskTarget_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._5_TargetServants.method)(
                                                                  this,
                                                                  *(_QWORD *)(v36 + 32),
                                                                  this->klass->vtable._6_ExistPriorityUpToAny.methodPtr);
  v38 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_BattleServantData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v38,
    (Il2CppObject *)v21,
    Method_ReactTaskTarget___c__DisplayClass4_0__ExistTargetPriority_b__0__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_BattleServantData__bool___ctor__);
  return BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
           v37,
           (System_Func_T__bool__o *)v38,
           (const MethodInfo_1AD6DE0 *)Method_BasicHelper_Any_BattleServantData____68810264);
}


BattleServantData_array *__fastcall ReactTaskTarget__TargetServants(
        ReactTaskTarget_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  __int64 v3; // x3

  if ( (byte_42E6F89 & 1) == 0 )
  {
    sub_B5D5C4(&BattleServantData___TypeInfo, (_DWORD)data, (_DWORD)method, v3);
    byte_42E6F89 = 1;
  }
  return (BattleServantData_array *)sub_B5D5DC(BattleServantData___TypeInfo, 0LL);
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(0LL, svt);
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
    sub_B5D69C(0LL, svt);
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
    sub_B5D69C(0LL, svt);
  return ((__int64 (__fastcall *)(struct ServantReactTaskCreator_o *, struct BattleLogic_o *, BattleServantData_o *, _QWORD, Il2CppMethodPointer))creator->klass->vtable._7_IsCreatable.method)(
           creator,
           this->fields.logic,
           svt,
           (unsigned int)this->fields.priority,
           creator->klass->vtable._8_Create.methodPtr);
}