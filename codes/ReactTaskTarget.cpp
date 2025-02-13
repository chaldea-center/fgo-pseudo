void __fastcall ReactTaskTarget___ctor(
        ReactTaskTarget_o *this,
        ReactTaskTargetFilter_o *filter,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  if ( (byte_4BDF2EA & 1) == 0 )
  {
    sub_1C21E38(&ReactTaskTargetFilter_TypeInfo);
    byte_4BDF2EA = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !filter )
  {
    filter = (ReactTaskTargetFilter_o *)sub_1C22084(ReactTaskTargetFilter_TypeInfo);
    System_Object___ctor((Il2CppObject *)filter, 0LL);
  }
  if ( !this )
    sub_1C22094(v5, v6);
  this->fields._Filter_k__BackingField = filter;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields, (int64_t)filter, v7, v8, v9, v10, v11, v12);
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

  if ( (byte_4BDF2EB & 1) == 0 )
  {
    sub_1C21E38(&System_Action_BattleLogicTask__TypeInfo);
    sub_1C21E38(&Method_BasicHelper_ForEach_BattleLogicTask___);
    sub_1C21E38(&Method_ReactTaskTarget___c__DisplayClass4_0__CreateReactionTasks_b__0__);
    sub_1C21E38(&ReactTaskTarget___c__DisplayClass4_0_TypeInfo);
    byte_4BDF2EB = 1;
  }
  v9 = sub_1C22084(ReactTaskTarget___c__DisplayClass4_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    sub_1C22094(v10, v11);
  *(_DWORD *)(v9 + 16) = priority;
  v12 = (System_Collections_Generic_IEnumerable_T__o *)((__int64 (__fastcall *)(ReactTaskTarget_o *, ServantReactTaskCreator_o *, BattleLogic_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._4_CreateReactionTasksPartial.method)(
                                                         this,
                                                         creator,
                                                         logic,
                                                         (unsigned int)priority,
                                                         this->klass->vtable._5_TargetServants.methodPtr);
  v13 = (System_Action_object__o *)sub_1C22084(System_Action_BattleLogicTask__TypeInfo);
  System_Action_object____ctor(
    v13,
    (Il2CppObject *)v9,
    Method_ReactTaskTarget___c__DisplayClass4_0__CreateReactionTasks_b__0__,
    0LL);
  BasicHelper__ForEach_object_(
    v12,
    (System_Action_T__o *)v13,
    (const MethodInfo_2F9CD60 *)Method_BasicHelper_ForEach_BattleLogicTask___);
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
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  __int64 v24; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x19
  System_Func_object__bool__o *v26; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x19
  System_Func_object__object__o *v28; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0

  if ( (byte_4BDF2EC & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_Select_BattleServantData__BattleLogicTask___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToArray_BattleLogicTask___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Where_BattleServantData___);
    sub_1C21E38(&System_Func_BattleServantData__bool__TypeInfo);
    sub_1C21E38(&System_Func_BattleServantData__BattleLogicTask__TypeInfo);
    sub_1C21E38(&Method_ReactTaskTarget___c__DisplayClass5_0__CreateReactionTasksPartial_b__0__);
    sub_1C21E38(&Method_ReactTaskTarget___c__DisplayClass5_0__CreateReactionTasksPartial_b__1__);
    sub_1C21E38(&ReactTaskTarget___c__DisplayClass5_0_TypeInfo);
    byte_4BDF2EC = 1;
  }
  v9 = sub_1C22084(ReactTaskTarget___c__DisplayClass5_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9
    || (*(_QWORD *)(v9 + 16) = creator,
        sub_1C21DDC((PartyOrganizationUtility_o *)(v9 + 16), (int64_t)creator, v12, v13, v14, v15, v16, v17),
        *(_QWORD *)(v9 + 24) = logic,
        sub_1C21DDC((PartyOrganizationUtility_o *)(v9 + 24), (int64_t)logic, v18, v19, v20, v21, v22, v23),
        v24 = *(_QWORD *)(v9 + 24),
        *(_DWORD *)(v9 + 32) = priority,
        !v24) )
  {
    sub_1C22094(v10, v11);
  }
  v25 = (System_Collections_Generic_IEnumerable_TSource__o *)((__int64 (__fastcall *)(ReactTaskTarget_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._5_TargetServants.method)(
                                                               this,
                                                               *(_QWORD *)(v24 + 40),
                                                               this->klass->vtable._6_ExistPriorityUpToAny.methodPtr);
  v26 = (System_Func_object__bool__o *)sub_1C22084(System_Func_BattleServantData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v26,
    (Il2CppObject *)v9,
    Method_ReactTaskTarget___c__DisplayClass5_0__CreateReactionTasksPartial_b__0__,
    0LL);
  v27 = System_Linq_Enumerable__Where_object_(
          v25,
          (System_Func_TSource__bool__o *)v26,
          (const MethodInfo_2FEF6F8 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  v28 = (System_Func_object__object__o *)sub_1C22084(System_Func_BattleServantData__BattleLogicTask__TypeInfo);
  System_Func_object__object____ctor(
    v28,
    (Il2CppObject *)v9,
    Method_ReactTaskTarget___c__DisplayClass5_0__CreateReactionTasksPartial_b__1__,
    0LL);
  v29 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               v27,
                                                               (System_Func_TSource__TResult__o *)v28,
                                                               (const MethodInfo_2FE15B8 *)Method_System_Linq_Enumerable_Select_BattleServantData__BattleLogicTask___);
  return (BattleLogicTask_array *)System_Linq_Enumerable__ToArray_object_(
                                    v29,
                                    (const MethodInfo_2FE97E4 *)Method_System_Linq_Enumerable_ToArray_BattleLogicTask___);
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
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  __int64 v24; // x8
  System_Object_array *v25; // x19
  System_Func_object__bool__o *v26; // x20

  if ( (byte_4BDF2EE & 1) == 0 )
  {
    sub_1C21E38(&Method_BasicHelper_Any_BattleServantData____77629568);
    sub_1C21E38(&System_Func_BattleServantData__bool__TypeInfo);
    sub_1C21E38(&Method_ReactTaskTarget___c__DisplayClass8_0__ExistTargetPriority_b__0__);
    sub_1C21E38(&ReactTaskTarget___c__DisplayClass8_0_TypeInfo);
    byte_4BDF2EE = 1;
  }
  v9 = sub_1C22084(ReactTaskTarget___c__DisplayClass8_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9
    || (*(_QWORD *)(v9 + 16) = creator,
        sub_1C21DDC((PartyOrganizationUtility_o *)(v9 + 16), (int64_t)creator, v12, v13, v14, v15, v16, v17),
        *(_QWORD *)(v9 + 24) = logic,
        sub_1C21DDC((PartyOrganizationUtility_o *)(v9 + 24), (int64_t)logic, v18, v19, v20, v21, v22, v23),
        v24 = *(_QWORD *)(v9 + 24),
        *(_DWORD *)(v9 + 32) = priority,
        !v24) )
  {
    sub_1C22094(v10, v11);
  }
  v25 = (System_Object_array *)((__int64 (__fastcall *)(ReactTaskTarget_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._5_TargetServants.method)(
                                 this,
                                 *(_QWORD *)(v24 + 40),
                                 this->klass->vtable._6_ExistPriorityUpToAny.methodPtr);
  v26 = (System_Func_object__bool__o *)sub_1C22084(System_Func_BattleServantData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v26,
    (Il2CppObject *)v9,
    Method_ReactTaskTarget___c__DisplayClass8_0__ExistTargetPriority_b__0__,
    0LL);
  return BasicHelper__Any_object__49917468(
           v25,
           (System_Func_T__bool__o *)v26,
           (const MethodInfo_2F9AE1C *)Method_BasicHelper_Any_BattleServantData____77629568);
}


BattleServantData_array *__fastcall ReactTaskTarget__TargetServants(
        ReactTaskTarget_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  if ( (byte_4BDF2ED & 1) == 0 )
  {
    sub_1C21E38(&BattleServantData___TypeInfo);
    byte_4BDF2ED = 1;
  }
  return (BattleServantData_array *)sub_1C21EE0(BattleServantData___TypeInfo, 0LL);
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
    sub_1C22094(this, 0LL);
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
    sub_1C22094(0LL, svt);
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
    sub_1C22094(0LL, svt);
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
    sub_1C22094(0LL, svt);
  return ((__int64 (__fastcall *)(struct ServantReactTaskCreator_o *, struct BattleLogic_o *, BattleServantData_o *, _QWORD, Il2CppMethodPointer))creator->klass->vtable._7_IsCreatable.method)(
           creator,
           this->fields.logic,
           svt,
           (unsigned int)this->fields.priority,
           creator->klass->vtable._8_Create.methodPtr);
}