void BattleAddSkillTaskAroundTargetTask___ctor(BattleAddSkillTaskAroundTargetTask_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleAddSkillTaskAroundTargetTask__AddTask(
        BattleAddSkillTaskAroundTargetTask_o *this,
        BattleLogic_o *logic,
        BattleLogicTask_o *task,
        int32_t targetId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_BattleLogicTask__o *IsFirstChecked; // x0
  BattleData_o *data; // x24
  BattleAddSkillTaskAroundTargetTask_Argument_o *v11; // x23
  const MethodInfo *v12; // x4
  const MethodInfo *v13; // x4
  System_Object_array *v14; // x0
  System_Collections_Generic_List_BattleLogicTask__o *taskList; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C45F5A & 1) == 0 )
  {
    sub_1C37058(&BattleAddSkillTaskAroundTargetTask_Argument_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    byte_4C45F5A = 1;
  }
  taskList = 0;
  IsFirstChecked = (System_Collections_Generic_List_BattleLogicTask__o *)BattleAddSkillTaskAroundTargetTask__IsFirstChecked(
                                                                           this,
                                                                           task,
                                                                           (const MethodInfo *)task);
  if ( ((unsigned __int8)IsFirstChecked & 1) != 0 )
  {
    if ( !logic )
      goto LABEL_9;
    data = logic->fields.data;
    v11 = (BattleAddSkillTaskAroundTargetTask_Argument_o *)sub_1C372A4(BattleAddSkillTaskAroundTargetTask_Argument_TypeInfo);
    BattleAddSkillTaskAroundTargetTask_Argument___ctor(v11, data, task, targetId, v12);
    if ( BattleAddSkillTaskAroundTargetTask__TryGetAddableTaskList(this, &taskList, logic, v11, v13) )
    {
      ((void (__fastcall *)(BattleAddSkillTaskAroundTargetTask_o *, System_Collections_Generic_List_BattleLogicTask__o *, BattleLogic_o *, BattleAddSkillTaskAroundTargetTask_Argument_o *, const MethodInfo *))this->klass->vtable._5_PrevAddTask.methodPtr)(
        this,
        taskList,
        logic,
        v11,
        this->klass->vtable._5_PrevAddTask.method);
      IsFirstChecked = taskList;
      if ( taskList )
      {
        v14 = System_Collections_Generic_List_object___ToArray(
                (System_Collections_Generic_List_object__o *)taskList,
                (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
        BattleLogic__AddTaskTargetTaskAfter_46574996(logic, task, (BattleLogicTask_array *)v14, 0);
        return 1;
      }
LABEL_9:
      sub_1C372B4(IsFirstChecked);
    }
  }
  return 0;
}


CreateSkillTaskFromBuffAction_array *BattleAddSkillTaskAroundTargetTask__GetCreateSkillTaskArray(
        BattleAddSkillTaskAroundTargetTask_o *this,
        const MethodInfo *method)
{
  long double inited; // q0
  _QWORD *v3; // x19
  __int64 v4; // x8
  __int64 v5; // x0
  __int64 v6; // x0

  if ( (byte_4C45F5E & 1) == 0 )
  {
    sub_1C37058(&Method_System_Array_Empty_CreateSkillTaskFromBuffAction___);
    byte_4C45F5E = 1;
  }
  v3 = Method_System_Array_Empty_CreateSkillTaskFromBuffAction___;
  v4 = *((_QWORD *)Method_System_Array_Empty_CreateSkillTaskFromBuffAction___ + 7);
  if ( !v4 )
  {
    sub_1C877C8(Method_System_Array_Empty_CreateSkillTaskFromBuffAction___);
    v4 = v3[7];
  }
  v5 = *(_QWORD *)(v4 + 16);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1C8776C(inited);
  if ( !*(_DWORD *)(v5 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v5);
  v6 = *(_QWORD *)(v3[7] + 16LL);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1C8776C(inited);
  return **(CreateSkillTaskFromBuffAction_array ***)(v6 + 184);
}


bool BattleAddSkillTaskAroundTargetTask__IsFirstChecked(
        BattleAddSkillTaskAroundTargetTask_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  BattleAddSkillTaskAroundTargetTask_o *v4; // x19
  CGThumbnailListItem_o *p_HashAddSkillTaskCheckedTiming; // x20
  System_Collections_Generic_HashSet_T__o *klass; // x21
  struct System_Collections_Generic_HashSet_BattleAddSkillTaskAroundTargetTask_Timing__o *HashAddSkillTaskCheckedTiming; // t1
  System_Collections_Generic_HashSet_T__o *v8; // x21
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  v4 = this;
  if ( (byte_4C45F5D & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_HashSet_BattleAddSkillTaskAroundTargetTask_Timing__Add__);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_BattleAddSkillTaskAroundTargetTask_Timing___ctor__);
    this = (BattleAddSkillTaskAroundTargetTask_o *)sub_1C37058(&System_Collections_Generic_HashSet_BattleAddSkillTaskAroundTargetTask_Timing__TypeInfo);
    byte_4C45F5D = 1;
  }
  if ( !task )
    goto LABEL_8;
  HashAddSkillTaskCheckedTiming = task->fields.HashAddSkillTaskCheckedTiming;
  p_HashAddSkillTaskCheckedTiming = (CGThumbnailListItem_o *)&task->fields.HashAddSkillTaskCheckedTiming;
  klass = (System_Collections_Generic_HashSet_T__o *)HashAddSkillTaskCheckedTiming;
  if ( !HashAddSkillTaskCheckedTiming )
  {
    v8 = (System_Collections_Generic_HashSet_T__o *)sub_1C372A4(System_Collections_Generic_HashSet_BattleAddSkillTaskAroundTargetTask_Timing__TypeInfo);
    System_Collections_Generic_HashSet_Int32Enum____ctor(
      v8,
      (const MethodInfo_3655C0C *)Method_System_Collections_Generic_HashSet_BattleAddSkillTaskAroundTargetTask_Timing___ctor__);
    p_HashAddSkillTaskCheckedTiming->klass = (CGThumbnailListItem_c *)v8;
    sub_1C36FFC(p_HashAddSkillTaskCheckedTiming, (int32_t)v8, v9, v10);
    klass = (System_Collections_Generic_HashSet_T__o *)p_HashAddSkillTaskCheckedTiming->klass;
  }
  this = (BattleAddSkillTaskAroundTargetTask_o *)((__int64 (__fastcall *)(BattleAddSkillTaskAroundTargetTask_o *, const MethodInfo *, const MethodInfo *))v4->klass->vtable._4_get_AddTiming.methodPtr)(
                                                   v4,
                                                   v4->klass->vtable._4_get_AddTiming.method,
                                                   method);
  if ( !klass )
LABEL_8:
    sub_1C372B4(this);
  return System_Collections_Generic_HashSet_Int32Enum___Add(
           klass,
           (int32_t)this,
           (const MethodInfo_3656E10 *)Method_System_Collections_Generic_HashSet_BattleAddSkillTaskAroundTargetTask_Timing__Add__);
}


void BattleAddSkillTaskAroundTargetTask__PrevAddTask(
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
  Il2CppObject *current; // x8
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C45F5C & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_BattleLogicTask__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_BattleLogicTask__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_BattleLogicTask__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_BattleLogicTask__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_BattleLogicTask__Insert__);
    this = (BattleAddSkillTaskAroundTargetTask_o *)sub_1C37058(&PlayBackStepLogicTask_TypeInfo);
    byte_4C45F5C = 1;
  }
  memset(&v12, 0, sizeof(v12));
  if ( !arg
    || (ActSvt_k__BackingField = arg->fields._ActSvt_k__BackingField) == 0
    || (uniqueId = ActSvt_k__BackingField->fields.uniqueId,
        v9 = (PlayBackStepLogicTask_o *)sub_1C372A4(PlayBackStepLogicTask_TypeInfo),
        PlayBackStepLogicTask___ctor(v9, uniqueId, 0),
        !taskList) )
  {
    sub_1C372B4(this);
  }
  System_Collections_Generic_List_object___Insert(
    (System_Collections_Generic_List_object__o *)taskList,
    0,
    (Il2CppObject *)v9,
    (const MethodInfo_37A3DD4 *)Method_System_Collections_Generic_List_BattleLogicTask__Insert__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    (System_Collections_Generic_List_object__o *)taskList,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_BattleLogicTask__GetEnumerator__);
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v12,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_BattleLogicTask__MoveNext__);
    if ( !v10 )
      break;
    current = v12.fields._current;
    if ( !v12.fields._current )
      sub_1C372B4(v10);
    *((_BYTE *)&v12.fields._current->klass + (unsigned __int64)&qword_108 + 1) = 1;
    *(_WORD *)((char *)&qword_68 + (_QWORD)current) = 0;
    *((_BYTE *)off_50 + (_QWORD)current + 1) = 1;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v12,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_BattleLogicTask__Dispose__);
}


bool BattleAddSkillTaskAroundTargetTask__TryGetAddableTaskList(
        BattleAddSkillTaskAroundTargetTask_o *this,
        System_Collections_Generic_List_BattleLogicTask__o **taskList,
        BattleLogic_o *logic,
        BattleAddSkillTaskAroundTargetTask_Argument_o *arg,
        const MethodInfo *method)
{
  __int64 v9; // x23
  __int64 v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x20
  System_Func_object__object__o *v16; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0
  System_Collections_Generic_List_BattleLogicTask__o *v18; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3

  if ( (byte_4C45F5B & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_SelectMany_CreateSkillTaskFromBuffAction__BattleLogicTask___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToList_BattleLogicTask___);
    sub_1C37058(&System_Func_CreateSkillTaskFromBuffAction__IEnumerable_BattleLogicTask___TypeInfo);
    sub_1C37058(&Method_BattleAddSkillTaskAroundTargetTask___c__DisplayClass5_0__TryGetAddableTaskList_b__0__);
    sub_1C37058(&BattleAddSkillTaskAroundTargetTask___c__DisplayClass5_0_TypeInfo);
    byte_4C45F5B = 1;
  }
  v9 = sub_1C372A4(BattleAddSkillTaskAroundTargetTask___c__DisplayClass5_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    sub_1C372B4(v10);
  *(_QWORD *)(v9 + 16) = logic;
  sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 16), (int32_t)logic, v11, v12);
  *(_QWORD *)(v9 + 24) = arg;
  sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 24), (int32_t)arg, v13, v14);
  v15 = (System_Collections_Generic_IEnumerable_TSource__o *)((__int64 (__fastcall *)(BattleAddSkillTaskAroundTargetTask_o *, const MethodInfo *))this->klass->vtable._6_GetCreateSkillTaskArray.methodPtr)(
                                                               this,
                                                               this->klass->vtable._6_GetCreateSkillTaskArray.method);
  v16 = (System_Func_object__object__o *)sub_1C372A4(System_Func_CreateSkillTaskFromBuffAction__IEnumerable_BattleLogicTask___TypeInfo);
  System_Func_object__object____ctor(
    v16,
    (Il2CppObject *)v9,
    Method_BattleAddSkillTaskAroundTargetTask___c__DisplayClass5_0__TryGetAddableTaskList_b__0__,
    0);
  v17 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__object_(
                                                               v15,
                                                               (System_Func_TSource__IEnumerable_TResult___o *)v16,
                                                               (const MethodInfo_3121114 *)Method_System_Linq_Enumerable_SelectMany_CreateSkillTaskFromBuffAction__BattleLogicTask___);
  v18 = (System_Collections_Generic_List_BattleLogicTask__o *)System_Linq_Enumerable__ToList_object_(
                                                                v17,
                                                                (const MethodInfo_312BF90 *)Method_System_Linq_Enumerable_ToList_BattleLogicTask___);
  *taskList = v18;
  sub_1C36FFC((CGThumbnailListItem_o *)taskList, (int32_t)v18, v19, v20);
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)*taskList, 0);
}


int32_t BattleAddSkillTaskAroundTargetTask__get_AddTiming(
        BattleAddSkillTaskAroundTargetTask_o *this,
        const MethodInfo *method)
{
  return 0;
}


void BattleAddSkillTaskAroundTargetTask_Argument___ctor(
        BattleAddSkillTaskAroundTargetTask_Argument_o *this,
        BattleData_o *data,
        BattleLogicTask_o *task,
        int32_t targetId,
        const MethodInfo *method)
{
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  __int64 ActorId; // x0
  struct BattleServantData_o *ServantData; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct BattleServantData_o *v15; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct BattleCommandData_o *command; // x1
  int32_t v19; // w2
  const MethodInfo *v20; // x3

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._Task_k__BackingField = task;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields, (int32_t)task, v9, v10);
  if ( !task || (ActorId = BattleLogicTask__getActorId(task, 0), !data) )
    sub_1C372B4(ActorId);
  ServantData = BattleData__getServantData(data, ActorId, 0);
  this->fields._ActSvt_k__BackingField = ServantData;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields._ActSvt_k__BackingField, (int32_t)ServantData, v13, v14);
  v15 = BattleData__getServantData(data, targetId, 0);
  this->fields._TargetSvt_k__BackingField = v15;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields._TargetSvt_k__BackingField, (int32_t)v15, v16, v17);
  command = task->fields.command;
  this->fields._Command_k__BackingField = command;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields._Command_k__BackingField, (int32_t)command, v19, v20);
}


BattleServantData_o *BattleAddSkillTaskAroundTargetTask_Argument__get_ActSvt(
        BattleAddSkillTaskAroundTargetTask_Argument_o *this,
        const MethodInfo *method)
{
  return this->fields._ActSvt_k__BackingField;
}


BattleCommandData_o *BattleAddSkillTaskAroundTargetTask_Argument__get_Command(
        BattleAddSkillTaskAroundTargetTask_Argument_o *this,
        const MethodInfo *method)
{
  return this->fields._Command_k__BackingField;
}


bool BattleAddSkillTaskAroundTargetTask_Argument__get_IsActorEnemy(
        BattleAddSkillTaskAroundTargetTask_Argument_o *this,
        const MethodInfo *method)
{
  struct BattleServantData_o *ActSvt_k__BackingField; // x8

  ActSvt_k__BackingField = this->fields._ActSvt_k__BackingField;
  if ( !ActSvt_k__BackingField )
    sub_1C372B4(this);
  return ActSvt_k__BackingField->fields.isEnemy;
}


bool BattleAddSkillTaskAroundTargetTask_Argument__get_IsAiNpc(
        BattleAddSkillTaskAroundTargetTask_Argument_o *this,
        const MethodInfo *method)
{
  struct BattleServantData_o *ActSvt_k__BackingField; // x0

  ActSvt_k__BackingField = this->fields._ActSvt_k__BackingField;
  if ( !ActSvt_k__BackingField )
    sub_1C372B4(0);
  return ((__int64 (__fastcall *)(struct BattleServantData_o *, const MethodInfo *))ActSvt_k__BackingField->klass->vtable._15_get_IsAiNpc.methodPtr)(
           ActSvt_k__BackingField,
           ActSvt_k__BackingField->klass->vtable._15_get_IsAiNpc.method);
}


BattleServantData_o *BattleAddSkillTaskAroundTargetTask_Argument__get_TargetSvt(
        BattleAddSkillTaskAroundTargetTask_Argument_o *this,
        const MethodInfo *method)
{
  return this->fields._TargetSvt_k__BackingField;
}


BattleLogicTask_o *BattleAddSkillTaskAroundTargetTask_Argument__get_Task(
        BattleAddSkillTaskAroundTargetTask_Argument_o *this,
        const MethodInfo *method)
{
  return this->fields._Task_k__BackingField;
}


void BattleAddSkillTaskAroundTargetTask___c__DisplayClass5_0___ctor(
        BattleAddSkillTaskAroundTargetTask___c__DisplayClass5_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_Collections_Generic_IEnumerable_BattleLogicTask__o *BattleAddSkillTaskAroundTargetTask___c__DisplayClass5_0___TryGetAddableTaskList_b__0(
        BattleAddSkillTaskAroundTargetTask___c__DisplayClass5_0_o *this,
        CreateSkillTaskFromBuffAction_o *creator,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( !creator )
    sub_1C372B4(this);
  return (System_Collections_Generic_IEnumerable_BattleLogicTask__o *)CreateSkillTaskFromBuffAction__CreateTaskArray(
                                                                        creator,
                                                                        this->fields.logic,
                                                                        this->fields.arg,
                                                                        v3);
}