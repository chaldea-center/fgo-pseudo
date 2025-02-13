void __fastcall BattleAddSkillTaskAroundTargetTask___ctor(
        BattleAddSkillTaskAroundTargetTask_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleAddSkillTaskAroundTargetTask__AddTask(
        BattleAddSkillTaskAroundTargetTask_o *this,
        BattleLogic_o *logic,
        BattleLogicTask_o *task,
        int32_t targetId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_BattleLogicTask__o *IsFirstChecked; // x0
  __int64 v10; // x1
  BattleData_o *data; // x24
  BattleAddSkillTaskAroundTargetTask_Argument_o *v12; // x23
  const MethodInfo *v13; // x4
  const MethodInfo *v14; // x4
  System_Object_array *v15; // x0
  System_Collections_Generic_List_BattleLogicTask__o *taskList; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4BDF168 & 1) == 0 )
  {
    sub_1C21E38(&BattleAddSkillTaskAroundTargetTask_Argument_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    byte_4BDF168 = 1;
  }
  taskList = 0LL;
  IsFirstChecked = (System_Collections_Generic_List_BattleLogicTask__o *)BattleAddSkillTaskAroundTargetTask__IsFirstChecked(
                                                                           this,
                                                                           task,
                                                                           (const MethodInfo *)task);
  if ( ((unsigned __int8)IsFirstChecked & 1) != 0 )
  {
    if ( !logic )
      goto LABEL_9;
    data = logic->fields.data;
    v12 = (BattleAddSkillTaskAroundTargetTask_Argument_o *)sub_1C22084(BattleAddSkillTaskAroundTargetTask_Argument_TypeInfo);
    BattleAddSkillTaskAroundTargetTask_Argument___ctor(v12, data, task, targetId, v13);
    if ( BattleAddSkillTaskAroundTargetTask__TryGetAddableTaskList(this, &taskList, logic, v12, v14) )
    {
      ((void (__fastcall *)(BattleAddSkillTaskAroundTargetTask_o *, System_Collections_Generic_List_BattleLogicTask__o *, BattleLogic_o *, BattleAddSkillTaskAroundTargetTask_Argument_o *, Il2CppMethodPointer))this->klass->vtable._5_PrevAddTask.method)(
        this,
        taskList,
        logic,
        v12,
        this->klass->vtable._6_GetCreateSkillTaskArray.methodPtr);
      IsFirstChecked = taskList;
      if ( taskList )
      {
        v15 = System_Collections_Generic_List_object___ToArray(
                (System_Collections_Generic_List_object__o *)taskList,
                (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
        BattleLogic__AddTaskTargetTaskAfter_44633232(logic, task, (BattleLogicTask_array *)v15, 0LL);
        return 1;
      }
LABEL_9:
      sub_1C22094(IsFirstChecked, v10);
    }
  }
  return 0;
}


CreateSkillTaskFromBuffAction_array *__fastcall BattleAddSkillTaskAroundTargetTask__GetCreateSkillTaskArray(
        BattleAddSkillTaskAroundTargetTask_o *this,
        const MethodInfo *method)
{
  long double inited; // q0
  _QWORD *v3; // x19
  __int64 v4; // x8
  __int64 v5; // x0
  __int64 v6; // x0

  if ( (byte_4BDF16C & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Array_Empty_CreateSkillTaskFromBuffAction___);
    byte_4BDF16C = 1;
  }
  v3 = Method_System_Array_Empty_CreateSkillTaskFromBuffAction___;
  v4 = *((_QWORD *)Method_System_Array_Empty_CreateSkillTaskFromBuffAction___ + 7);
  if ( !v4 )
  {
    sub_1C73D70(Method_System_Array_Empty_CreateSkillTaskFromBuffAction___);
    v4 = v3[7];
  }
  v5 = *(_QWORD *)(v4 + 16);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1C73D14(inited);
  if ( !*(_DWORD *)(v5 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v5);
  v6 = *(_QWORD *)(v3[7] + 16LL);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1C73D14(inited);
  return **(CreateSkillTaskFromBuffAction_array ***)(v6 + 184);
}


bool __fastcall BattleAddSkillTaskAroundTargetTask__IsFirstChecked(
        BattleAddSkillTaskAroundTargetTask_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  BattleAddSkillTaskAroundTargetTask_o *v4; // x19
  PartyOrganizationUtility_o *p_HashAddSkillTaskCheckedTiming; // x20
  System_Collections_Generic_HashSet_T__o *klass; // x21
  struct System_Collections_Generic_HashSet_BattleAddSkillTaskAroundTargetTask_Timing__o *HashAddSkillTaskCheckedTiming; // t1
  System_Collections_Generic_HashSet_T__o *v8; // x21
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  v4 = this;
  if ( (byte_4BDF16B & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_BattleAddSkillTaskAroundTargetTask_Timing__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_BattleAddSkillTaskAroundTargetTask_Timing___ctor__);
    this = (BattleAddSkillTaskAroundTargetTask_o *)sub_1C21E38(&System_Collections_Generic_HashSet_BattleAddSkillTaskAroundTargetTask_Timing__TypeInfo);
    byte_4BDF16B = 1;
  }
  if ( !task )
    goto LABEL_8;
  HashAddSkillTaskCheckedTiming = task->fields.HashAddSkillTaskCheckedTiming;
  p_HashAddSkillTaskCheckedTiming = (PartyOrganizationUtility_o *)&task->fields.HashAddSkillTaskCheckedTiming;
  klass = (System_Collections_Generic_HashSet_T__o *)HashAddSkillTaskCheckedTiming;
  if ( !HashAddSkillTaskCheckedTiming )
  {
    v8 = (System_Collections_Generic_HashSet_T__o *)sub_1C22084(System_Collections_Generic_HashSet_BattleAddSkillTaskAroundTargetTask_Timing__TypeInfo);
    System_Collections_Generic_HashSet_Int32Enum____ctor(
      v8,
      (const MethodInfo_3504904 *)Method_System_Collections_Generic_HashSet_BattleAddSkillTaskAroundTargetTask_Timing___ctor__);
    p_HashAddSkillTaskCheckedTiming->klass = (PartyOrganizationUtility_c *)v8;
    sub_1C21DDC(p_HashAddSkillTaskCheckedTiming, (int64_t)v8, v9, v10, v11, v12, v13, v14);
    klass = (System_Collections_Generic_HashSet_T__o *)p_HashAddSkillTaskCheckedTiming->klass;
  }
  this = (BattleAddSkillTaskAroundTargetTask_o *)((__int64 (__fastcall *)(BattleAddSkillTaskAroundTargetTask_o *, Il2CppMethodPointer, const MethodInfo *))v4->klass->vtable._4_get_AddTiming.method)(
                                                   v4,
                                                   v4->klass->vtable._5_PrevAddTask.methodPtr,
                                                   method);
  if ( !klass )
LABEL_8:
    sub_1C22094(this, task);
  return System_Collections_Generic_HashSet_Int32Enum___Add(
           klass,
           (int32_t)this,
           (const MethodInfo_3505B08 *)Method_System_Collections_Generic_HashSet_BattleAddSkillTaskAroundTargetTask_Timing__Add__);
}


void __fastcall BattleAddSkillTaskAroundTargetTask__PrevAddTask(
        BattleAddSkillTaskAroundTargetTask_o *this,
        System_Collections_Generic_List_BattleLogicTask__o *taskList,
        BattleLogic_o *logic,
        BattleAddSkillTaskAroundTargetTask_Argument_o *arg,
        const MethodInfo *method)
{
  struct BattleServantData_o *ActSvt_k__BackingField; // x8
  int32_t uniqueId; // w21
  PlayBackStepLogicTask_o *v9; // x20
  _BOOL8 v10; // x0
  __int64 v11; // x1
  Il2CppObject *current; // x8
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4BDF16A & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_BattleLogicTask__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_BattleLogicTask__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_BattleLogicTask__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask__Insert__);
    this = (BattleAddSkillTaskAroundTargetTask_o *)sub_1C21E38(&PlayBackStepLogicTask_TypeInfo);
    byte_4BDF16A = 1;
  }
  memset(&v13, 0, sizeof(v13));
  if ( !arg
    || (ActSvt_k__BackingField = arg->fields._ActSvt_k__BackingField) == 0LL
    || (uniqueId = ActSvt_k__BackingField->fields.uniqueId,
        v9 = (PlayBackStepLogicTask_o *)sub_1C22084(PlayBackStepLogicTask_TypeInfo),
        PlayBackStepLogicTask___ctor(v9, uniqueId, 0LL),
        !taskList) )
  {
    sub_1C22094(this, taskList);
  }
  System_Collections_Generic_List_object___Insert(
    (System_Collections_Generic_List_object__o *)taskList,
    0,
    (Il2CppObject *)v9,
    (const MethodInfo_364FE64 *)Method_System_Collections_Generic_List_BattleLogicTask__Insert__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    (System_Collections_Generic_List_object__o *)taskList,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_BattleLogicTask__GetEnumerator__);
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v13,
            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_BattleLogicTask__MoveNext__);
    if ( !v10 )
      break;
    current = v13.fields._current;
    if ( !v13.fields._current )
      sub_1C22094(v10, v11);
    BYTE4(v13.fields._current[14].klass) = 1;
    LOWORD(current[6].monitor) = 0;
    BYTE1(current[5].klass) = 1;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v13,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_BattleLogicTask__Dispose__);
}


bool __fastcall BattleAddSkillTaskAroundTargetTask__TryGetAddableTaskList(
        BattleAddSkillTaskAroundTargetTask_o *this,
        System_Collections_Generic_List_BattleLogicTask__o **taskList,
        BattleLogic_o *logic,
        BattleAddSkillTaskAroundTargetTask_Argument_o *arg,
        const MethodInfo *method)
{
  __int64 v9; // x23
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
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x20
  System_Func_object__object__o *v25; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0
  System_Collections_Generic_List_BattleLogicTask__o *v27; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7

  if ( (byte_4BDF169 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_SelectMany_CreateSkillTaskFromBuffAction__BattleLogicTask___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToList_BattleLogicTask___);
    sub_1C21E38(&System_Func_CreateSkillTaskFromBuffAction__IEnumerable_BattleLogicTask___TypeInfo);
    sub_1C21E38(&Method_BattleAddSkillTaskAroundTargetTask___c__DisplayClass5_0__TryGetAddableTaskList_b__0__);
    sub_1C21E38(&BattleAddSkillTaskAroundTargetTask___c__DisplayClass5_0_TypeInfo);
    byte_4BDF169 = 1;
  }
  v9 = sub_1C22084(BattleAddSkillTaskAroundTargetTask___c__DisplayClass5_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    sub_1C22094(v10, v11);
  *(_QWORD *)(v9 + 16) = logic;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v9 + 16), (int64_t)logic, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 24) = arg;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v9 + 24), (int64_t)arg, v18, v19, v20, v21, v22, v23);
  v24 = (System_Collections_Generic_IEnumerable_TSource__o *)((__int64 (__fastcall *)(BattleAddSkillTaskAroundTargetTask_o *, void *))this->klass->vtable._6_GetCreateSkillTaskArray.method)(
                                                               this,
                                                               this->klass[1]._1.image);
  v25 = (System_Func_object__object__o *)sub_1C22084(System_Func_CreateSkillTaskFromBuffAction__IEnumerable_BattleLogicTask___TypeInfo);
  System_Func_object__object____ctor(
    v25,
    (Il2CppObject *)v9,
    Method_BattleAddSkillTaskAroundTargetTask___c__DisplayClass5_0__TryGetAddableTaskList_b__0__,
    0LL);
  v26 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__object_(
                                                               v24,
                                                               (System_Func_TSource__IEnumerable_TResult___o *)v25,
                                                               (const MethodInfo_2FE3B3C *)Method_System_Linq_Enumerable_SelectMany_CreateSkillTaskFromBuffAction__BattleLogicTask___);
  v27 = (System_Collections_Generic_List_BattleLogicTask__o *)System_Linq_Enumerable__ToList_object_(
                                                                v26,
                                                                (const MethodInfo_2FED5C8 *)Method_System_Linq_Enumerable_ToList_BattleLogicTask___);
  *taskList = v27;
  sub_1C21DDC((PartyOrganizationUtility_o *)taskList, (int64_t)v27, v28, v29, v30, v31, v32, v33);
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)*taskList, 0LL);
}


int32_t __fastcall BattleAddSkillTaskAroundTargetTask__get_AddTiming(
        BattleAddSkillTaskAroundTargetTask_o *this,
        const MethodInfo *method)
{
  return 0;
}


void __fastcall BattleAddSkillTaskAroundTargetTask_Argument___ctor(
        BattleAddSkillTaskAroundTargetTask_Argument_o *this,
        BattleData_o *data,
        BattleLogicTask_o *task,
        int32_t targetId,
        const MethodInfo *method)
{
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  __int64 ActorId; // x0
  __int64 v16; // x1
  struct BattleServantData_o *ServantData; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  struct BattleServantData_o *v24; // x0
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  struct BattleCommandData_o *command; // x1
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._Task_k__BackingField = task;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields, (int64_t)task, v9, v10, v11, v12, v13, v14);
  if ( !task || (ActorId = BattleLogicTask__getActorId(task, 0LL), !data) )
    sub_1C22094(ActorId, v16);
  ServantData = BattleData__getServantData(data, ActorId, 0LL);
  this->fields._ActSvt_k__BackingField = ServantData;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._ActSvt_k__BackingField,
    (int64_t)ServantData,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = BattleData__getServantData(data, targetId, 0LL);
  this->fields._TargetSvt_k__BackingField = v24;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._TargetSvt_k__BackingField,
    (int64_t)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  command = task->fields.command;
  this->fields._Command_k__BackingField = command;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._Command_k__BackingField,
    (int64_t)command,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
}


BattleServantData_o *__fastcall BattleAddSkillTaskAroundTargetTask_Argument__get_ActSvt(
        BattleAddSkillTaskAroundTargetTask_Argument_o *this,
        const MethodInfo *method)
{
  return this->fields._ActSvt_k__BackingField;
}


BattleCommandData_o *__fastcall BattleAddSkillTaskAroundTargetTask_Argument__get_Command(
        BattleAddSkillTaskAroundTargetTask_Argument_o *this,
        const MethodInfo *method)
{
  return this->fields._Command_k__BackingField;
}


bool __fastcall BattleAddSkillTaskAroundTargetTask_Argument__get_IsActorEnemy(
        BattleAddSkillTaskAroundTargetTask_Argument_o *this,
        const MethodInfo *method)
{
  struct BattleServantData_o *ActSvt_k__BackingField; // x8

  ActSvt_k__BackingField = this->fields._ActSvt_k__BackingField;
  if ( !ActSvt_k__BackingField )
    sub_1C22094(this, method);
  return ActSvt_k__BackingField->fields.isEnemy;
}


BattleServantData_o *__fastcall BattleAddSkillTaskAroundTargetTask_Argument__get_TargetSvt(
        BattleAddSkillTaskAroundTargetTask_Argument_o *this,
        const MethodInfo *method)
{
  return this->fields._TargetSvt_k__BackingField;
}


BattleLogicTask_o *__fastcall BattleAddSkillTaskAroundTargetTask_Argument__get_Task(
        BattleAddSkillTaskAroundTargetTask_Argument_o *this,
        const MethodInfo *method)
{
  return this->fields._Task_k__BackingField;
}


void __fastcall BattleAddSkillTaskAroundTargetTask___c__DisplayClass5_0___ctor(
        BattleAddSkillTaskAroundTargetTask___c__DisplayClass5_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Collections_Generic_IEnumerable_BattleLogicTask__o *__fastcall BattleAddSkillTaskAroundTargetTask___c__DisplayClass5_0___TryGetAddableTaskList_b__0(
        BattleAddSkillTaskAroundTargetTask___c__DisplayClass5_0_o *this,
        CreateSkillTaskFromBuffAction_o *creator,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( !creator )
    sub_1C22094(this, 0LL);
  return (System_Collections_Generic_IEnumerable_BattleLogicTask__o *)CreateSkillTaskFromBuffAction__CreateTaskArray(
                                                                        creator,
                                                                        this->fields.logic,
                                                                        this->fields.arg,
                                                                        v3);
}