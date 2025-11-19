void BattleAddSkillTaskAroundTargetTask___ctor(BattleAddSkillTaskAroundTargetTask_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
bool BattleAddSkillTaskAroundTargetTask__AddTask(
        BattleAddSkillTaskAroundTargetTask_o *this,
        BattleLogic_o *logic,
        BattleLogicTask_o *task,
        int32_t targetId,
        System_Nullable_int__o actorId,
        const MethodInfo *method)
{
  System_Nullable_int__o v11; // x2
  System_Collections_Generic_List_BattleLogicTask__o *IsFirstChecked; // x0
  __int64 v13; // x1
  BattleData_o *data; // x25
  BattleAddSkillTaskAroundTargetTask_Argument_o *v15; // x0
  System_Nullable_int__o v16; // x4
  BattleAddSkillTaskAroundTargetTask_Argument_o *v17; // x24
  const MethodInfo *v18; // x5
  const MethodInfo *v19; // x4
  System_Object_array *v20; // x0
  System_Collections_Generic_List_BattleLogicTask__o *taskList; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4CB92F2 & 1) == 0 )
  {
    sub_1C6BA08(&BattleAddSkillTaskAroundTargetTask_Argument_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    byte_4CB92F2 = 1;
  }
  v11 = actorId;
  taskList = 0;
  IsFirstChecked = (System_Collections_Generic_List_BattleLogicTask__o *)BattleAddSkillTaskAroundTargetTask__IsFirstChecked(
                                                                           this,
                                                                           task,
                                                                           v11,
                                                                           *(const MethodInfo **)&targetId);
  if ( ((unsigned __int8)IsFirstChecked & 1) != 0 )
  {
    if ( !logic )
      goto LABEL_10;
    data = logic->fields.data;
    v15 = (BattleAddSkillTaskAroundTargetTask_Argument_o *)sub_1C6BC54(BattleAddSkillTaskAroundTargetTask_Argument_TypeInfo);
    v16 = actorId;
    v17 = v15;
    BattleAddSkillTaskAroundTargetTask_Argument___ctor(v15, data, task, targetId, v16, v18);
    if ( BattleAddSkillTaskAroundTargetTask__TryGetAddableTaskList(this, &taskList, logic, v17, v19) )
    {
      ((void (__fastcall *)(BattleAddSkillTaskAroundTargetTask_o *, System_Collections_Generic_List_BattleLogicTask__o *, BattleLogic_o *, BattleAddSkillTaskAroundTargetTask_Argument_o *, const MethodInfo *))this->klass->vtable._5_PrevAddTask.methodPtr)(
        this,
        taskList,
        logic,
        v17,
        this->klass->vtable._5_PrevAddTask.method);
      IsFirstChecked = taskList;
      if ( taskList )
      {
        v20 = System_Collections_Generic_List_object___ToArray(
                (System_Collections_Generic_List_object__o *)taskList,
                (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
        BattleLogic__AddTaskTargetTaskAfter_46859404(logic, task, (BattleLogicTask_array *)v20, 0);
        return 1;
      }
LABEL_10:
      sub_1C6BC60(IsFirstChecked, v13);
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

  if ( (byte_4CB92F6 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Array_Empty_CreateSkillTaskFromBuffAction___);
    byte_4CB92F6 = 1;
  }
  v3 = Method_System_Array_Empty_CreateSkillTaskFromBuffAction___;
  v4 = *((_QWORD *)Method_System_Array_Empty_CreateSkillTaskFromBuffAction___ + 7);
  if ( !v4 )
  {
    sub_1C41AF8(Method_System_Array_Empty_CreateSkillTaskFromBuffAction___);
    v4 = v3[7];
  }
  v5 = *(_QWORD *)(v4 + 16);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1C41A9C(inited);
  if ( !*(_DWORD *)(v5 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v5);
  v6 = *(_QWORD *)(v3[7] + 16LL);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1C41A9C(inited);
  return **(CreateSkillTaskFromBuffAction_array ***)(v6 + 184);
}


bool BattleAddSkillTaskAroundTargetTask__IsFirstChecked(
        BattleAddSkillTaskAroundTargetTask_o *this,
        BattleLogicTask_o *task,
        System_Nullable_int__o actorId,
        const MethodInfo *method)
{
  int32_t v4; // w19
  BattleAddSkillTaskAroundTargetTask_o *v6; // x20
  CGThumbnailListItem_o *p_HashAddSkillTaskCheckedTiming; // x21
  System_Collections_Generic_HashSet_T__o *klass; // x22
  struct System_Collections_Generic_HashSet_ValueTuple_BattleAddSkillTaskAroundTargetTask_Timing__Nullable_int____o *HashAddSkillTaskCheckedTiming; // t1
  System_Collections_Generic_HashSet_T__o *v10; // x22
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w0
  System_Nullable_int__o v14; // x3
  const MethodInfo_3B61A80 *v15; // x4
  System_ValueTuple_Int32Enum__Nullable_int___o item; // [xsp+0h] [xbp-40h] BYREF
  System_ValueTuple_Int32Enum__Nullable_int___o v18; // 0:x0.12

  v4 = *(_DWORD *)&actorId.fields.hasValue;
  v6 = this;
  if ( (byte_4CB92F5 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_HashSet_ValueTuple_BattleAddSkillTaskAroundTargetTask_Timing__Nullable_int____Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_HashSet_ValueTuple_BattleAddSkillTaskAroundTargetTask_Timing__Nullable_int_____ctor__);
    sub_1C6BA08(&System_Collections_Generic_HashSet_ValueTuple_BattleAddSkillTaskAroundTargetTask_Timing__Nullable_int____TypeInfo);
    this = (BattleAddSkillTaskAroundTargetTask_o *)sub_1C6BA08(&Method_System_ValueTuple_BattleAddSkillTaskAroundTargetTask_Timing__Nullable_int____ctor__);
    byte_4CB92F5 = 1;
  }
  if ( !task )
    goto LABEL_8;
  HashAddSkillTaskCheckedTiming = task->fields.HashAddSkillTaskCheckedTiming;
  p_HashAddSkillTaskCheckedTiming = (CGThumbnailListItem_o *)&task->fields.HashAddSkillTaskCheckedTiming;
  klass = (System_Collections_Generic_HashSet_T__o *)HashAddSkillTaskCheckedTiming;
  if ( !HashAddSkillTaskCheckedTiming )
  {
    v10 = (System_Collections_Generic_HashSet_T__o *)sub_1C6BC54(System_Collections_Generic_HashSet_ValueTuple_BattleAddSkillTaskAroundTargetTask_Timing__Nullable_int____TypeInfo);
    System_Collections_Generic_HashSet_ValueTuple_Int32Enum__Nullable_int______ctor(
      v10,
      (const MethodInfo_36AED20 *)Method_System_Collections_Generic_HashSet_ValueTuple_BattleAddSkillTaskAroundTargetTask_Timing__Nullable_int_____ctor__);
    p_HashAddSkillTaskCheckedTiming->klass = (CGThumbnailListItem_c *)v10;
    sub_1C6B9AC(p_HashAddSkillTaskCheckedTiming, (int32_t)v10, v11, v12);
    klass = (System_Collections_Generic_HashSet_T__o *)p_HashAddSkillTaskCheckedTiming->klass;
  }
  v13 = ((__int64 (__fastcall *)(BattleAddSkillTaskAroundTargetTask_o *, const MethodInfo *, System_Nullable_int__o, const MethodInfo *))v6->klass->vtable._4_get_AddTiming.methodPtr)(
          v6,
          v6->klass->vtable._4_get_AddTiming.method,
          actorId,
          method);
  v14 = (System_Nullable_int__o)Method_System_ValueTuple_BattleAddSkillTaskAroundTargetTask_Timing__Nullable_int____ctor__;
  v18.fields.Item2.fields.value = v13;
  *(_QWORD *)&v18.fields.Item1 = &item;
  item.fields.Item2.fields.value = 0;
  *(_QWORD *)&item.fields.Item1 = 0;
  System_ValueTuple_Int32Enum__Nullable_int_____ctor(v18, v4, v14, v15);
  if ( !klass )
LABEL_8:
    sub_1C6BC60(this, task);
  return System_Collections_Generic_HashSet_ValueTuple_Int32Enum__Nullable_int_____Add(
           klass,
           item,
           (const MethodInfo_36AFF64 *)Method_System_Collections_Generic_HashSet_ValueTuple_BattleAddSkillTaskAroundTargetTask_Timing__Nullable_int____Add__);
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
  __int64 v11; // x1
  Il2CppObject *current; // x8
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4CB92F4 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_BattleLogicTask__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_BattleLogicTask__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_BattleLogicTask__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicTask__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicTask__Insert__);
    this = (BattleAddSkillTaskAroundTargetTask_o *)sub_1C6BA08(&PlayBackStepLogicTask_TypeInfo);
    byte_4CB92F4 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  if ( !arg
    || (ActSvt_k__BackingField = arg->fields._ActSvt_k__BackingField) == 0
    || (uniqueId = ActSvt_k__BackingField->fields.uniqueId,
        v9 = (PlayBackStepLogicTask_o *)sub_1C6BC54(PlayBackStepLogicTask_TypeInfo),
        PlayBackStepLogicTask___ctor(v9, uniqueId, 0),
        !taskList) )
  {
    sub_1C6BC60(this, taskList);
  }
  System_Collections_Generic_List_object___Insert(
    (System_Collections_Generic_List_object__o *)taskList,
    0,
    (Il2CppObject *)v9,
    (const MethodInfo_3801724 *)Method_System_Collections_Generic_List_BattleLogicTask__Insert__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    (System_Collections_Generic_List_object__o *)taskList,
    (const MethodInfo_380146C *)Method_System_Collections_Generic_List_BattleLogicTask__GetEnumerator__);
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v13,
            (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_BattleLogicTask__MoveNext__);
    if ( !v10 )
      break;
    current = v13.fields._current;
    if ( !v13.fields._current )
      sub_1C6BC60(v10, v11);
    *((_BYTE *)&v13.fields._current->klass + (unsigned __int64)&qword_108 + 1) = 1;
    *(_WORD *)((char *)&qword_68 + (_QWORD)current) = 0;
    *((_BYTE *)off_50 + (_QWORD)current + 1) = 1;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v13,
    (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_BattleLogicTask__Dispose__);
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
  __int64 v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x20
  System_Func_object__object__o *v17; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0
  System_Collections_Generic_List_BattleLogicTask__o *v19; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3

  if ( (byte_4CB92F3 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Linq_Enumerable_SelectMany_CreateSkillTaskFromBuffAction__BattleLogicTask___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToList_BattleLogicTask___);
    sub_1C6BA08(&System_Func_CreateSkillTaskFromBuffAction__IEnumerable_BattleLogicTask___TypeInfo);
    sub_1C6BA08(&Method_BattleAddSkillTaskAroundTargetTask___c__DisplayClass5_0__TryGetAddableTaskList_b__0__);
    sub_1C6BA08(&BattleAddSkillTaskAroundTargetTask___c__DisplayClass5_0_TypeInfo);
    byte_4CB92F3 = 1;
  }
  v9 = sub_1C6BC54(BattleAddSkillTaskAroundTargetTask___c__DisplayClass5_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    sub_1C6BC60(v10, v11);
  *(_QWORD *)(v9 + 16) = logic;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v9 + 16), (int32_t)logic, v12, v13);
  *(_QWORD *)(v9 + 24) = arg;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v9 + 24), (int32_t)arg, v14, v15);
  v16 = (System_Collections_Generic_IEnumerable_TSource__o *)((__int64 (__fastcall *)(BattleAddSkillTaskAroundTargetTask_o *, const MethodInfo *))this->klass->vtable._6_GetCreateSkillTaskArray.methodPtr)(
                                                               this,
                                                               this->klass->vtable._6_GetCreateSkillTaskArray.method);
  v17 = (System_Func_object__object__o *)sub_1C6BC54(System_Func_CreateSkillTaskFromBuffAction__IEnumerable_BattleLogicTask___TypeInfo);
  System_Func_object__object____ctor(
    v17,
    (Il2CppObject *)v9,
    Method_BattleAddSkillTaskAroundTargetTask___c__DisplayClass5_0__TryGetAddableTaskList_b__0__,
    0);
  v18 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__object_(
                                                               v16,
                                                               (System_Func_TSource__IEnumerable_TResult___o *)v17,
                                                               (const MethodInfo_3174900 *)Method_System_Linq_Enumerable_SelectMany_CreateSkillTaskFromBuffAction__BattleLogicTask___);
  v19 = (System_Collections_Generic_List_BattleLogicTask__o *)System_Linq_Enumerable__ToList_object_(
                                                                v18,
                                                                (const MethodInfo_317FEE4 *)Method_System_Linq_Enumerable_ToList_BattleLogicTask___);
  *taskList = v19;
  sub_1C6B9AC((CGThumbnailListItem_o *)taskList, (int32_t)v19, v20, v21);
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
        System_Nullable_int__o actorId,
        const MethodInfo *method)
{
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  __int64 v13; // x0
  unsigned __int64 v14; // x1
  struct BattleServantData_o *ServantData; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct BattleServantData_o *v18; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  struct BattleCommandData_o *command; // x8
  struct BattleCommandData_o *v24; // x1
  struct BattleCommandData_o *v25; // x20
  int32_t v26; // w2
  const MethodInfo *v27; // x3

  if ( (byte_4CB92F7 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_1C6BA08(&Method_System_Nullable_int__get_HasValue__);
    byte_4CB92F7 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._Task_k__BackingField = task;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields, (int32_t)task, v11, v12);
  if ( actorId.fields.hasValue )
  {
    v14 = HIDWORD(*(unsigned __int64 *)&actorId);
    if ( !data )
      goto LABEL_16;
  }
  else if ( !task || (v13 = BattleLogicTask__getActorId(task, 0), v14 = (unsigned int)v13, !data) )
  {
LABEL_16:
    sub_1C6BC60(v13, v14);
  }
  ServantData = BattleData__getServantData(data, v14, 0);
  this->fields._ActSvt_k__BackingField = ServantData;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields._ActSvt_k__BackingField, (int32_t)ServantData, v16, v17);
  v18 = BattleData__getServantData(data, targetId, 0);
  this->fields._TargetSvt_k__BackingField = v18;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields._TargetSvt_k__BackingField, (int32_t)v18, v19, v20);
  if ( !task )
    goto LABEL_16;
  command = task->fields.command;
  if ( actorId.fields.hasValue )
    v24 = 0;
  else
    v24 = task->fields.command;
  this->fields._Command_k__BackingField = v24;
  if ( actorId.fields.hasValue )
    v25 = command;
  else
    v25 = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields._Command_k__BackingField, (int32_t)v24, v21, v22);
  this->fields._CommandOpponent_k__BackingField = v25;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields._CommandOpponent_k__BackingField, (int32_t)v25, v26, v27);
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


BattleCommandData_o *BattleAddSkillTaskAroundTargetTask_Argument__get_CommandOpponent(
        BattleAddSkillTaskAroundTargetTask_Argument_o *this,
        const MethodInfo *method)
{
  return this->fields._CommandOpponent_k__BackingField;
}


bool BattleAddSkillTaskAroundTargetTask_Argument__get_IsActorEnemy(
        BattleAddSkillTaskAroundTargetTask_Argument_o *this,
        const MethodInfo *method)
{
  struct BattleServantData_o *ActSvt_k__BackingField; // x8

  ActSvt_k__BackingField = this->fields._ActSvt_k__BackingField;
  if ( !ActSvt_k__BackingField )
    sub_1C6BC60(this, method);
  return ActSvt_k__BackingField->fields.isEnemy;
}


bool BattleAddSkillTaskAroundTargetTask_Argument__get_IsAiNpc(
        BattleAddSkillTaskAroundTargetTask_Argument_o *this,
        const MethodInfo *method)
{
  struct BattleServantData_o *ActSvt_k__BackingField; // x0

  ActSvt_k__BackingField = this->fields._ActSvt_k__BackingField;
  if ( !ActSvt_k__BackingField )
    sub_1C6BC60(0, method);
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
    sub_1C6BC60(this, 0);
  return (System_Collections_Generic_IEnumerable_BattleLogicTask__o *)CreateSkillTaskFromBuffAction__CreateTaskArray(
                                                                        creator,
                                                                        this->fields.logic,
                                                                        this->fields.arg,
                                                                        v3);
}