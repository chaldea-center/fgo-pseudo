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

  if ( (byte_4CF167A & 1) == 0 )
  {
    sub_1C7BAE8(&BattleAddSkillTaskAroundTargetTask_Argument_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    byte_4CF167A = 1;
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
    v15 = (BattleAddSkillTaskAroundTargetTask_Argument_o *)sub_1C7BD34(BattleAddSkillTaskAroundTargetTask_Argument_TypeInfo);
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
                (const MethodInfo_3840954 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
        BattleLogic__AddTaskTargetTaskAfter_47166324(logic, task, (BattleLogicTask_array *)v20, 0);
        return 1;
      }
LABEL_10:
      sub_1C7BD40(IsFirstChecked, v13);
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

  if ( (byte_4CF167E & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Array_Empty_CreateSkillTaskFromBuffAction___);
    byte_4CF167E = 1;
  }
  v3 = Method_System_Array_Empty_CreateSkillTaskFromBuffAction___;
  v4 = *((_QWORD *)Method_System_Array_Empty_CreateSkillTaskFromBuffAction___ + 7);
  if ( !v4 )
  {
    sub_1C51BD8(Method_System_Array_Empty_CreateSkillTaskFromBuffAction___);
    v4 = v3[7];
  }
  v5 = *(_QWORD *)(v4 + 16);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1C51B7C(inited);
  if ( !*(_DWORD *)(v5 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v5);
  v6 = *(_QWORD *)(v3[7] + 16LL);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1C51B7C(inited);
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
  GrandQuestFolderBoardItem_o *p_HashAddSkillTaskCheckedTiming; // x21
  System_Collections_Generic_HashSet_T__o *klass; // x22
  struct System_Collections_Generic_HashSet_ValueTuple_BattleAddSkillTaskAroundTargetTask_Timing__Nullable_int____o *HashAddSkillTaskCheckedTiming; // t1
  System_Collections_Generic_HashSet_T__o *v10; // x22
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  int32_t v17; // w0
  System_Nullable_int__o v18; // x3
  const MethodInfo_3B9FFF0 *v19; // x4
  System_ValueTuple_Int32Enum__Nullable_int___o item; // [xsp+0h] [xbp-40h] BYREF
  System_ValueTuple_Int32Enum__Nullable_int___o v22; // 0:x0.12

  v4 = *(_DWORD *)&actorId.fields.hasValue;
  v6 = this;
  if ( (byte_4CF167D & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_HashSet_ValueTuple_BattleAddSkillTaskAroundTargetTask_Timing__Nullable_int____Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_HashSet_ValueTuple_BattleAddSkillTaskAroundTargetTask_Timing__Nullable_int_____ctor__);
    sub_1C7BAE8(&System_Collections_Generic_HashSet_ValueTuple_BattleAddSkillTaskAroundTargetTask_Timing__Nullable_int____TypeInfo);
    this = (BattleAddSkillTaskAroundTargetTask_o *)sub_1C7BAE8(&Method_System_ValueTuple_BattleAddSkillTaskAroundTargetTask_Timing__Nullable_int____ctor__);
    byte_4CF167D = 1;
  }
  if ( !task )
    goto LABEL_8;
  HashAddSkillTaskCheckedTiming = task->fields.HashAddSkillTaskCheckedTiming;
  p_HashAddSkillTaskCheckedTiming = (GrandQuestFolderBoardItem_o *)&task->fields.HashAddSkillTaskCheckedTiming;
  klass = (System_Collections_Generic_HashSet_T__o *)HashAddSkillTaskCheckedTiming;
  if ( !HashAddSkillTaskCheckedTiming )
  {
    v10 = (System_Collections_Generic_HashSet_T__o *)sub_1C7BD34(System_Collections_Generic_HashSet_ValueTuple_BattleAddSkillTaskAroundTargetTask_Timing__Nullable_int____TypeInfo);
    System_Collections_Generic_HashSet_ValueTuple_Int32Enum__Nullable_int______ctor(
      v10,
      (const MethodInfo_36E76A4 *)Method_System_Collections_Generic_HashSet_ValueTuple_BattleAddSkillTaskAroundTargetTask_Timing__Nullable_int_____ctor__);
    p_HashAddSkillTaskCheckedTiming->klass = (GrandQuestFolderBoardItem_c *)v10;
    sub_1C7BA8C(p_HashAddSkillTaskCheckedTiming, (int32_t)v10, v11, v12, v13, v14, v15, v16);
    klass = (System_Collections_Generic_HashSet_T__o *)p_HashAddSkillTaskCheckedTiming->klass;
  }
  v17 = ((__int64 (__fastcall *)(BattleAddSkillTaskAroundTargetTask_o *, const MethodInfo *, System_Nullable_int__o, const MethodInfo *))v6->klass->vtable._4_get_AddTiming.methodPtr)(
          v6,
          v6->klass->vtable._4_get_AddTiming.method,
          actorId,
          method);
  v18 = (System_Nullable_int__o)Method_System_ValueTuple_BattleAddSkillTaskAroundTargetTask_Timing__Nullable_int____ctor__;
  v22.fields.Item2.fields.value = v17;
  *(_QWORD *)&v22.fields.Item1 = &item;
  item.fields.Item2.fields.value = 0;
  *(_QWORD *)&item.fields.Item1 = 0;
  System_ValueTuple_Int32Enum__Nullable_int_____ctor(v22, v4, v18, v19);
  if ( !klass )
LABEL_8:
    sub_1C7BD40(this, task);
  return System_Collections_Generic_HashSet_ValueTuple_Int32Enum__Nullable_int_____Add(
           klass,
           item,
           (const MethodInfo_36E88E8 *)Method_System_Collections_Generic_HashSet_ValueTuple_BattleAddSkillTaskAroundTargetTask_Timing__Nullable_int____Add__);
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

  if ( (byte_4CF167C & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_BattleLogicTask__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_BattleLogicTask__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_BattleLogicTask__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BattleLogicTask__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BattleLogicTask__Insert__);
    this = (BattleAddSkillTaskAroundTargetTask_o *)sub_1C7BAE8(&PlayBackStepLogicTask_TypeInfo);
    byte_4CF167C = 1;
  }
  memset(&v13, 0, sizeof(v13));
  if ( !arg
    || (ActSvt_k__BackingField = arg->fields._ActSvt_k__BackingField) == 0
    || (uniqueId = ActSvt_k__BackingField->fields.uniqueId,
        v9 = (PlayBackStepLogicTask_o *)sub_1C7BD34(PlayBackStepLogicTask_TypeInfo),
        PlayBackStepLogicTask___ctor(v9, uniqueId, 0),
        !taskList) )
  {
    sub_1C7BD40(this, taskList);
  }
  System_Collections_Generic_List_object___Insert(
    (System_Collections_Generic_List_object__o *)taskList,
    0,
    (Il2CppObject *)v9,
    (const MethodInfo_383FBAC *)Method_System_Collections_Generic_List_BattleLogicTask__Insert__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    (System_Collections_Generic_List_object__o *)taskList,
    (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_BattleLogicTask__GetEnumerator__);
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v13,
            (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_BattleLogicTask__MoveNext__);
    if ( !v10 )
      break;
    current = v13.fields._current;
    if ( !v13.fields._current )
      sub_1C7BD40(v10, v11);
    *((_BYTE *)&v13.fields._current->klass + (unsigned __int64)&qword_108 + 1) = 1;
    *(_WORD *)((char *)&qword_68 + (_QWORD)current) = 0;
    *((_BYTE *)off_50 + (_QWORD)current + 1) = 1;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v13,
    (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_BattleLogicTask__Dispose__);
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
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x20
  System_Func_object__object__o *v25; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0
  System_Collections_Generic_List_BattleLogicTask__o *v27; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7

  if ( (byte_4CF167B & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Linq_Enumerable_SelectMany_CreateSkillTaskFromBuffAction__BattleLogicTask___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_ToList_BattleLogicTask___);
    sub_1C7BAE8(&System_Func_CreateSkillTaskFromBuffAction__IEnumerable_BattleLogicTask___TypeInfo);
    sub_1C7BAE8(&Method_BattleAddSkillTaskAroundTargetTask___c__DisplayClass5_0__TryGetAddableTaskList_b__0__);
    sub_1C7BAE8(&BattleAddSkillTaskAroundTargetTask___c__DisplayClass5_0_TypeInfo);
    byte_4CF167B = 1;
  }
  v9 = sub_1C7BD34(BattleAddSkillTaskAroundTargetTask___c__DisplayClass5_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    sub_1C7BD40(v10, v11);
  *(_QWORD *)(v9 + 16) = logic;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v9 + 16), (int32_t)logic, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 24) = arg;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v9 + 24), (int32_t)arg, v18, v19, v20, v21, v22, v23);
  v24 = (System_Collections_Generic_IEnumerable_TSource__o *)((__int64 (__fastcall *)(BattleAddSkillTaskAroundTargetTask_o *, const MethodInfo *))this->klass->vtable._6_GetCreateSkillTaskArray.methodPtr)(
                                                               this,
                                                               this->klass->vtable._6_GetCreateSkillTaskArray.method);
  v25 = (System_Func_object__object__o *)sub_1C7BD34(System_Func_CreateSkillTaskFromBuffAction__IEnumerable_BattleLogicTask___TypeInfo);
  System_Func_object__object____ctor(
    v25,
    (Il2CppObject *)v9,
    Method_BattleAddSkillTaskAroundTargetTask___c__DisplayClass5_0__TryGetAddableTaskList_b__0__,
    0);
  v26 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__object_(
                                                               v24,
                                                               (System_Func_TSource__IEnumerable_TResult___o *)v25,
                                                               (const MethodInfo_31A87D0 *)Method_System_Linq_Enumerable_SelectMany_CreateSkillTaskFromBuffAction__BattleLogicTask___);
  v27 = (System_Collections_Generic_List_BattleLogicTask__o *)System_Linq_Enumerable__ToList_object_(
                                                                v26,
                                                                (const MethodInfo_31B3E80 *)Method_System_Linq_Enumerable_ToList_BattleLogicTask___);
  *taskList = v27;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)taskList, (int32_t)v27, v28, v29, v30, v31, v32, v33);
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
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  __int64 v17; // x0
  unsigned __int64 v18; // x1
  struct BattleServantData_o *ServantData; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  struct BattleServantData_o *v26; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  struct BattleCommandData_o *command; // x8
  struct BattleCommandData_o *v40; // x1
  struct BattleCommandData_o *v41; // x20
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x4
  int32_t v45; // w5
  int64_t v46; // x6
  System_String_o *v47; // x7

  if ( (byte_4CF167F & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_1C7BAE8(&Method_System_Nullable_int__get_HasValue__);
    byte_4CF167F = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._Task_k__BackingField = task;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)task, v11, v12, v13, v14, v15, v16);
  if ( actorId.fields.hasValue )
  {
    v18 = HIDWORD(*(unsigned __int64 *)&actorId);
    if ( !data )
      goto LABEL_16;
  }
  else if ( !task || (v17 = BattleLogicTask__getActorId(task, 0), v18 = (unsigned int)v17, !data) )
  {
LABEL_16:
    sub_1C7BD40(v17, v18);
  }
  ServantData = BattleData__getServantData(data, v18, 0);
  this->fields._ActSvt_k__BackingField = ServantData;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields._ActSvt_k__BackingField,
    (int32_t)ServantData,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v26 = BattleData__getServantData(data, targetId, 0);
  this->fields._TargetSvt_k__BackingField = v26;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields._TargetSvt_k__BackingField,
    (int32_t)v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  if ( !task )
    goto LABEL_16;
  command = task->fields.command;
  if ( actorId.fields.hasValue )
    v40 = 0;
  else
    v40 = task->fields.command;
  this->fields._Command_k__BackingField = v40;
  if ( actorId.fields.hasValue )
    v41 = command;
  else
    v41 = 0;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields._Command_k__BackingField,
    (int32_t)v40,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  this->fields._CommandOpponent_k__BackingField = v41;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields._CommandOpponent_k__BackingField,
    (int32_t)v41,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
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
    sub_1C7BD40(this, method);
  return ActSvt_k__BackingField->fields.isEnemy;
}


bool BattleAddSkillTaskAroundTargetTask_Argument__get_IsAiNpc(
        BattleAddSkillTaskAroundTargetTask_Argument_o *this,
        const MethodInfo *method)
{
  struct BattleServantData_o *ActSvt_k__BackingField; // x0

  ActSvt_k__BackingField = this->fields._ActSvt_k__BackingField;
  if ( !ActSvt_k__BackingField )
    sub_1C7BD40(0, method);
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
    sub_1C7BD40(this, 0);
  return (System_Collections_Generic_IEnumerable_BattleLogicTask__o *)CreateSkillTaskFromBuffAction__CreateTaskArray(
                                                                        creator,
                                                                        this->fields.logic,
                                                                        this->fields.arg,
                                                                        v3);
}