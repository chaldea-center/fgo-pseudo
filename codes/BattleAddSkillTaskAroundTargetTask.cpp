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
  __int64 v9; // x1
  System_Collections_Generic_List_BattleLogicTask__o *IsFirstChecked; // x0
  __int64 v11; // x1
  BattleData_o *data; // x24
  BattleAddSkillTaskAroundTargetTask_Argument_o *v13; // x23
  const MethodInfo *v14; // x4
  const MethodInfo *v15; // x4
  System_Object_array *v16; // x0
  System_Collections_Generic_List_BattleLogicTask__o *taskList; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B1F39F & 1) == 0 )
  {
    sub_1BCAFF8(&BattleAddSkillTaskAroundTargetTask_Argument_TypeInfo, logic);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v9);
    byte_4B1F39F = 1;
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
    v13 = (BattleAddSkillTaskAroundTargetTask_Argument_o *)sub_1BCB244(BattleAddSkillTaskAroundTargetTask_Argument_TypeInfo);
    BattleAddSkillTaskAroundTargetTask_Argument___ctor(v13, data, task, targetId, v14);
    if ( BattleAddSkillTaskAroundTargetTask__TryGetAddableTaskList(this, &taskList, logic, v13, v15) )
    {
      ((void (__fastcall *)(BattleAddSkillTaskAroundTargetTask_o *, System_Collections_Generic_List_BattleLogicTask__o *, BattleLogic_o *, BattleAddSkillTaskAroundTargetTask_Argument_o *, Il2CppMethodPointer))this->klass->vtable._5_PrevAddTask.method)(
        this,
        taskList,
        logic,
        v13,
        this->klass->vtable._6_GetCreateSkillTaskArray.methodPtr);
      IsFirstChecked = taskList;
      if ( taskList )
      {
        v16 = System_Collections_Generic_List_object___ToArray(
                (System_Collections_Generic_List_object__o *)taskList,
                (const MethodInfo_36BB728 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
        BattleLogic__AddTaskTargetTaskAfter_45620460(logic, task, (BattleLogicTask_array *)v16, 0LL);
        return 1;
      }
LABEL_9:
      sub_1BCB254(IsFirstChecked, v11);
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

  if ( (byte_4B1F3A3 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Array_Empty_CreateSkillTaskFromBuffAction___, method);
    byte_4B1F3A3 = 1;
  }
  v3 = Method_System_Array_Empty_CreateSkillTaskFromBuffAction___;
  v4 = *((_QWORD *)Method_System_Array_Empty_CreateSkillTaskFromBuffAction___ + 7);
  if ( !v4 )
  {
    sub_1C1B4B8(Method_System_Array_Empty_CreateSkillTaskFromBuffAction___);
    v4 = v3[7];
  }
  v5 = *(_QWORD *)(v4 + 16);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1C1B45C(inited);
  if ( !*(_DWORD *)(v5 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v5);
  v6 = *(_QWORD *)(v3[7] + 16LL);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1C1B45C(inited);
  return **(CreateSkillTaskFromBuffAction_array ***)(v6 + 184);
}


bool __fastcall BattleAddSkillTaskAroundTargetTask__IsFirstChecked(
        BattleAddSkillTaskAroundTargetTask_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  BattleAddSkillTaskAroundTargetTask_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  CGThumbnailListItem_o *p_HashAddSkillTaskCheckedTiming; // x20
  System_Collections_Generic_HashSet_T__o *klass; // x21
  struct System_Collections_Generic_HashSet_BattleAddSkillTaskAroundTargetTask_Timing__o *HashAddSkillTaskCheckedTiming; // t1
  System_Collections_Generic_HashSet_T__o *v10; // x21
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  v4 = this;
  if ( (byte_4B1F3A2 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_HashSet_BattleAddSkillTaskAroundTargetTask_Timing__Add__, task);
    sub_1BCAFF8(&Method_System_Collections_Generic_HashSet_BattleAddSkillTaskAroundTargetTask_Timing___ctor__, v5);
    this = (BattleAddSkillTaskAroundTargetTask_o *)sub_1BCAFF8(
                                                     &System_Collections_Generic_HashSet_BattleAddSkillTaskAroundTargetTask_Timing__TypeInfo,
                                                     v6);
    byte_4B1F3A2 = 1;
  }
  if ( !task )
    goto LABEL_8;
  HashAddSkillTaskCheckedTiming = task->fields.HashAddSkillTaskCheckedTiming;
  p_HashAddSkillTaskCheckedTiming = (CGThumbnailListItem_o *)&task->fields.HashAddSkillTaskCheckedTiming;
  klass = (System_Collections_Generic_HashSet_T__o *)HashAddSkillTaskCheckedTiming;
  if ( !HashAddSkillTaskCheckedTiming )
  {
    v10 = (System_Collections_Generic_HashSet_T__o *)sub_1BCB244(System_Collections_Generic_HashSet_BattleAddSkillTaskAroundTargetTask_Timing__TypeInfo);
    System_Collections_Generic_HashSet_Int32Enum____ctor(
      v10,
      (const MethodInfo_3572D9C *)Method_System_Collections_Generic_HashSet_BattleAddSkillTaskAroundTargetTask_Timing___ctor__);
    p_HashAddSkillTaskCheckedTiming->klass = (CGThumbnailListItem_c *)v10;
    sub_1BCAF9C(p_HashAddSkillTaskCheckedTiming, (int32_t)v10, v11, v12);
    klass = (System_Collections_Generic_HashSet_T__o *)p_HashAddSkillTaskCheckedTiming->klass;
  }
  this = (BattleAddSkillTaskAroundTargetTask_o *)((__int64 (__fastcall *)(BattleAddSkillTaskAroundTargetTask_o *, Il2CppMethodPointer, const MethodInfo *))v4->klass->vtable._4_get_AddTiming.method)(
                                                   v4,
                                                   v4->klass->vtable._5_PrevAddTask.methodPtr,
                                                   method);
  if ( !klass )
LABEL_8:
    sub_1BCB254(this, task);
  return System_Collections_Generic_HashSet_Int32Enum___Add(
           klass,
           (int32_t)this,
           (const MethodInfo_3573FA0 *)Method_System_Collections_Generic_HashSet_BattleAddSkillTaskAroundTargetTask_Timing__Add__);
}


void __fastcall BattleAddSkillTaskAroundTargetTask__PrevAddTask(
        BattleAddSkillTaskAroundTargetTask_o *this,
        System_Collections_Generic_List_BattleLogicTask__o *taskList,
        BattleLogic_o *logic,
        BattleAddSkillTaskAroundTargetTask_Argument_o *arg,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct BattleServantData_o *ActSvt_k__BackingField; // x8
  int32_t uniqueId; // w21
  PlayBackStepLogicTask_o *v14; // x20
  _BOOL8 v15; // x0
  __int64 v16; // x1
  Il2CppObject *current; // x8
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B1F3A1 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_BattleLogicTask__Dispose__, taskList);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_BattleLogicTask__MoveNext__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_BattleLogicTask__get_Current__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BattleLogicTask__GetEnumerator__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BattleLogicTask__Insert__, v10);
    this = (BattleAddSkillTaskAroundTargetTask_o *)sub_1BCAFF8(&PlayBackStepLogicTask_TypeInfo, v11);
    byte_4B1F3A1 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  if ( !arg
    || (ActSvt_k__BackingField = arg->fields._ActSvt_k__BackingField) == 0LL
    || (uniqueId = ActSvt_k__BackingField->fields.uniqueId,
        v14 = (PlayBackStepLogicTask_o *)sub_1BCB244(PlayBackStepLogicTask_TypeInfo),
        PlayBackStepLogicTask___ctor(v14, uniqueId, 0LL),
        !taskList) )
  {
    sub_1BCB254(this, taskList);
  }
  System_Collections_Generic_List_object___Insert(
    (System_Collections_Generic_List_object__o *)taskList,
    0,
    (Il2CppObject *)v14,
    (const MethodInfo_36BA980 *)Method_System_Collections_Generic_List_BattleLogicTask__Insert__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (System_Collections_Generic_List_object__o *)taskList,
    (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_BattleLogicTask__GetEnumerator__);
  while ( 1 )
  {
    v15 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v18,
            (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_BattleLogicTask__MoveNext__);
    if ( !v15 )
      break;
    current = v18.fields._current;
    if ( !v18.fields._current )
      sub_1BCB254(v15, v16);
    BYTE1(v18.fields._current[16].monitor) = 1;
    LOWORD(current[6].monitor) = 0;
    BYTE1(current[5].klass) = 1;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v18,
    (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_BattleLogicTask__Dispose__);
}


bool __fastcall BattleAddSkillTaskAroundTargetTask__TryGetAddableTaskList(
        BattleAddSkillTaskAroundTargetTask_o *this,
        System_Collections_Generic_List_BattleLogicTask__o **taskList,
        BattleLogic_o *logic,
        BattleAddSkillTaskAroundTargetTask_Argument_o *arg,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x23
  __int64 v14; // x0
  __int64 v15; // x1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x20
  System_Func_object__object__o *v21; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0
  System_Collections_Generic_List_BattleLogicTask__o *v23; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3

  if ( (byte_4B1F3A0 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Linq_Enumerable_SelectMany_CreateSkillTaskFromBuffAction__BattleLogicTask___, taskList);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_ToList_BattleLogicTask___, v9);
    sub_1BCAFF8(&System_Func_CreateSkillTaskFromBuffAction__IEnumerable_BattleLogicTask___TypeInfo, v10);
    sub_1BCAFF8(&Method_BattleAddSkillTaskAroundTargetTask___c__DisplayClass5_0__TryGetAddableTaskList_b__0__, v11);
    sub_1BCAFF8(&BattleAddSkillTaskAroundTargetTask___c__DisplayClass5_0_TypeInfo, v12);
    byte_4B1F3A0 = 1;
  }
  v13 = sub_1BCB244(BattleAddSkillTaskAroundTargetTask___c__DisplayClass5_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    sub_1BCB254(v14, v15);
  *(_QWORD *)(v13 + 16) = logic;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v13 + 16), (int32_t)logic, v16, v17);
  *(_QWORD *)(v13 + 24) = arg;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v13 + 24), (int32_t)arg, v18, v19);
  v20 = (System_Collections_Generic_IEnumerable_TSource__o *)((__int64 (__fastcall *)(BattleAddSkillTaskAroundTargetTask_o *, void *))this->klass->vtable._6_GetCreateSkillTaskArray.method)(
                                                               this,
                                                               this->klass[1]._1.image);
  v21 = (System_Func_object__object__o *)sub_1BCB244(System_Func_CreateSkillTaskFromBuffAction__IEnumerable_BattleLogicTask___TypeInfo);
  System_Func_object__object____ctor(
    v21,
    (Il2CppObject *)v13,
    Method_BattleAddSkillTaskAroundTargetTask___c__DisplayClass5_0__TryGetAddableTaskList_b__0__,
    0LL);
  v22 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__object_(
                                                               v20,
                                                               (System_Func_TSource__IEnumerable_TResult___o *)v21,
                                                               (const MethodInfo_30514E0 *)Method_System_Linq_Enumerable_SelectMany_CreateSkillTaskFromBuffAction__BattleLogicTask___);
  v23 = (System_Collections_Generic_List_BattleLogicTask__o *)System_Linq_Enumerable__ToList_object_(
                                                                v22,
                                                                (const MethodInfo_305BB58 *)Method_System_Linq_Enumerable_ToList_BattleLogicTask___);
  *taskList = v23;
  sub_1BCAF9C((CGThumbnailListItem_o *)taskList, (int32_t)v23, v24, v25);
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
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  __int64 ActorId; // x0
  __int64 v12; // x1
  struct BattleServantData_o *ServantData; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct BattleServantData_o *v16; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct BattleCommandData_o *command; // x1
  int32_t v20; // w2
  const MethodInfo *v21; // x3

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._Task_k__BackingField = task;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields, (int32_t)task, v9, v10);
  if ( !task || (ActorId = BattleLogicTask__getActorId(task, 0LL), !data) )
    sub_1BCB254(ActorId, v12);
  ServantData = BattleData__getServantData(data, ActorId, 0LL);
  this->fields._ActSvt_k__BackingField = ServantData;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields._ActSvt_k__BackingField, (int32_t)ServantData, v14, v15);
  v16 = BattleData__getServantData(data, targetId, 0LL);
  this->fields._TargetSvt_k__BackingField = v16;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields._TargetSvt_k__BackingField, (int32_t)v16, v17, v18);
  command = task->fields.command;
  this->fields._Command_k__BackingField = command;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields._Command_k__BackingField, (int32_t)command, v20, v21);
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
    sub_1BCB254(this, method);
  return ActSvt_k__BackingField->fields.isEnemy;
}


bool __fastcall BattleAddSkillTaskAroundTargetTask_Argument__get_IsAiNpc(
        BattleAddSkillTaskAroundTargetTask_Argument_o *this,
        const MethodInfo *method)
{
  struct BattleServantData_o *ActSvt_k__BackingField; // x0

  ActSvt_k__BackingField = this->fields._ActSvt_k__BackingField;
  if ( !ActSvt_k__BackingField )
    sub_1BCB254(0LL, method);
  return ((__int64 (__fastcall *)(struct BattleServantData_o *, Il2CppMethodPointer))ActSvt_k__BackingField->klass->vtable._15_get_IsAiNpc.method)(
           ActSvt_k__BackingField,
           ActSvt_k__BackingField->klass->vtable._16_getSaveData.methodPtr);
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
    sub_1BCB254(this, 0LL);
  return (System_Collections_Generic_IEnumerable_BattleLogicTask__o *)CreateSkillTaskFromBuffAction__CreateTaskArray(
                                                                        creator,
                                                                        this->fields.logic,
                                                                        this->fields.arg,
                                                                        v3);
}