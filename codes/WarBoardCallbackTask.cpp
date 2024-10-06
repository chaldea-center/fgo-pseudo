void __fastcall WarBoardCallbackTask___ctor(
        WarBoardCallbackTask_o *this,
        UnityEngine_CustomYieldInstruction_o *waitYieldInstruction,
        const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3

  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)this, (const MethodInfo *)waitYieldInstruction);
  this->fields.waitYieldInstruction = waitYieldInstruction;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)&this->fields.waitYieldInstruction,
    (int32_t)waitYieldInstruction,
    v5,
    v6);
}


System_Collections_IEnumerator_o *__fastcall WarBoardCallbackTask__Execute(
        WarBoardCallbackTask_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A6DDD9 & 1) == 0 )
  {
    sub_1B90010(&WarBoardCallbackTask__Execute_d__2_TypeInfo, method);
    byte_4A6DDD9 = 1;
  }
  v3 = sub_1B9025C(WarBoardCallbackTask__Execute_d__2_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
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
  int32_t v2; // w2
  int32_t v3; // w3
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
      sub_1B9026C(this, method);
    waitYieldInstruction = (Il2CppObject *)_4__this->fields.waitYieldInstruction;
    if ( !waitYieldInstruction )
    {
      return 0;
    }
    else
    {
      this->fields.__2__current = waitYieldInstruction;
      p__2__current = &this->fields.__2__current;
      sub_1B8FFB4(
        (ServantStatusBattleListViewItem_o *)&this->fields.__2__current,
        (int32_t)waitYieldInstruction,
        v2,
        v3);
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B90024(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B9025C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B90024(&Method_WarBoardCallbackTask__Execute_d__2_System_Collections_IEnumerator_Reset__);
  sub_1B90138(v3, v4);
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