void __fastcall WarBoardCallbackTask___ctor(
        WarBoardCallbackTask_o *this,
        UnityEngine_CustomYieldInstruction_o *waitYieldInstruction,
        const MethodInfo *method)
{
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)this, 0LL);
  this->fields.waitYieldInstruction = waitYieldInstruction;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.waitYieldInstruction,
    (System_Int32_array **)waitYieldInstruction,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


System_Collections_IEnumerator_o *__fastcall WarBoardCallbackTask__Execute(
        WarBoardCallbackTask_o *this,
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

  if ( (byte_421339A & 1) == 0 )
  {
    sub_B0D8A4(&WarBoardCallbackTask__Execute_d__2_TypeInfo, method);
    byte_421339A = 1;
  }
  v4 = sub_B0D974(WarBoardCallbackTask__Execute_d__2_TypeInfo, method, v2);
  WarBoardCallbackTask__Execute_d__2___ctor((WarBoardCallbackTask__Execute_d__2_o *)v4, 0, 0LL);
  if ( !v4 )
    sub_B0D97C(v5);
  *(_QWORD *)(v4 + 32) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v4 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v4;
}


void __fastcall WarBoardCallbackTask__Execute_d__2___ctor(
        WarBoardCallbackTask__Execute_d__2_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall WarBoardCallbackTask__Execute_d__2__MoveNext(
        WarBoardCallbackTask__Execute_d__2_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  struct WarBoardCallbackTask_o *_4__this; // x8
  Il2CppObject *waitYieldInstruction; // x1
  Il2CppObject **p__2__current; // x19
  bool result; // w0

  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    result = 0;
    this->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state )
      return 0;
    _4__this = this->fields.__4__this;
    this->fields.__1__state = -1;
    if ( !_4__this )
      sub_B0D97C(this);
    waitYieldInstruction = (Il2CppObject *)_4__this->fields.waitYieldInstruction;
    if ( !waitYieldInstruction )
    {
      return 0;
    }
    else
    {
      this->fields.__2__current = waitYieldInstruction;
      p__2__current = &this->fields.__2__current;
      sub_B0D840(&this->fields.__2__current, waitYieldInstruction);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
    }
  }
  return result;
}


Il2CppObject *__fastcall WarBoardCallbackTask__Execute_d__2__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        WarBoardCallbackTask__Execute_d__2_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn WarBoardCallbackTask__Execute_d__2__System_Collections_IEnumerator_Reset(
        WarBoardCallbackTask__Execute_d__2_o *this,
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
  v6 = sub_B0D8A8(&Method_WarBoardCallbackTask__Execute_d__2_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
}


Il2CppObject *__fastcall WarBoardCallbackTask__Execute_d__2__System_Collections_IEnumerator_get_Current(
        WarBoardCallbackTask__Execute_d__2_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall WarBoardCallbackTask__Execute_d__2__System_IDisposable_Dispose(
        WarBoardCallbackTask__Execute_d__2_o *this,
        const MethodInfo *method)
{
  ;
}