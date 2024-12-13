void __fastcall ReactTaskTarget___ctor(
        ReactTaskTarget_o *this,
        ReactTaskTargetFilter_o *filter,
        const MethodInfo *method)
{
  Il2CppObject *v3; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  v3 = (Il2CppObject *)filter;
  if ( (byte_4B39EA2 & 1) == 0 )
  {
    sub_1BD3458(&ReactTaskTargetFilter_TypeInfo, filter);
    byte_4B39EA2 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !v3 )
  {
    v3 = (Il2CppObject *)sub_1BD36A4(ReactTaskTargetFilter_TypeInfo);
    System_Object___ctor(v3, 0LL);
  }
  if ( !this )
    sub_1BD36B4(v5, v6);
  this->fields._Filter_k__BackingField = (struct ReactTaskTargetFilter_o *)v3;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields, (int64_t)v3, v7, v8, v9, v10, v11, v12);
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
  __int64 v14; // x1
  System_Collections_Generic_IEnumerable_T__o *v15; // x19
  System_Action_object__o *v16; // x20

  if ( (byte_4B39EA3 & 1) == 0 )
  {
    sub_1BD3458(&System_Action_BattleLogicTask__TypeInfo, creator);
    sub_1BD3458(&Method_BasicHelper_ForEach_BattleLogicTask___, v9);
    sub_1BD3458(&Method_ReactTaskTarget___c__DisplayClass4_0__CreateReactionTasks_b__0__, v10);
    sub_1BD3458(&ReactTaskTarget___c__DisplayClass4_0_TypeInfo, v11);
    byte_4B39EA3 = 1;
  }
  v12 = sub_1BD36A4(ReactTaskTarget___c__DisplayClass4_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    sub_1BD36B4(v13, v14);
  *(_DWORD *)(v12 + 16) = priority;
  v15 = (System_Collections_Generic_IEnumerable_T__o *)((__int64 (__fastcall *)(ReactTaskTarget_o *, ServantReactTaskCreator_o *, BattleLogic_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._4_CreateReactionTasksPartial.method)(
                                                         this,
                                                         creator,
                                                         logic,
                                                         (unsigned int)priority,
                                                         this->klass->vtable._5_TargetServants.methodPtr);
  v16 = (System_Action_object__o *)sub_1BD36A4(System_Action_BattleLogicTask__TypeInfo);
  System_Action_object____ctor(
    v16,
    (Il2CppObject *)v12,
    Method_ReactTaskTarget___c__DisplayClass4_0__CreateReactionTasks_b__0__,
    0LL);
  BasicHelper__ForEach_object_(
    v15,
    (System_Action_T__o *)v16,
    (const MethodInfo_2F1E5E0 *)Method_BasicHelper_ForEach_BattleLogicTask___);
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
  __int64 v16; // x21
  __int64 v17; // x0
  __int64 v18; // x1
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  __int64 v31; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x19
  System_Func_object__bool__o *v33; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x19
  System_Func_object__object__o *v35; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x0

  if ( (byte_4B39EA4 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Linq_Enumerable_Select_BattleServantData__BattleLogicTask___, creator);
    sub_1BD3458(&Method_System_Linq_Enumerable_ToArray_BattleLogicTask___, v9);
    sub_1BD3458(&Method_System_Linq_Enumerable_Where_BattleServantData___, v10);
    sub_1BD3458(&System_Func_BattleServantData__bool__TypeInfo, v11);
    sub_1BD3458(&System_Func_BattleServantData__BattleLogicTask__TypeInfo, v12);
    sub_1BD3458(&Method_ReactTaskTarget___c__DisplayClass5_0__CreateReactionTasksPartial_b__0__, v13);
    sub_1BD3458(&Method_ReactTaskTarget___c__DisplayClass5_0__CreateReactionTasksPartial_b__1__, v14);
    sub_1BD3458(&ReactTaskTarget___c__DisplayClass5_0_TypeInfo, v15);
    byte_4B39EA4 = 1;
  }
  v16 = sub_1BD36A4(ReactTaskTarget___c__DisplayClass5_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v16, 0LL);
  if ( !v16
    || (*(_QWORD *)(v16 + 16) = creator,
        sub_1BD33FC((PartyOrganizationUtility_o *)(v16 + 16), (int64_t)creator, v19, v20, v21, v22, v23, v24),
        *(_QWORD *)(v16 + 24) = logic,
        sub_1BD33FC((PartyOrganizationUtility_o *)(v16 + 24), (int64_t)logic, v25, v26, v27, v28, v29, v30),
        v31 = *(_QWORD *)(v16 + 24),
        *(_DWORD *)(v16 + 32) = priority,
        !v31) )
  {
    sub_1BD36B4(v17, v18);
  }
  v32 = (System_Collections_Generic_IEnumerable_TSource__o *)((__int64 (__fastcall *)(ReactTaskTarget_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._5_TargetServants.method)(
                                                               this,
                                                               *(_QWORD *)(v31 + 40),
                                                               this->klass->vtable._6_ExistPriorityUpToAny.methodPtr);
  v33 = (System_Func_object__bool__o *)sub_1BD36A4(System_Func_BattleServantData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v33,
    (Il2CppObject *)v16,
    Method_ReactTaskTarget___c__DisplayClass5_0__CreateReactionTasksPartial_b__0__,
    0LL);
  v34 = System_Linq_Enumerable__Where_object_(
          v32,
          (System_Func_TSource__bool__o *)v33,
          (const MethodInfo_2F70C40 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  v35 = (System_Func_object__object__o *)sub_1BD36A4(System_Func_BattleServantData__BattleLogicTask__TypeInfo);
  System_Func_object__object____ctor(
    v35,
    (Il2CppObject *)v16,
    Method_ReactTaskTarget___c__DisplayClass5_0__CreateReactionTasksPartial_b__1__,
    0LL);
  v36 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               v34,
                                                               (System_Func_TSource__TResult__o *)v35,
                                                               (const MethodInfo_2F62E1C *)Method_System_Linq_Enumerable_Select_BattleServantData__BattleLogicTask___);
  return (BattleLogicTask_array *)System_Linq_Enumerable__ToArray_object_(
                                    v36,
                                    (const MethodInfo_2F6ADB4 *)Method_System_Linq_Enumerable_ToArray_BattleLogicTask___);
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
  __int64 v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  __int64 v27; // x8
  System_Object_array *v28; // x19
  System_Func_object__bool__o *v29; // x20

  if ( (byte_4B39EA6 & 1) == 0 )
  {
    sub_1BD3458(&Method_BasicHelper_Any_BattleServantData____76972320, creator);
    sub_1BD3458(&System_Func_BattleServantData__bool__TypeInfo, v9);
    sub_1BD3458(&Method_ReactTaskTarget___c__DisplayClass8_0__ExistTargetPriority_b__0__, v10);
    sub_1BD3458(&ReactTaskTarget___c__DisplayClass8_0_TypeInfo, v11);
    byte_4B39EA6 = 1;
  }
  v12 = sub_1BD36A4(ReactTaskTarget___c__DisplayClass8_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12
    || (*(_QWORD *)(v12 + 16) = creator,
        sub_1BD33FC((PartyOrganizationUtility_o *)(v12 + 16), (int64_t)creator, v15, v16, v17, v18, v19, v20),
        *(_QWORD *)(v12 + 24) = logic,
        sub_1BD33FC((PartyOrganizationUtility_o *)(v12 + 24), (int64_t)logic, v21, v22, v23, v24, v25, v26),
        v27 = *(_QWORD *)(v12 + 24),
        *(_DWORD *)(v12 + 32) = priority,
        !v27) )
  {
    sub_1BD36B4(v13, v14);
  }
  v28 = (System_Object_array *)((__int64 (__fastcall *)(ReactTaskTarget_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._5_TargetServants.method)(
                                 this,
                                 *(_QWORD *)(v27 + 40),
                                 this->klass->vtable._6_ExistPriorityUpToAny.methodPtr);
  v29 = (System_Func_object__bool__o *)sub_1BD36A4(System_Func_BattleServantData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v29,
    (Il2CppObject *)v12,
    Method_ReactTaskTarget___c__DisplayClass8_0__ExistTargetPriority_b__0__,
    0LL);
  return BasicHelper__Any_object__49399452(
           v28,
           (System_Func_T__bool__o *)v29,
           (const MethodInfo_2F1C69C *)Method_BasicHelper_Any_BattleServantData____76972320);
}


BattleServantData_array *__fastcall ReactTaskTarget__TargetServants(
        ReactTaskTarget_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  if ( (byte_4B39EA5 & 1) == 0 )
  {
    sub_1BD3458(&BattleServantData___TypeInfo, data);
    byte_4B39EA5 = 1;
  }
  return (BattleServantData_array *)sub_1BD3500(BattleServantData___TypeInfo, 0LL);
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
    sub_1BD36B4(this, 0LL);
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
    sub_1BD36B4(0LL, svt);
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
    sub_1BD36B4(0LL, svt);
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
    sub_1BD36B4(0LL, svt);
  return ((__int64 (__fastcall *)(struct ServantReactTaskCreator_o *, struct BattleLogic_o *, BattleServantData_o *, _QWORD, Il2CppMethodPointer))creator->klass->vtable._7_IsCreatable.method)(
           creator,
           this->fields.logic,
           svt,
           (unsigned int)this->fields.priority,
           creator->klass->vtable._8_Create.methodPtr);
}