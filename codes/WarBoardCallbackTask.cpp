void WarBoardCallbackTask___ctor(
        WarBoardCallbackTask_o *this,
        UnityEngine_CustomYieldInstruction_o *waitYieldInstruction,
        const MethodInfo *method)
{
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)this, (const MethodInfo *)waitYieldInstruction);
  this->fields.waitYieldInstruction = waitYieldInstruction;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.waitYieldInstruction,
    (int32_t)waitYieldInstruction,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


System_Collections_IEnumerator_o *WarBoardCallbackTask__Execute(WarBoardCallbackTask_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_5936230 & 1) == 0 )
  {
    sub_21FFC50(&WarBoardCallbackTask__Execute_d__2_TypeInfo);
    byte_5936230 = 1;
  }
  v3 = sub_21FFEBC(WarBoardCallbackTask__Execute_d__2_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


void WarBoardCallbackTask__Execute_d__2___ctor(
        WarBoardCallbackTask__Execute_d__2_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool WarBoardCallbackTask__Execute_d__2__MoveNext(WarBoardCallbackTask__Execute_d__2_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t _1__state; // w8
  bool result; // w0
  struct WarBoardCallbackTask_o *_4__this; // x8
  Il2CppObject *waitYieldInstruction; // x1
  int32_t v13; // w8

  _1__state = this->fields.__1__state;
  result = 0;
  if ( _1__state == 1 )
  {
    v13 = -1;
  }
  else
  {
    if ( _1__state )
      return result;
    _4__this = this->fields.__4__this;
    this->fields.__1__state = -1;
    if ( !_4__this )
      sub_21FFECC(0, method);
    waitYieldInstruction = (Il2CppObject *)_4__this->fields.waitYieldInstruction;
    if ( !waitYieldInstruction )
      return 0;
    this->fields.__2__current = waitYieldInstruction;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.__2__current,
      (int32_t)waitYieldInstruction,
      v2,
      v3,
      v4,
      v5,
      v6,
      v7);
    v13 = 1;
    result = 1;
  }
  this->fields.__1__state = v13;
  return result;
}


Il2CppObject *WarBoardCallbackTask__Execute_d__2__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        WarBoardCallbackTask__Execute_d__2_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn WarBoardCallbackTask__Execute_d__2__System_Collections_IEnumerator_Reset(
        WarBoardCallbackTask__Execute_d__2_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_WarBoardCallbackTask__Execute_d__2_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
}


Il2CppObject *WarBoardCallbackTask__Execute_d__2__System_Collections_IEnumerator_get_Current(
        WarBoardCallbackTask__Execute_d__2_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void WarBoardCallbackTask__Execute_d__2__System_IDisposable_Dispose(
        WarBoardCallbackTask__Execute_d__2_o *this,
        const MethodInfo *method)
{
  ;
}