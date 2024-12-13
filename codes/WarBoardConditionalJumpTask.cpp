void __fastcall WarBoardConditionalJumpTask___ctor(
        WarBoardConditionalJumpTask_o *this,
        System_Func_bool__o *conditionCheck,
        WarBoardTaskBase_o *trueCase,
        WarBoardTaskBase_o *falseCase,
        const MethodInfo *method)
{
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7

  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)this, (const MethodInfo *)conditionCheck);
  this->fields.conditionCheck = conditionCheck;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&this->fields.conditionCheck,
    (int64_t)conditionCheck,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  this->fields.trueCase = trueCase;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.trueCase, (int64_t)trueCase, v15, v16, v17, v18, v19, v20);
  this->fields.falseCase = falseCase;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.falseCase, (int64_t)falseCase, v21, v22, v23, v24, v25, v26);
}


System_Collections_IEnumerator_o *__fastcall WarBoardConditionalJumpTask__Execute(
        WarBoardConditionalJumpTask_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4B34FFF & 1) == 0 )
  {
    sub_1BD3458(&WarBoardConditionalJumpTask__Execute_d__6_TypeInfo, method);
    byte_4B34FFF = 1;
  }
  v3 = sub_1BD36A4(WarBoardConditionalJumpTask__Execute_d__6_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v3 + 32), (int64_t)this, v4, v5, v6, v7, v8, v9);
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
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  __int64 v12; // x8
  int64_t v13; // x1
  PartyOrganizationUtility_o *p_runningTask; // x19

  StartCallback = this->fields.StartCallback;
  v3 = this;
  this->fields._isPlaying_k__BackingField = 1;
  if ( StartCallback )
    this = (WarBoardConditionalJumpTask_o *)((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))StartCallback->fields.m_target)(
                                              StartCallback->fields.original_method_info,
                                              *(_QWORD *)&StartCallback->fields.extra_arg);
  conditionCheck = v3->fields.conditionCheck;
  if ( !conditionCheck )
    sub_1BD36B4(this, method);
  v5 = ((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))conditionCheck->fields.m_target)(
         conditionCheck->fields.original_method_info,
         *(_QWORD *)&conditionCheck->fields.extra_arg);
  v12 = 72LL;
  if ( (v5 & 1) != 0 )
    v12 = 64LL;
  v13 = *(int64_t *)((char *)&v3->klass + v12);
  v3->fields.runningTask = (struct WarBoardTaskBase_o *)v13;
  p_runningTask = (PartyOrganizationUtility_o *)&v3->fields.runningTask;
  sub_1BD33FC(p_runningTask, v13, v6, v7, v8, v9, v10, v11);
  if ( p_runningTask->klass )
    (*((void (__fastcall **)(PartyOrganizationUtility_c *, _QWORD))p_runningTask->klass->_1.image + 49))(
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
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

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
      sub_1BD36B4(this, method);
    runningTask = _4__this->fields.runningTask;
    if ( runningTask )
    {
      v6 = (Il2CppObject *)((__int64 (__fastcall *)(struct WarBoardTaskBase_o *, Il2CppMethodPointer))runningTask->klass->vtable._4_Execute.method)(
                             runningTask,
                             runningTask->klass->vtable._5_OnStart.methodPtr);
      this->fields.__2__current = v6;
      p__2__current = &this->fields.__2__current;
      sub_1BD33FC((PartyOrganizationUtility_o *)p__2__current, (int64_t)v6, v8, v9, v10, v11, v12, v13);
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

  v2 = sub_1BD346C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BD36A4(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BD346C(&Method_WarBoardConditionalJumpTask__Execute_d__6_System_Collections_IEnumerator_Reset__);
  sub_1BD3580(v3, v4);
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