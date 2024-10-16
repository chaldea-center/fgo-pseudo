void __fastcall WarBoardConditionalJumpTask___ctor(
        WarBoardConditionalJumpTask_o *this,
        System_Func_bool__o *conditionCheck,
        WarBoardTaskBase_o *trueCase,
        WarBoardTaskBase_o *falseCase,
        const MethodInfo *method)
{
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w2
  int32_t v14; // w3

  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)this, (const MethodInfo *)conditionCheck);
  this->fields.conditionCheck = conditionCheck;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.conditionCheck, (int32_t)conditionCheck, v9, v10);
  this->fields.trueCase = trueCase;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.trueCase, (int32_t)trueCase, v11, v12);
  this->fields.falseCase = falseCase;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.falseCase, (int32_t)falseCase, v13, v14);
}


System_Collections_IEnumerator_o *__fastcall WarBoardConditionalJumpTask__Execute(
        WarBoardConditionalJumpTask_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4AB3BED & 1) == 0 )
  {
    sub_1BAB41C(&WarBoardConditionalJumpTask__Execute_d__6_TypeInfo, method);
    byte_4AB3BED = 1;
  }
  v3 = sub_1BAB668(WarBoardConditionalJumpTask__Execute_d__6_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall WarBoardConditionalJumpTask__OnEnd(WarBoardConditionalJumpTask_o *this, const MethodInfo *method)
{
  struct WarBoardTaskBase_o *runningTask; // x0
  struct WarBoardTaskBase_TaskCallback_o *EndCallback; // x8

  runningTask = this->fields.runningTask;
  if ( runningTask )
    ((void (__fastcall *)(struct WarBoardTaskBase_o *, Il2CppMethodPointer))runningTask->klass->vtable._6_OnEnd.method)(
      runningTask,
      runningTask->klass->vtable._7_OnPause.methodPtr);
  EndCallback = this->fields.EndCallback;
  this->fields._isPlaying_k__BackingField = 0;
  if ( EndCallback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))EndCallback->fields.m_target)(
      EndCallback->fields.original_method_info,
      *(_QWORD *)&EndCallback->fields.extra_arg);
}


void __fastcall WarBoardConditionalJumpTask__OnStart(WarBoardConditionalJumpTask_o *this, const MethodInfo *method)
{
  struct WarBoardTaskBase_TaskCallback_o *StartCallback; // x8
  WarBoardConditionalJumpTask_o *v3; // x19
  struct System_Func_bool__o *conditionCheck; // x8
  char v5; // w0
  int32_t v6; // w2
  int32_t v7; // w3
  __int64 v8; // x8
  struct WarBoardTaskBase_o *v9; // x1
  ServantStatusBattleListViewItem_o *p_runningTask; // x19

  StartCallback = this->fields.StartCallback;
  v3 = this;
  this->fields._isPlaying_k__BackingField = 1;
  if ( StartCallback )
    this = (WarBoardConditionalJumpTask_o *)((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))StartCallback->fields.m_target)(
                                              StartCallback->fields.original_method_info,
                                              *(_QWORD *)&StartCallback->fields.extra_arg);
  conditionCheck = v3->fields.conditionCheck;
  if ( !conditionCheck )
    sub_1BAB678(this, method);
  v5 = ((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))conditionCheck->fields.m_target)(
         conditionCheck->fields.original_method_info,
         *(_QWORD *)&conditionCheck->fields.extra_arg);
  v8 = 72LL;
  if ( (v5 & 1) != 0 )
    v8 = 64LL;
  v9 = *(struct WarBoardTaskBase_o **)((char *)&v3->klass + v8);
  v3->fields.runningTask = v9;
  p_runningTask = (ServantStatusBattleListViewItem_o *)&v3->fields.runningTask;
  sub_1BAB3C0(p_runningTask, (int32_t)v9, v6, v7);
  if ( p_runningTask->klass )
    (*((void (__fastcall **)(ServantStatusBattleListViewItem_c *, _QWORD))p_runningTask->klass->_1.image + 49))(
      p_runningTask->klass,
      *((_QWORD *)p_runningTask->klass->_1.image + 50));
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
  int32_t v8; // w2
  int32_t v9; // w3

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
      sub_1BAB678(this, method);
    runningTask = _4__this->fields.runningTask;
    if ( runningTask )
    {
      v6 = (Il2CppObject *)((__int64 (__fastcall *)(struct WarBoardTaskBase_o *, Il2CppMethodPointer))runningTask->klass->vtable._4_Execute.method)(
                             runningTask,
                             runningTask->klass->vtable._5_OnStart.methodPtr);
      this->fields.__2__current = v6;
      p__2__current = &this->fields.__2__current;
      sub_1BAB3C0((ServantStatusBattleListViewItem_o *)p__2__current, (int32_t)v6, v8, v9);
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BAB430(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BAB668(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BAB430(&Method_WarBoardConditionalJumpTask__Execute_d__6_System_Collections_IEnumerator_Reset__);
  sub_1BAB544(v3, v4);
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