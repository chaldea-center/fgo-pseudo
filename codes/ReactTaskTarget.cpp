void __fastcall ReactTaskTarget___ctor(
        ReactTaskTarget_o *this,
        ReactTaskTargetFilter_o *filter,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A5DDB2 & 1) == 0 )
  {
    sub_1B885B0(&ReactTaskTargetFilter_TypeInfo);
    byte_4A5DDB2 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !filter )
  {
    filter = (ReactTaskTargetFilter_o *)sub_1B887FC(ReactTaskTargetFilter_TypeInfo);
    System_Object___ctor((Il2CppObject *)filter, 0LL);
  }
  if ( !this )
    sub_1B8880C(v5, v6);
  this->fields._Filter_k__BackingField = filter;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)filter, v7, v8);
}


BattleLogicTask_array *__fastcall ReactTaskTarget__CreateReactionTasks(
        ReactTaskTarget_o *this,
        ServantReactTaskCreator_o *creator,
        BattleLogic_o *logic,
        int32_t priority,
        const MethodInfo *method)
{
  __int64 v9; // x23
  __int64 v10; // x0
  __int64 v11; // x1
  System_Collections_Generic_IEnumerable_T__o *v12; // x19
  System_Action_object__o *v13; // x20

  if ( (byte_4A5DDB3 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_BattleLogicTask__TypeInfo);
    sub_1B885B0(&Method_BasicHelper_ForEach_BattleLogicTask___);
    sub_1B885B0(&Method_ReactTaskTarget___c__DisplayClass4_0__CreateReactionTasks_b__0__);
    sub_1B885B0(&ReactTaskTarget___c__DisplayClass4_0_TypeInfo);
    byte_4A5DDB3 = 1;
  }
  v9 = sub_1B887FC(ReactTaskTarget___c__DisplayClass4_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    sub_1B8880C(v10, v11);
  *(_DWORD *)(v9 + 16) = priority;
  v12 = (System_Collections_Generic_IEnumerable_T__o *)((__int64 (__fastcall *)(ReactTaskTarget_o *, ServantReactTaskCreator_o *, BattleLogic_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._4_CreateReactionTasksPartial.method)(
                                                         this,
                                                         creator,
                                                         logic,
                                                         (unsigned int)priority,
                                                         this->klass->vtable._5_TargetServants.methodPtr);
  v13 = (System_Action_object__o *)sub_1B887FC(System_Action_BattleLogicTask__TypeInfo);
  System_Action_object____ctor(
    v13,
    (Il2CppObject *)v9,
    Method_ReactTaskTarget___c__DisplayClass4_0__CreateReactionTasks_b__0__,
    0LL);
  BasicHelper__ForEach_object_(
    v12,
    (System_Action_T__o *)v13,
    (const MethodInfo_2E6CCC0 *)Method_BasicHelper_ForEach_BattleLogicTask___);
  return (BattleLogicTask_array *)v12;
}


BattleLogicTask_array *__fastcall ReactTaskTarget__CreateReactionTasksPartial(
        ReactTaskTarget_o *this,
        ServantReactTaskCreator_o *creator,
        BattleLogic_o *logic,
        int32_t priority,
        const MethodInfo *method)
{
  __int64 v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w2
  int32_t v15; // w3
  __int64 v16; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x19
  System_Func_object__bool__o *v18; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x19
  System_Func_object__object__o *v20; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0

  if ( (byte_4A5DDB4 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_BattleServantData__BattleLogicTask___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_BattleLogicTask___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_BattleServantData___);
    sub_1B885B0(&System_Func_BattleServantData__bool__TypeInfo);
    sub_1B885B0(&System_Func_BattleServantData__BattleLogicTask__TypeInfo);
    sub_1B885B0(&Method_ReactTaskTarget___c__DisplayClass5_0__CreateReactionTasksPartial_b__0__);
    sub_1B885B0(&Method_ReactTaskTarget___c__DisplayClass5_0__CreateReactionTasksPartial_b__1__);
    sub_1B885B0(&ReactTaskTarget___c__DisplayClass5_0_TypeInfo);
    byte_4A5DDB4 = 1;
  }
  v9 = sub_1B887FC(ReactTaskTarget___c__DisplayClass5_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9
    || (*(_QWORD *)(v9 + 16) = creator,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 16), (int32_t)creator, v12, v13),
        *(_QWORD *)(v9 + 24) = logic,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 24), (int32_t)logic, v14, v15),
        v16 = *(_QWORD *)(v9 + 24),
        *(_DWORD *)(v9 + 32) = priority,
        !v16) )
  {
    sub_1B8880C(v10, v11);
  }
  v17 = (System_Collections_Generic_IEnumerable_TSource__o *)((__int64 (__fastcall *)(ReactTaskTarget_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._5_TargetServants.method)(
                                                               this,
                                                               *(_QWORD *)(v16 + 40),
                                                               this->klass->vtable._6_ExistPriorityUpToAny.methodPtr);
  v18 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_BattleServantData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v18,
    (Il2CppObject *)v9,
    Method_ReactTaskTarget___c__DisplayClass5_0__CreateReactionTasksPartial_b__0__,
    0LL);
  v19 = System_Linq_Enumerable__Where_object_(
          v17,
          (System_Func_TSource__bool__o *)v18,
          (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  v20 = (System_Func_object__object__o *)sub_1B887FC(System_Func_BattleServantData__BattleLogicTask__TypeInfo);
  System_Func_object__object____ctor(
    v20,
    (Il2CppObject *)v9,
    Method_ReactTaskTarget___c__DisplayClass5_0__CreateReactionTasksPartial_b__1__,
    0LL);
  v21 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               v19,
                                                               (System_Func_TSource__TResult__o *)v20,
                                                               (const MethodInfo_2EB040C *)Method_System_Linq_Enumerable_Select_BattleServantData__BattleLogicTask___);
  return (BattleLogicTask_array *)System_Linq_Enumerable__ToArray_object_(
                                    v21,
                                    (const MethodInfo_2EB86E4 *)Method_System_Linq_Enumerable_ToArray_BattleLogicTask___);
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
  __int64 v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w2
  int32_t v15; // w3
  __int64 v16; // x8
  System_Object_array *v17; // x19
  System_Func_object__bool__o *v18; // x20

  if ( (byte_4A5DDB6 & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_Any_BattleServantData____76088664);
    sub_1B885B0(&System_Func_BattleServantData__bool__TypeInfo);
    sub_1B885B0(&Method_ReactTaskTarget___c__DisplayClass8_0__ExistTargetPriority_b__0__);
    sub_1B885B0(&ReactTaskTarget___c__DisplayClass8_0_TypeInfo);
    byte_4A5DDB6 = 1;
  }
  v9 = sub_1B887FC(ReactTaskTarget___c__DisplayClass8_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9
    || (*(_QWORD *)(v9 + 16) = creator,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 16), (int32_t)creator, v12, v13),
        *(_QWORD *)(v9 + 24) = logic,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 24), (int32_t)logic, v14, v15),
        v16 = *(_QWORD *)(v9 + 24),
        *(_DWORD *)(v9 + 32) = priority,
        !v16) )
  {
    sub_1B8880C(v10, v11);
  }
  v17 = (System_Object_array *)((__int64 (__fastcall *)(ReactTaskTarget_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._5_TargetServants.method)(
                                 this,
                                 *(_QWORD *)(v16 + 40),
                                 this->klass->vtable._6_ExistPriorityUpToAny.methodPtr);
  v18 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_BattleServantData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v18,
    (Il2CppObject *)v9,
    Method_ReactTaskTarget___c__DisplayClass8_0__ExistTargetPriority_b__0__,
    0LL);
  return BasicHelper__Any_object__48672124(
           v17,
           (System_Func_T__bool__o *)v18,
           (const MethodInfo_2E6AD7C *)Method_BasicHelper_Any_BattleServantData____76088664);
}


BattleServantData_array *__fastcall ReactTaskTarget__TargetServants(
        ReactTaskTarget_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  if ( (byte_4A5DDB5 & 1) == 0 )
  {
    sub_1B885B0(&BattleServantData___TypeInfo);
    byte_4A5DDB5 = 1;
  }
  return (BattleServantData_array *)sub_1B88658(BattleServantData___TypeInfo, 0LL);
}


ReactTaskTargetFilter_o *__fastcall ReactTaskTarget__get_Filter(ReactTaskTarget_o *this, const MethodInfo *method)
{
  return this->fields._Filter_k__BackingField;
}


void __fastcall ReactTaskTarget___c__DisplayClass4_0___ctor(
        ReactTaskTarget___c__DisplayClass4_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ReactTaskTarget___c__DisplayClass4_0___CreateReactionTasks_b__0(
        ReactTaskTarget___c__DisplayClass4_0_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  if ( !task )
    sub_1B8880C(this, 0LL);
  BattleLogicTask__SetAiPriority(task, this->fields.priority, 0LL);
}


void __fastcall ReactTaskTarget___c__DisplayClass5_0___ctor(
        ReactTaskTarget___c__DisplayClass5_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ReactTaskTarget___c__DisplayClass5_0___CreateReactionTasksPartial_b__0(
        ReactTaskTarget___c__DisplayClass5_0_o *this,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  struct ServantReactTaskCreator_o *creator; // x0

  creator = this->fields.creator;
  if ( !creator )
    sub_1B8880C(0LL, svt);
  return ((__int64 (__fastcall *)(struct ServantReactTaskCreator_o *, struct BattleLogic_o *, BattleServantData_o *, _QWORD, Il2CppMethodPointer))creator->klass->vtable._7_IsCreatable.method)(
           creator,
           this->fields.logic,
           svt,
           (unsigned int)this->fields.priority,
           creator->klass->vtable._8_Create.methodPtr);
}


BattleLogicTask_o *__fastcall ReactTaskTarget___c__DisplayClass5_0___CreateReactionTasksPartial_b__1(
        ReactTaskTarget___c__DisplayClass5_0_o *this,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  struct ServantReactTaskCreator_o *creator; // x0

  creator = this->fields.creator;
  if ( !creator )
    sub_1B8880C(0LL, svt);
  return (BattleLogicTask_o *)((__int64 (__fastcall *)(struct ServantReactTaskCreator_o *, BattleServantData_o *, struct BattleLogic_o *, void *))creator->klass->vtable._8_Create.method)(
                                creator,
                                svt,
                                this->fields.logic,
                                creator->klass[1]._1.image);
}


void __fastcall ReactTaskTarget___c__DisplayClass8_0___ctor(
        ReactTaskTarget___c__DisplayClass8_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ReactTaskTarget___c__DisplayClass8_0___ExistTargetPriority_b__0(
        ReactTaskTarget___c__DisplayClass8_0_o *this,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  struct ServantReactTaskCreator_o *creator; // x0

  creator = this->fields.creator;
  if ( !creator )
    sub_1B8880C(0LL, svt);
  return ((__int64 (__fastcall *)(struct ServantReactTaskCreator_o *, struct BattleLogic_o *, BattleServantData_o *, _QWORD, Il2CppMethodPointer))creator->klass->vtable._7_IsCreatable.method)(
           creator,
           this->fields.logic,
           svt,
           (unsigned int)this->fields.priority,
           creator->klass->vtable._8_Create.methodPtr);
}