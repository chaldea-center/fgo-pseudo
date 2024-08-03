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
  __int64 v12; // x23
  __int64 v13; // x0
  System_Collections_Generic_IEnumerable_T__o *v14; // x19
  __int64 v15; // x1
  __int64 v16; // x2
  System_Action_object__o *v17; // x20

  if ( (byte_49FEFF5 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_BattleLogicTask__TypeInfo, creator);
    sub_1B640C8(&Method_BasicHelper_ForEach_BattleLogicTask___, v9);
    sub_1B640C8(&Method_ReactTaskTarget___c__DisplayClass0_0__CreateReactionTasks_b__0__, v10);
    sub_1B640C8(&ReactTaskTarget___c__DisplayClass0_0_TypeInfo, v11);
    byte_49FEFF5 = 1;
  }
  v12 = sub_1B64314(ReactTaskTarget___c__DisplayClass0_0_TypeInfo, creator, logic);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    sub_1B64324(v13);
  *(_DWORD *)(v12 + 16) = priority;
  v14 = (System_Collections_Generic_IEnumerable_T__o *)((__int64 (__fastcall *)(ReactTaskTarget_o *, ServantReactTaskCreator_o *, BattleLogic_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._4_CreateReactionTasksPartial.method)(
                                                         this,
                                                         creator,
                                                         logic,
                                                         (unsigned int)priority,
                                                         this->klass->vtable._5_TargetServants.methodPtr);
  v17 = (System_Action_object__o *)sub_1B64314(System_Action_BattleLogicTask__TypeInfo, v15, v16);
  System_Action_object____ctor(
    v17,
    (Il2CppObject *)v12,
    Method_ReactTaskTarget___c__DisplayClass0_0__CreateReactionTasks_b__0__,
    0LL);
  BasicHelper__ForEach_object_(
    v14,
    (System_Action_T__o *)v17,
    (const MethodInfo_2E26860 *)Method_BasicHelper_ForEach_BattleLogicTask___);
  return (BattleLogicTask_array *)v14;
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
  __int64 v16; // x21
  __int64 v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  int32_t v20; // w2
  int32_t v21; // w3
  __int64 v22; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x19
  __int64 v24; // x1
  __int64 v25; // x2
  System_Func_object__bool__o *v26; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x19
  __int64 v28; // x1
  __int64 v29; // x2
  System_Func_object__object__o *v30; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x0

  if ( (byte_49FEFF6 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_BattleServantData__BattleLogicTask___, creator);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_BattleLogicTask___, v9);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_BattleServantData___, v10);
    sub_1B640C8(&System_Func_BattleServantData__bool__TypeInfo, v11);
    sub_1B640C8(&System_Func_BattleServantData__BattleLogicTask__TypeInfo, v12);
    sub_1B640C8(&Method_ReactTaskTarget___c__DisplayClass1_0__CreateReactionTasksPartial_b__0__, v13);
    sub_1B640C8(&Method_ReactTaskTarget___c__DisplayClass1_0__CreateReactionTasksPartial_b__1__, v14);
    sub_1B640C8(&ReactTaskTarget___c__DisplayClass1_0_TypeInfo, v15);
    byte_49FEFF6 = 1;
  }
  v16 = sub_1B64314(ReactTaskTarget___c__DisplayClass1_0_TypeInfo, creator, logic);
  System_Object___ctor((Il2CppObject *)v16, 0LL);
  if ( !v16
    || (*(_QWORD *)(v16 + 16) = creator,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v16 + 16), (int32_t)creator, v18, v19),
        *(_QWORD *)(v16 + 24) = logic,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v16 + 24), (int32_t)logic, v20, v21),
        v22 = *(_QWORD *)(v16 + 24),
        *(_DWORD *)(v16 + 32) = priority,
        !v22) )
  {
    sub_1B64324(v17);
  }
  v23 = (System_Collections_Generic_IEnumerable_TSource__o *)((__int64 (__fastcall *)(ReactTaskTarget_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._5_TargetServants.method)(
                                                               this,
                                                               *(_QWORD *)(v22 + 40),
                                                               this->klass->vtable._6_ExistPriorityUpToAny.methodPtr);
  v26 = (System_Func_object__bool__o *)sub_1B64314(System_Func_BattleServantData__bool__TypeInfo, v24, v25);
  System_Func_object__bool____ctor(
    v26,
    (Il2CppObject *)v16,
    Method_ReactTaskTarget___c__DisplayClass1_0__CreateReactionTasksPartial_b__0__,
    0LL);
  v27 = System_Linq_Enumerable__Where_object_(
          v23,
          (System_Func_TSource__bool__o *)v26,
          (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  v30 = (System_Func_object__object__o *)sub_1B64314(System_Func_BattleServantData__BattleLogicTask__TypeInfo, v28, v29);
  System_Func_object__object____ctor(
    v30,
    (Il2CppObject *)v16,
    Method_ReactTaskTarget___c__DisplayClass1_0__CreateReactionTasksPartial_b__1__,
    0LL);
  v31 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               v27,
                                                               (System_Func_TSource__TResult__o *)v30,
                                                               (const MethodInfo_2E693AC *)Method_System_Linq_Enumerable_Select_BattleServantData__BattleLogicTask___);
  return (BattleLogicTask_array *)System_Linq_Enumerable__ToArray_object_(
                                    v31,
                                    (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_BattleLogicTask___);
}


bool __fastcall ReactTaskTarget__ExistPriorityUpToAny(
        ReactTaskTarget_o *this,
        ServantReactTaskCreator_o *creator,
        BattleLogic_o *logic,
        int32_t maxPriority,
        const MethodInfo *method)
{
  int32_t v5; // w19
  char v9; // w0
  bool v10; // vf

  if ( (maxPriority & 0x80000000) != 0 )
  {
    v9 = 0;
  }
  else
  {
    v5 = maxPriority;
    do
    {
      v9 = ((__int64 (__fastcall *)(ReactTaskTarget_o *, ServantReactTaskCreator_o *, BattleLogic_o *, _QWORD, void *))this->klass->vtable._7_ExistTargetPriority.method)(
             this,
             creator,
             logic,
             (unsigned int)v5,
             this->klass[1]._1.image);
      v10 = __OFSUB__(v5--, 1);
    }
    while ( v5 < 0 == v10 && (v9 & 1) == 0 );
  }
  return v9 & 1;
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
  __int64 v12; // x22
  __int64 v13; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w2
  int32_t v17; // w3
  __int64 v18; // x8
  System_Object_array *v19; // x19
  __int64 v20; // x1
  __int64 v21; // x2
  System_Func_object__bool__o *v22; // x20

  if ( (byte_49FEFF8 & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_Any_BattleServantData____75709256, creator);
    sub_1B640C8(&System_Func_BattleServantData__bool__TypeInfo, v9);
    sub_1B640C8(&Method_ReactTaskTarget___c__DisplayClass4_0__ExistTargetPriority_b__0__, v10);
    sub_1B640C8(&ReactTaskTarget___c__DisplayClass4_0_TypeInfo, v11);
    byte_49FEFF8 = 1;
  }
  v12 = sub_1B64314(ReactTaskTarget___c__DisplayClass4_0_TypeInfo, creator, logic);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12
    || (*(_QWORD *)(v12 + 16) = creator,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v12 + 16), (int32_t)creator, v14, v15),
        *(_QWORD *)(v12 + 24) = logic,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v12 + 24), (int32_t)logic, v16, v17),
        v18 = *(_QWORD *)(v12 + 24),
        *(_DWORD *)(v12 + 32) = priority,
        !v18) )
  {
    sub_1B64324(v13);
  }
  v19 = (System_Object_array *)((__int64 (__fastcall *)(ReactTaskTarget_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._5_TargetServants.method)(
                                 this,
                                 *(_QWORD *)(v18 + 40),
                                 this->klass->vtable._6_ExistPriorityUpToAny.methodPtr);
  v22 = (System_Func_object__bool__o *)sub_1B64314(System_Func_BattleServantData__bool__TypeInfo, v20, v21);
  System_Func_object__bool____ctor(
    v22,
    (Il2CppObject *)v12,
    Method_ReactTaskTarget___c__DisplayClass4_0__ExistTargetPriority_b__0__,
    0LL);
  return BasicHelper__Any_object__48384284(
           v19,
           (System_Func_T__bool__o *)v22,
           (const MethodInfo_2E2491C *)Method_BasicHelper_Any_BattleServantData____75709256);
}


BattleServantData_array *__fastcall ReactTaskTarget__TargetServants(
        ReactTaskTarget_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  if ( (byte_49FEFF7 & 1) == 0 )
  {
    sub_1B640C8(&BattleServantData___TypeInfo, data);
    byte_49FEFF7 = 1;
  }
  return (BattleServantData_array *)sub_1B64170(BattleServantData___TypeInfo, 0LL);
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
    sub_1B64324(this);
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
    sub_1B64324(0LL);
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
    sub_1B64324(0LL);
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
    sub_1B64324(0LL);
  return ((__int64 (__fastcall *)(struct ServantReactTaskCreator_o *, struct BattleLogic_o *, BattleServantData_o *, _QWORD, Il2CppMethodPointer))creator->klass->vtable._7_IsCreatable.method)(
           creator,
           this->fields.logic,
           svt,
           (unsigned int)this->fields.priority,
           creator->klass->vtable._8_Create.methodPtr);
}