void WarBoardConditionalJumpTask___ctor(
        WarBoardConditionalJumpTask_o *this,
        System_Func_bool__o *conditionCheck,
        WarBoardTaskBase_o *trueCase,
        WarBoardTaskBase_o *falseCase,
        const MethodInfo *method)
{
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7

  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)this, (const MethodInfo *)conditionCheck);
  this->fields.conditionCheck = conditionCheck;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.conditionCheck,
    (int32_t)conditionCheck,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  this->fields.trueCase = trueCase;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.trueCase,
    (int32_t)trueCase,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  this->fields.falseCase = falseCase;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.falseCase,
    (int32_t)falseCase,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
}


System_Collections_IEnumerator_o *WarBoardConditionalJumpTask__Execute(
        WarBoardConditionalJumpTask_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_596E393 & 1) == 0 )
  {
    sub_2213A60(&WarBoardConditionalJumpTask__Execute_d__6_TypeInfo);
    byte_596E393 = 1;
  }
  v3 = sub_2213CCC(WarBoardConditionalJumpTask__Execute_d__6_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
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
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  __int64 v12; // x8
  struct WarBoardTaskBase_o *v13; // x1
  MissionNaviTransitionBoardItem_o *p_runningTask; // x19

  StartCallback = this->fields.StartCallback;
  v3 = this;
  this->fields._isPlaying_k__BackingField = 1;
  if ( StartCallback )
    this = (WarBoardConditionalJumpTask_o *)((__int64 (__fastcall *)(intptr_t, intptr_t))StartCallback->fields.invoke_impl)(
                                              StartCallback->fields.method_code,
                                              StartCallback->fields.method);
  conditionCheck = v3->fields.conditionCheck;
  if ( !conditionCheck )
    sub_2213CDC(this, method);
  v5 = ((__int64 (__fastcall *)(intptr_t, intptr_t))conditionCheck->fields.invoke_impl)(
         conditionCheck->fields.method_code,
         conditionCheck->fields.method);
  v12 = 72;
  if ( (v5 & 1) != 0 )
    v12 = 64;
  v13 = *(struct WarBoardTaskBase_o **)((char *)&v3->klass + v12);
  v3->fields.runningTask = v13;
  p_runningTask = (MissionNaviTransitionBoardItem_o *)&v3->fields.runningTask;
  sub_2213A04(p_runningTask, (int32_t)v13, v6, v7, v8, v9, v10, v11);
  if ( p_runningTask->klass )
    (*((void (__fastcall **)(MissionNaviTransitionBoardItem_c *, _QWORD))p_runningTask->klass->_1.image + 49))(
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
  WarBoardConditionalJumpTask__Execute_d__6_o *v3; // x19
  struct WarBoardConditionalJumpTask_o *_4__this; // x8
  __int64 v5; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  int v12; // w8

  _1__state = this->fields.__1__state;
  v3 = this;
  LOBYTE(this) = 0;
  if ( _1__state == 1 )
  {
    v12 = -1;
    goto LABEL_7;
  }
  if ( !_1__state )
  {
    _4__this = v3->fields.__4__this;
    v3->fields.__1__state = -1;
    if ( !_4__this )
      sub_2213CDC(0, method);
    this = (WarBoardConditionalJumpTask__Execute_d__6_o *)_4__this->fields.runningTask;
    if ( this )
    {
      v5 = ((__int64 (__fastcall *)(WarBoardConditionalJumpTask__Execute_d__6_o *, const MethodInfo *))this->klass->vtable._4_System_Collections_Generic_IEnumerator_System_Object__get_Current.methodPtr)(
             this,
             this->klass->vtable._4_System_Collections_Generic_IEnumerator_System_Object__get_Current.method);
      v3->fields.__2__current = (Il2CppObject *)v5;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v3->fields.__2__current, v5, v6, v7, v8, v9, v10, v11);
      v12 = 1;
      LOBYTE(this) = 1;
LABEL_7:
      v3->fields.__1__state = v12;
    }
  }
  return (char)this;
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

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_WarBoardConditionalJumpTask__Execute_d__6_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
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