void ReactTaskTarget___ctor(ReactTaskTarget_o *this, ReactTaskTargetFilter_o *filter, const MethodInfo *method)
{
  __int64 v5; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C461F4 & 1) == 0 )
  {
    sub_1C37058(&ReactTaskTargetFilter_TypeInfo);
    byte_4C461F4 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !filter )
  {
    filter = (ReactTaskTargetFilter_o *)sub_1C372A4(ReactTaskTargetFilter_TypeInfo);
    System_Object___ctor((Il2CppObject *)filter, 0);
  }
  if ( !this )
    sub_1C372B4(v5);
  this->fields._Filter_k__BackingField = filter;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields, (int32_t)filter, v6, v7);
}


BattleLogicTask_array *ReactTaskTarget__CreateReactionTasks(
        ReactTaskTarget_o *this,
        ServantReactTaskCreator_o *creator,
        BattleLogic_o *logic,
        int32_t priority,
        const MethodInfo *method)
{
  __int64 v9; // x23
  __int64 v10; // x0
  System_Collections_Generic_IEnumerable_T__o *v11; // x19
  System_Action_object__o *v12; // x20

  if ( (byte_4C461F5 & 1) == 0 )
  {
    sub_1C37058(&System_Action_BattleLogicTask__TypeInfo);
    sub_1C37058(&Method_BasicHelper_ForEach_BattleLogicTask___);
    sub_1C37058(&Method_ReactTaskTarget___c__DisplayClass4_0__CreateReactionTasks_b__0__);
    sub_1C37058(&ReactTaskTarget___c__DisplayClass4_0_TypeInfo);
    byte_4C461F5 = 1;
  }
  v9 = sub_1C372A4(ReactTaskTarget___c__DisplayClass4_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    sub_1C372B4(v10);
  *(_DWORD *)(v9 + 16) = priority;
  v11 = (System_Collections_Generic_IEnumerable_T__o *)((__int64 (__fastcall *)(ReactTaskTarget_o *, ServantReactTaskCreator_o *, BattleLogic_o *, _QWORD, const MethodInfo *))this->klass->vtable._4_CreateReactionTasksPartial.methodPtr)(
                                                         this,
                                                         creator,
                                                         logic,
                                                         (unsigned int)priority,
                                                         this->klass->vtable._4_CreateReactionTasksPartial.method);
  v12 = (System_Action_object__o *)sub_1C372A4(System_Action_BattleLogicTask__TypeInfo);
  System_Action_object____ctor(
    v12,
    (Il2CppObject *)v9,
    Method_ReactTaskTarget___c__DisplayClass4_0__CreateReactionTasks_b__0__,
    0);
  BasicHelper__ForEach_object_(
    v11,
    (System_Action_T__o *)v12,
    (const MethodInfo_30D3C18 *)Method_BasicHelper_ForEach_BattleLogicTask___);
  return (BattleLogicTask_array *)v11;
}


BattleLogicTask_array *ReactTaskTarget__CreateReactionTasksPartial(
        ReactTaskTarget_o *this,
        ServantReactTaskCreator_o *creator,
        BattleLogic_o *logic,
        int32_t priority,
        const MethodInfo *method)
{
  __int64 v9; // x21
  __int64 v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  __int64 v15; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x19
  System_Func_object__bool__o *v17; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x19
  System_Func_object__object__o *v19; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0

  if ( (byte_4C461F6 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_Select_BattleServantData__BattleLogicTask___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToArray_BattleLogicTask___);
    sub_1C37058(&Method_System_Linq_Enumerable_Where_BattleServantData___);
    sub_1C37058(&System_Func_BattleServantData__bool__TypeInfo);
    sub_1C37058(&System_Func_BattleServantData__BattleLogicTask__TypeInfo);
    sub_1C37058(&Method_ReactTaskTarget___c__DisplayClass5_0__CreateReactionTasksPartial_b__0__);
    sub_1C37058(&Method_ReactTaskTarget___c__DisplayClass5_0__CreateReactionTasksPartial_b__1__);
    sub_1C37058(&ReactTaskTarget___c__DisplayClass5_0_TypeInfo);
    byte_4C461F6 = 1;
  }
  v9 = sub_1C372A4(ReactTaskTarget___c__DisplayClass5_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9
    || (*(_QWORD *)(v9 + 16) = creator,
        sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 16), (int32_t)creator, v11, v12),
        *(_QWORD *)(v9 + 24) = logic,
        sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 24), (int32_t)logic, v13, v14),
        v15 = *(_QWORD *)(v9 + 24),
        *(_DWORD *)(v9 + 32) = priority,
        !v15) )
  {
    sub_1C372B4(v10);
  }
  v16 = (System_Collections_Generic_IEnumerable_TSource__o *)((__int64 (__fastcall *)(ReactTaskTarget_o *, _QWORD, const MethodInfo *))this->klass->vtable._5_TargetServants.methodPtr)(
                                                               this,
                                                               *(_QWORD *)(v15 + 40),
                                                               this->klass->vtable._5_TargetServants.method);
  v17 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_BattleServantData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v17,
    (Il2CppObject *)v9,
    Method_ReactTaskTarget___c__DisplayClass5_0__CreateReactionTasksPartial_b__0__,
    0);
  v18 = System_Linq_Enumerable__Where_object_(
          v16,
          (System_Func_TSource__bool__o *)v17,
          (const MethodInfo_312E410 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  v19 = (System_Func_object__object__o *)sub_1C372A4(System_Func_BattleServantData__BattleLogicTask__TypeInfo);
  System_Func_object__object____ctor(
    v19,
    (Il2CppObject *)v9,
    Method_ReactTaskTarget___c__DisplayClass5_0__CreateReactionTasksPartial_b__1__,
    0);
  v20 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               v18,
                                                               (System_Func_TSource__TResult__o *)v19,
                                                               (const MethodInfo_311E324 *)Method_System_Linq_Enumerable_Select_BattleServantData__BattleLogicTask___);
  return (BattleLogicTask_array *)System_Linq_Enumerable__ToArray_object_(
                                    v20,
                                    (const MethodInfo_31272F4 *)Method_System_Linq_Enumerable_ToArray_BattleLogicTask___);
}


bool ReactTaskTarget__ExistPriorityUpToAny(
        ReactTaskTarget_o *this,
        ServantReactTaskCreator_o *creator,
        BattleLogic_o *logic,
        int32_t maxPriority,
        const MethodInfo *method)
{
  int32_t v5; // w19
  char v9; // w0
  bool v10; // vf

  if ( maxPriority < 0 )
  {
    v9 = 0;
  }
  else
  {
    v5 = maxPriority;
    do
    {
      v9 = ((__int64 (__fastcall *)(ReactTaskTarget_o *, ServantReactTaskCreator_o *, BattleLogic_o *, _QWORD, const MethodInfo *))this->klass->vtable._7_ExistTargetPriority.methodPtr)(
             this,
             creator,
             logic,
             (unsigned int)v5,
             this->klass->vtable._7_ExistTargetPriority.method);
      v10 = __OFSUB__(v5--, 1);
    }
    while ( v5 < 0 == v10 && (v9 & 1) == 0 );
  }
  return v9 & 1;
}


bool ReactTaskTarget__ExistTargetPriority(
        ReactTaskTarget_o *this,
        ServantReactTaskCreator_o *creator,
        BattleLogic_o *logic,
        int32_t priority,
        const MethodInfo *method)
{
  __int64 v9; // x22
  __int64 v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  __int64 v15; // x8
  System_Object_array *v16; // x19
  System_Func_object__bool__o *v17; // x20

  if ( (byte_4C461F8 & 1) == 0 )
  {
    sub_1C37058(&Method_BasicHelper_Any_BattleServantData____78107744);
    sub_1C37058(&System_Func_BattleServantData__bool__TypeInfo);
    sub_1C37058(&Method_ReactTaskTarget___c__DisplayClass8_0__ExistTargetPriority_b__0__);
    sub_1C37058(&ReactTaskTarget___c__DisplayClass8_0_TypeInfo);
    byte_4C461F8 = 1;
  }
  v9 = sub_1C372A4(ReactTaskTarget___c__DisplayClass8_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9
    || (*(_QWORD *)(v9 + 16) = creator,
        sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 16), (int32_t)creator, v11, v12),
        *(_QWORD *)(v9 + 24) = logic,
        sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 24), (int32_t)logic, v13, v14),
        v15 = *(_QWORD *)(v9 + 24),
        *(_DWORD *)(v9 + 32) = priority,
        !v15) )
  {
    sub_1C372B4(v10);
  }
  v16 = (System_Object_array *)((__int64 (__fastcall *)(ReactTaskTarget_o *, _QWORD, const MethodInfo *))this->klass->vtable._5_TargetServants.methodPtr)(
                                 this,
                                 *(_QWORD *)(v15 + 40),
                                 this->klass->vtable._5_TargetServants.method);
  v17 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_BattleServantData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v17,
    (Il2CppObject *)v9,
    Method_ReactTaskTarget___c__DisplayClass8_0__ExistTargetPriority_b__0__,
    0);
  return BasicHelper__Any_object__51187876(
           v16,
           (System_Func_T__bool__o *)v17,
           (const MethodInfo_30D10A4 *)Method_BasicHelper_Any_BattleServantData____78107744);
}


BattleServantData_array *ReactTaskTarget__TargetServants(
        ReactTaskTarget_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  if ( (byte_4C461F7 & 1) == 0 )
  {
    sub_1C37058(&BattleServantData___TypeInfo);
    byte_4C461F7 = 1;
  }
  return (BattleServantData_array *)sub_1C37100(BattleServantData___TypeInfo, 0);
}


ReactTaskTargetFilter_o *ReactTaskTarget__get_Filter(ReactTaskTarget_o *this, const MethodInfo *method)
{
  return this->fields._Filter_k__BackingField;
}


void ReactTaskTarget___c__DisplayClass4_0___ctor(
        ReactTaskTarget___c__DisplayClass4_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ReactTaskTarget___c__DisplayClass4_0___CreateReactionTasks_b__0(
        ReactTaskTarget___c__DisplayClass4_0_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  if ( !task )
    sub_1C372B4(this);
  task->fields._AiTimingPriority_k__BackingField = this->fields.priority;
}


void ReactTaskTarget___c__DisplayClass5_0___ctor(
        ReactTaskTarget___c__DisplayClass5_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ReactTaskTarget___c__DisplayClass5_0___CreateReactionTasksPartial_b__0(
        ReactTaskTarget___c__DisplayClass5_0_o *this,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  struct ServantReactTaskCreator_o *creator; // x0

  creator = this->fields.creator;
  if ( !creator )
    sub_1C372B4(0);
  return ((__int64 (__fastcall *)(struct ServantReactTaskCreator_o *, struct BattleLogic_o *, BattleServantData_o *, _QWORD, const MethodInfo *))creator->klass->vtable._7_IsCreatable.methodPtr)(
           creator,
           this->fields.logic,
           svt,
           (unsigned int)this->fields.priority,
           creator->klass->vtable._7_IsCreatable.method);
}


BattleLogicTask_o *ReactTaskTarget___c__DisplayClass5_0___CreateReactionTasksPartial_b__1(
        ReactTaskTarget___c__DisplayClass5_0_o *this,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  struct ServantReactTaskCreator_o *creator; // x0

  creator = this->fields.creator;
  if ( !creator )
    sub_1C372B4(0);
  return (BattleLogicTask_o *)((__int64 (__fastcall *)(struct ServantReactTaskCreator_o *, BattleServantData_o *, struct BattleLogic_o *, const MethodInfo *))creator->klass->vtable._8_Create.methodPtr)(
                                creator,
                                svt,
                                this->fields.logic,
                                creator->klass->vtable._8_Create.method);
}


void ReactTaskTarget___c__DisplayClass8_0___ctor(
        ReactTaskTarget___c__DisplayClass8_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ReactTaskTarget___c__DisplayClass8_0___ExistTargetPriority_b__0(
        ReactTaskTarget___c__DisplayClass8_0_o *this,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  struct ServantReactTaskCreator_o *creator; // x0

  creator = this->fields.creator;
  if ( !creator )
    sub_1C372B4(0);
  return ((__int64 (__fastcall *)(struct ServantReactTaskCreator_o *, struct BattleLogic_o *, BattleServantData_o *, _QWORD, const MethodInfo *))creator->klass->vtable._7_IsCreatable.methodPtr)(
           creator,
           this->fields.logic,
           svt,
           (unsigned int)this->fields.priority,
           creator->klass->vtable._7_IsCreatable.method);
}