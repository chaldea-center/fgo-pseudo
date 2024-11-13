void __fastcall ReactTaskTarget___ctor(
        ReactTaskTarget_o *this,
        ReactTaskTargetFilter_o *filter,
        const MethodInfo *method)
{
  Il2CppObject *v3; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  int64_t v7; // x2
  __int64 v8; // x3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  v3 = (Il2CppObject *)filter;
  if ( (byte_4B18EC6 & 1) == 0 )
  {
    sub_1BCA7E0(&ReactTaskTargetFilter_TypeInfo, filter, method);
    byte_4B18EC6 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !v3 )
  {
    v3 = (Il2CppObject *)sub_1BCAA2C(ReactTaskTargetFilter_TypeInfo, v6, v7, v8);
    System_Object___ctor(v3, 0LL);
  }
  if ( !this )
    sub_1BCAA3C(v5, v6);
  this->fields._Filter_k__BackingField = (struct ReactTaskTargetFilter_o *)v3;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)v3, v7, v8, v9, v10, v11, v12);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x23
  __int64 v16; // x0
  __int64 v17; // x1
  System_Collections_Generic_IEnumerable_T__o *v18; // x19
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  System_Action_object__o *v22; // x20

  if ( (byte_4B18EC7 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_BattleLogicTask__TypeInfo, creator, logic);
    sub_1BCA7E0(&Method_BasicHelper_ForEach_BattleLogicTask___, v9, v10);
    sub_1BCA7E0(&Method_ReactTaskTarget___c__DisplayClass4_0__CreateReactionTasks_b__0__, v11, v12);
    sub_1BCA7E0(&ReactTaskTarget___c__DisplayClass4_0_TypeInfo, v13, v14);
    byte_4B18EC7 = 1;
  }
  v15 = sub_1BCAA2C(ReactTaskTarget___c__DisplayClass4_0_TypeInfo, creator, logic, *(_QWORD *)&priority);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !v15 )
    sub_1BCAA3C(v16, v17);
  *(_DWORD *)(v15 + 16) = priority;
  v18 = (System_Collections_Generic_IEnumerable_T__o *)((__int64 (__fastcall *)(ReactTaskTarget_o *, ServantReactTaskCreator_o *, BattleLogic_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._4_CreateReactionTasksPartial.method)(
                                                         this,
                                                         creator,
                                                         logic,
                                                         (unsigned int)priority,
                                                         this->klass->vtable._5_TargetServants.methodPtr);
  v22 = (System_Action_object__o *)sub_1BCAA2C(System_Action_BattleLogicTask__TypeInfo, v19, v20, v21);
  System_Action_object____ctor(
    v22,
    (Il2CppObject *)v15,
    Method_ReactTaskTarget___c__DisplayClass4_0__CreateReactionTasks_b__0__,
    0LL);
  BasicHelper__ForEach_object_(
    v18,
    (System_Action_T__o *)v22,
    (const MethodInfo_2EFFC84 *)Method_BasicHelper_ForEach_BattleLogicTask___);
  return (BattleLogicTask_array *)v18;
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x21
  __int64 v24; // x0
  __int64 v25; // x1
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  __int64 v38; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x19
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  System_Func_object__bool__o *v43; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v44; // x19
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x3
  System_Func_object__object__o *v48; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v49; // x0

  if ( (byte_4B18EC8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_BattleServantData__BattleLogicTask___, creator, logic);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_BattleLogicTask___, v9, v10);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_BattleServantData___, v11, v12);
    sub_1BCA7E0(&System_Func_BattleServantData__bool__TypeInfo, v13, v14);
    sub_1BCA7E0(&System_Func_BattleServantData__BattleLogicTask__TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_ReactTaskTarget___c__DisplayClass5_0__CreateReactionTasksPartial_b__0__, v17, v18);
    sub_1BCA7E0(&Method_ReactTaskTarget___c__DisplayClass5_0__CreateReactionTasksPartial_b__1__, v19, v20);
    sub_1BCA7E0(&ReactTaskTarget___c__DisplayClass5_0_TypeInfo, v21, v22);
    byte_4B18EC8 = 1;
  }
  v23 = sub_1BCAA2C(ReactTaskTarget___c__DisplayClass5_0_TypeInfo, creator, logic, *(_QWORD *)&priority);
  System_Object___ctor((Il2CppObject *)v23, 0LL);
  if ( !v23
    || (*(_QWORD *)(v23 + 16) = creator,
        sub_1BCA784((PartyOrganizationUtility_o *)(v23 + 16), (int64_t)creator, v26, v27, v28, v29, v30, v31),
        *(_QWORD *)(v23 + 24) = logic,
        sub_1BCA784((PartyOrganizationUtility_o *)(v23 + 24), (int64_t)logic, v32, v33, v34, v35, v36, v37),
        v38 = *(_QWORD *)(v23 + 24),
        *(_DWORD *)(v23 + 32) = priority,
        !v38) )
  {
    sub_1BCAA3C(v24, v25);
  }
  v39 = (System_Collections_Generic_IEnumerable_TSource__o *)((__int64 (__fastcall *)(ReactTaskTarget_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._5_TargetServants.method)(
                                                               this,
                                                               *(_QWORD *)(v38 + 40),
                                                               this->klass->vtable._6_ExistPriorityUpToAny.methodPtr);
  v43 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_BattleServantData__bool__TypeInfo, v40, v41, v42);
  System_Func_object__bool____ctor(
    v43,
    (Il2CppObject *)v23,
    Method_ReactTaskTarget___c__DisplayClass5_0__CreateReactionTasksPartial_b__0__,
    0LL);
  v44 = System_Linq_Enumerable__Where_object_(
          v39,
          (System_Func_TSource__bool__o *)v43,
          (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  v48 = (System_Func_object__object__o *)sub_1BCAA2C(
                                           System_Func_BattleServantData__BattleLogicTask__TypeInfo,
                                           v45,
                                           v46,
                                           v47);
  System_Func_object__object____ctor(
    v48,
    (Il2CppObject *)v23,
    Method_ReactTaskTarget___c__DisplayClass5_0__CreateReactionTasksPartial_b__1__,
    0LL);
  v49 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               v44,
                                                               (System_Func_TSource__TResult__o *)v48,
                                                               (const MethodInfo_2F43A70 *)Method_System_Linq_Enumerable_Select_BattleServantData__BattleLogicTask___);
  return (BattleLogicTask_array *)System_Linq_Enumerable__ToArray_object_(
                                    v49,
                                    (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_BattleLogicTask___);
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


// local variable allocation has failed, the output may be wrong!
bool __fastcall ReactTaskTarget__ExistTargetPriority(
        ReactTaskTarget_o *this,
        ServantReactTaskCreator_o *creator,
        BattleLogic_o *logic,
        int32_t priority,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x22
  __int64 v16; // x0
  __int64 v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  __int64 v30; // x8
  System_Object_array *v31; // x19
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  System_Func_object__bool__o *v35; // x20

  if ( (byte_4B18ECA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_BattleServantData____76840008, creator, logic);
    sub_1BCA7E0(&System_Func_BattleServantData__bool__TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_ReactTaskTarget___c__DisplayClass8_0__ExistTargetPriority_b__0__, v11, v12);
    sub_1BCA7E0(&ReactTaskTarget___c__DisplayClass8_0_TypeInfo, v13, v14);
    byte_4B18ECA = 1;
  }
  v15 = sub_1BCAA2C(ReactTaskTarget___c__DisplayClass8_0_TypeInfo, creator, logic, *(_QWORD *)&priority);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !v15
    || (*(_QWORD *)(v15 + 16) = creator,
        sub_1BCA784((PartyOrganizationUtility_o *)(v15 + 16), (int64_t)creator, v18, v19, v20, v21, v22, v23),
        *(_QWORD *)(v15 + 24) = logic,
        sub_1BCA784((PartyOrganizationUtility_o *)(v15 + 24), (int64_t)logic, v24, v25, v26, v27, v28, v29),
        v30 = *(_QWORD *)(v15 + 24),
        *(_DWORD *)(v15 + 32) = priority,
        !v30) )
  {
    sub_1BCAA3C(v16, v17);
  }
  v31 = (System_Object_array *)((__int64 (__fastcall *)(ReactTaskTarget_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._5_TargetServants.method)(
                                 this,
                                 *(_QWORD *)(v30 + 40),
                                 this->klass->vtable._6_ExistPriorityUpToAny.methodPtr);
  v35 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_BattleServantData__bool__TypeInfo, v32, v33, v34);
  System_Func_object__bool____ctor(
    v35,
    (Il2CppObject *)v15,
    Method_ReactTaskTarget___c__DisplayClass8_0__ExistTargetPriority_b__0__,
    0LL);
  return BasicHelper__Any_object__49274176(
           v31,
           (System_Func_T__bool__o *)v35,
           (const MethodInfo_2EFDD40 *)Method_BasicHelper_Any_BattleServantData____76840008);
}


BattleServantData_array *__fastcall ReactTaskTarget__TargetServants(
        ReactTaskTarget_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  if ( (byte_4B18EC9 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleServantData___TypeInfo, data, method);
    byte_4B18EC9 = 1;
  }
  return (BattleServantData_array *)sub_1BCA888(BattleServantData___TypeInfo, 0LL);
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
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(0LL, svt);
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
    sub_1BCAA3C(0LL, svt);
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
    sub_1BCAA3C(0LL, svt);
  return ((__int64 (__fastcall *)(struct ServantReactTaskCreator_o *, struct BattleLogic_o *, BattleServantData_o *, _QWORD, Il2CppMethodPointer))creator->klass->vtable._7_IsCreatable.method)(
           creator,
           this->fields.logic,
           svt,
           (unsigned int)this->fields.priority,
           creator->klass->vtable._8_Create.methodPtr);
}