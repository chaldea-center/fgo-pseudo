void WarBoardConditionalJumpTask___ctor(
        WarBoardConditionalJumpTask_o *this,
        System_Func_bool__o *conditionCheck,
        WarBoardTaskBase_o *trueCase,
        WarBoardTaskBase_o *falseCase,
        const MethodInfo *method)
{
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7

  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)this, (const MethodInfo *)conditionCheck);
  this->fields.conditionCheck = conditionCheck;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.conditionCheck,
    (int32_t)conditionCheck,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  this->fields.trueCase = trueCase;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.trueCase, (int32_t)trueCase, v15, v16, v17, v18, v19, v20);
  this->fields.falseCase = falseCase;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.falseCase, (int32_t)falseCase, v21, v22, v23, v24, v25, v26);
}


System_Collections_IEnumerator_o *WarBoardConditionalJumpTask__Execute(
        WarBoardConditionalJumpTask_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4CEC249 & 1) == 0 )
  {
    sub_1C7BAE8(&WarBoardConditionalJumpTask__Execute_d__6_TypeInfo);
    byte_4CEC249 = 1;
  }
  v3 = sub_1C7BD34(WarBoardConditionalJumpTask__Execute_d__6_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


void WarBoardConditionalJumpTask__OnEnd(WarBoardConditionalJumpTask_o *this, const MethodInfo *method)
{
  struct WarBoardTaskBase_o *runningTask; // x0
  struct WarBoardTaskBase_TaskCallback_o *EndCallback; // x8

  runningTask = this->fields.runningTask;
  if ( runningTask )
    ((void (__fastcall *)(struct WarBoardTaskBase_o *, const MethodInfo *))runningTask->klass->vtable._6_OnEnd.methodPtr)(
      runningTask,
      runningTask->klass->vtable._6_OnEnd.method);
  EndCallback = this->fields.EndCallback;
  this->fields._isPlaying_k__BackingField = 0;
  if ( EndCallback )
    ((void (__fastcall *)(intptr_t, intptr_t))EndCallback->fields.invoke_impl)(
      EndCallback->fields.method_code,
      EndCallback->fields.method);
}


void WarBoardConditionalJumpTask__OnStart(WarBoardConditionalJumpTask_o *this, const MethodInfo *method)
{
  struct WarBoardTaskBase_TaskCallback_o *StartCallback; // x8
  WarBoardConditionalJumpTask_o *v3; // x19
  struct System_Func_bool__o *conditionCheck; // x8
  char v5; // w0
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  __int64 v12; // x8
  struct WarBoardTaskBase_o *v13; // x1
  GrandQuestFolderBoardItem_o *p_runningTask; // x19

  StartCallback = this->fields.StartCallback;
  v3 = this;
  this->fields._isPlaying_k__BackingField = 1;
  if ( StartCallback )
    this = (WarBoardConditionalJumpTask_o *)((__int64 (__fastcall *)(intptr_t, intptr_t))StartCallback->fields.invoke_impl)(
                                              StartCallback->fields.method_code,
                                              StartCallback->fields.method);
  conditionCheck = v3->fields.conditionCheck;
  if ( !conditionCheck )
    sub_1C7BD40(this, method);
  v5 = ((__int64 (__fastcall *)(intptr_t, intptr_t))conditionCheck->fields.invoke_impl)(
         conditionCheck->fields.method_code,
         conditionCheck->fields.method);
  v12 = 72;
  if ( (v5 & 1) != 0 )
    v12 = 64;
  v13 = *(struct WarBoardTaskBase_o **)((char *)&v3->klass + v12);
  v3->fields.runningTask = v13;
  p_runningTask = (GrandQuestFolderBoardItem_o *)&v3->fields.runningTask;
  sub_1C7BA8C(p_runningTask, (int32_t)v13, v6, v7, v8, v9, v10, v11);
  if ( p_runningTask->klass )
    (*((void (__fastcall **)(GrandQuestFolderBoardItem_c *, _QWORD))p_runningTask->klass->_1.image + 49))(
      p_runningTask->klass,
      *((_QWORD *)p_runningTask->klass->_1.image + 50));
}


void WarBoardConditionalJumpTask__Execute_d__6___ctor(
        WarBoardConditionalJumpTask__Execute_d__6_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool WarBoardConditionalJumpTask__Execute_d__6__MoveNext(
        WarBoardConditionalJumpTask__Execute_d__6_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  struct WarBoardConditionalJumpTask_o *_4__this; // x8
  struct WarBoardTaskBase_o *runningTask; // x0
  Il2CppObject *v6; // x0
  Il2CppObject **p__2__current; // x19
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    LOBYTE(runningTask) = 0;
    this->fields.__1__state = -1;
  }
  else if ( _1__state )
  {
    LOBYTE(runningTask) = 0;
  }
  else
  {
    _4__this = this->fields.__4__this;
    this->fields.__1__state = -1;
    if ( !_4__this )
      sub_1C7BD40(this, method);
    runningTask = _4__this->fields.runningTask;
    if ( runningTask )
    {
      v6 = (Il2CppObject *)((__int64 (__fastcall *)(struct WarBoardTaskBase_o *, const MethodInfo *))runningTask->klass->vtable._4_Execute.methodPtr)(
                             runningTask,
                             runningTask->klass->vtable._4_Execute.method);
      this->fields.__2__current = v6;
      p__2__current = &this->fields.__2__current;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)p__2__current, (int32_t)v6, v8, v9, v10, v11, v12, v13);
      LOBYTE(runningTask) = 1;
      *((_DWORD *)p__2__current - 2) = 1;
    }
  }
  return (char)runningTask;
}


Il2CppObject *WarBoardConditionalJumpTask__Execute_d__6__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        WarBoardConditionalJumpTask__Execute_d__6_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn WarBoardConditionalJumpTask__Execute_d__6__System_Collections_IEnumerator_Reset(
        WarBoardConditionalJumpTask__Execute_d__6_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C7BAFC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C7BD34(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C7BAFC(&Method_WarBoardConditionalJumpTask__Execute_d__6_System_Collections_IEnumerator_Reset__);
  sub_1C7BC10(v3, v4);
}


Il2CppObject *WarBoardConditionalJumpTask__Execute_d__6__System_Collections_IEnumerator_get_Current(
        WarBoardConditionalJumpTask__Execute_d__6_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void WarBoardConditionalJumpTask__Execute_d__6__System_IDisposable_Dispose(
        WarBoardConditionalJumpTask__Execute_d__6_o *this,
        const MethodInfo *method)
{
  ;
}