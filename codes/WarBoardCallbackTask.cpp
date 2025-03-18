void __fastcall WarBoardCallbackTask___ctor(
        WarBoardCallbackTask_o *this,
        UnityEngine_CustomYieldInstruction_o *waitYieldInstruction,
        const MethodInfo *method)
{
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)this, (const MethodInfo *)waitYieldInstruction);
  this->fields.waitYieldInstruction = waitYieldInstruction;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.waitYieldInstruction,
    (int64_t)waitYieldInstruction,
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
  __int64 v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4C1FD48 & 1) == 0 )
  {
    sub_1C3B764(&WarBoardCallbackTask__Execute_d__2_TypeInfo, method);
    byte_4C1FD48 = 1;
  }
  v3 = sub_1C3B9B0(WarBoardCallbackTask__Execute_d__2_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C3B708((PartyOrganizationUtility_o *)(v3 + 32), (int64_t)this, v4, v5, v6, v7, v8, v9);
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
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
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
      sub_1C3B9C0(this, method);
    waitYieldInstruction = (Il2CppObject *)_4__this->fields.waitYieldInstruction;
    if ( !waitYieldInstruction )
    {
      return 0;
    }
    else
    {
      this->fields.__2__current = waitYieldInstruction;
      p__2__current = &this->fields.__2__current;
      sub_1C3B708(
        (PartyOrganizationUtility_o *)&this->fields.__2__current,
        (int64_t)waitYieldInstruction,
        v2,
        v3,
        v4,
        v5,
        v6,
        v7);
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

  v2 = sub_1C3B778(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C3B9B0(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C3B778(&Method_WarBoardCallbackTask__Execute_d__2_System_Collections_IEnumerator_Reset__);
  sub_1C3B88C(v3, v4);
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