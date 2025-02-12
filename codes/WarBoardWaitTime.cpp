void __fastcall WarBoardWaitTime___ctor(WarBoardWaitTime_o *this, float waitTime, const MethodInfo *method)
{
  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)this, method);
  *(float *)(&this->fields._isPause_k__BackingField + 3) = waitTime;
}


System_Collections_IEnumerator_o *__fastcall WarBoardWaitTime__Execute(
        WarBoardWaitTime_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4BC5907 & 1) == 0 )
  {
    sub_1C1ABD4(&WarBoardWaitTime__Execute_d__2_TypeInfo, method);
    byte_4BC5907 = 1;
  }
  v3 = sub_1C1AE20(WarBoardWaitTime__Execute_d__2_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v3 + 32), (int64_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall WarBoardWaitTime__Execute_d__2___ctor(
        WarBoardWaitTime__Execute_d__2_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall WarBoardWaitTime__Execute_d__2__MoveNext(
        WarBoardWaitTime__Execute_d__2_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  int32_t _1__state; // w8
  struct WarBoardWaitTime_o *_4__this; // x20
  float v11; // s0
  float espTime_5__2; // s8
  Il2CppObject **p__2__current; // x19
  bool result; // w0

  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state != 1 )
  {
    if ( _1__state )
      return 0;
    this->fields.__1__state = -1;
    if ( _4__this )
    {
      if ( *(float *)(&_4__this->fields._isPause_k__BackingField + 3) < 0.0 )
        return 0;
      this->fields._espTime_5__2 = 0.0;
      v11 = 0.0;
      goto LABEL_7;
    }
LABEL_10:
    sub_1C1AE30(this, method);
  }
  espTime_5__2 = this->fields._espTime_5__2;
  this->fields.__1__state = -1;
  v11 = espTime_5__2 + UnityEngine_Time__get_deltaTime(0LL);
  this->fields._espTime_5__2 = v11;
  if ( !_4__this )
    goto LABEL_10;
LABEL_7:
  if ( v11 < *(float *)(&_4__this->fields._isPause_k__BackingField + 3) )
  {
    this->fields.__2__current = 0LL;
    p__2__current = &this->fields.__2__current;
    sub_1C1AB78((PartyOrganizationUtility_o *)p__2__current, 0LL, v2, v3, v4, v5, v6, v7);
    result = 1;
    *((_DWORD *)p__2__current - 2) = 1;
    return result;
  }
  return 0;
}


Il2CppObject *__fastcall WarBoardWaitTime__Execute_d__2__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        WarBoardWaitTime__Execute_d__2_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn WarBoardWaitTime__Execute_d__2__System_Collections_IEnumerator_Reset(
        WarBoardWaitTime__Execute_d__2_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C1ABE8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C1AE20(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C1ABE8(&Method_WarBoardWaitTime__Execute_d__2_System_Collections_IEnumerator_Reset__);
  sub_1C1ACFC(v3, v4);
}


Il2CppObject *__fastcall WarBoardWaitTime__Execute_d__2__System_Collections_IEnumerator_get_Current(
        WarBoardWaitTime__Execute_d__2_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall WarBoardWaitTime__Execute_d__2__System_IDisposable_Dispose(
        WarBoardWaitTime__Execute_d__2_o *this,
        const MethodInfo *method)
{
  ;
}