void __fastcall WarBoardConditionalJumpTask___ctor(
        WarBoardConditionalJumpTask_o *this,
        System_Func_bool__o *conditionCheck,
        WarBoardTaskBase_o *trueCase,
        WarBoardTaskBase_o *falseCase,
        const MethodInfo *method)
{
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7

  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)this, 0LL);
  this->fields.conditionCheck = conditionCheck;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.conditionCheck,
    (System_Int32_array **)conditionCheck,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  this->fields.trueCase = trueCase;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.trueCase,
    (System_Int32_array **)trueCase,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  this->fields.falseCase = falseCase;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.falseCase,
    (System_Int32_array **)falseCase,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
}


System_Collections_IEnumerator_o *__fastcall WarBoardConditionalJumpTask__Execute(
        WarBoardConditionalJumpTask_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x20
  __int64 v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42133C3 & 1) == 0 )
  {
    sub_B0D8A4(&WarBoardConditionalJumpTask__Execute_d__6_TypeInfo, method);
    byte_42133C3 = 1;
  }
  v4 = sub_B0D974(WarBoardConditionalJumpTask__Execute_d__6_TypeInfo, method, v2);
  WarBoardConditionalJumpTask__Execute_d__6___ctor((WarBoardConditionalJumpTask__Execute_d__6_o *)v4, 0, 0LL);
  if ( !v4 )
    sub_B0D97C(v5);
  *(_QWORD *)(v4 + 32) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v4 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v4;
}


void __fastcall WarBoardConditionalJumpTask__OnEnd(WarBoardConditionalJumpTask_o *this, const MethodInfo *method)
{
  struct WarBoardTaskBase_o *runningTask; // x0

  runningTask = this->fields.runningTask;
  if ( runningTask )
    ((void (__fastcall *)(struct WarBoardTaskBase_o *, Il2CppMethodPointer))runningTask->klass->vtable._6_OnEnd.method)(
      runningTask,
      runningTask->klass->vtable._7_OnPause.methodPtr);
  WarBoardTaskBase__OnEnd((WarBoardTaskBase_o *)this, 0LL);
}


void __fastcall WarBoardConditionalJumpTask__OnStart(WarBoardConditionalJumpTask_o *this, const MethodInfo *method)
{
  System_Func_bool__o *conditionCheck; // x0
  bool v4; // w0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  __int64 v11; // x8
  struct WarBoardTaskBase_o *v12; // x1
  struct WarBoardTaskBase_o *runningTask; // x0

  if ( (byte_42133C2 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Func_bool__Invoke__, method);
    byte_42133C2 = 1;
  }
  WarBoardTaskBase__OnStart((WarBoardTaskBase_o *)this, 0LL);
  conditionCheck = this->fields.conditionCheck;
  if ( !conditionCheck )
    sub_B0D97C(0LL);
  v4 = System_Func_bool___Invoke(conditionCheck, (const MethodInfo_26056C0 *)Method_System_Func_bool__Invoke__);
  v11 = 72LL;
  if ( v4 )
    v11 = 64LL;
  v12 = *(struct WarBoardTaskBase_o **)((char *)&this->klass + v11);
  this->fields.runningTask = v12;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.runningTask,
    (System_Int32_array **)v12,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  runningTask = this->fields.runningTask;
  if ( runningTask )
    ((void (__fastcall *)(struct WarBoardTaskBase_o *, Il2CppMethodPointer))runningTask->klass->vtable._5_OnStart.method)(
      runningTask,
      runningTask->klass->vtable._6_OnEnd.methodPtr);
}


void __fastcall WarBoardConditionalJumpTask__Execute_d__6___ctor(
        WarBoardConditionalJumpTask__Execute_d__6_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall WarBoardConditionalJumpTask__Execute_d__6__MoveNext(
        WarBoardConditionalJumpTask__Execute_d__6_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  struct WarBoardConditionalJumpTask_o *_4__this; // x8
  struct WarBoardTaskBase_o *runningTask; // x0
  Il2CppObject *v6; // x0
  Il2CppObject **p__2__current; // x19

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
      sub_B0D97C(this);
    runningTask = _4__this->fields.runningTask;
    if ( runningTask )
    {
      v6 = (Il2CppObject *)((__int64 (__fastcall *)(struct WarBoardTaskBase_o *, Il2CppMethodPointer))runningTask->klass->vtable._4_Execute.method)(
                             runningTask,
                             runningTask->klass->vtable._5_OnStart.methodPtr);
      this->fields.__2__current = v6;
      p__2__current = &this->fields.__2__current;
      sub_B0D840(p__2__current, v6);
      LOBYTE(runningTask) = 1;
      *((_DWORD *)p__2__current - 2) = 1;
    }
  }
  return (char)runningTask;
}


Il2CppObject *__fastcall WarBoardConditionalJumpTask__Execute_d__6__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        WarBoardConditionalJumpTask__Execute_d__6_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn WarBoardConditionalJumpTask__Execute_d__6__System_Collections_IEnumerator_Reset(
        WarBoardConditionalJumpTask__Execute_d__6_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_WarBoardConditionalJumpTask__Execute_d__6_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
}


Il2CppObject *__fastcall WarBoardConditionalJumpTask__Execute_d__6__System_Collections_IEnumerator_get_Current(
        WarBoardConditionalJumpTask__Execute_d__6_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall WarBoardConditionalJumpTask__Execute_d__6__System_IDisposable_Dispose(
        WarBoardConditionalJumpTask__Execute_d__6_o *this,
        const MethodInfo *method)
{
  ;
}