// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardTaskPlayedEventId___ctor(
        WarBoardTaskPlayedEventId_o *this,
        int32_t playedEventId,
        const MethodInfo *method)
{
  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)this, *(const MethodInfo **)&playedEventId);
  *(_DWORD *)(&this->fields._isPause_k__BackingField + 3) = playedEventId;
}


System_Collections_IEnumerator_o *__fastcall WarBoardTaskPlayedEventId__Execute(
        WarBoardTaskPlayedEventId_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4B14099 & 1) == 0 )
  {
    sub_1BCA7E0(&WarBoardTaskPlayedEventId__Execute_d__2_TypeInfo, method, v2);
    byte_4B14099 = 1;
  }
  v5 = sub_1BCAA2C(WarBoardTaskPlayedEventId__Execute_d__2_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall WarBoardTaskPlayedEventId__Execute_d__2___ctor(
        WarBoardTaskPlayedEventId__Execute_d__2_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall WarBoardTaskPlayedEventId__Execute_d__2__MoveNext(
        WarBoardTaskPlayedEventId__Execute_d__2_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct WarBoardTaskPlayedEventId_o *_4__this; // x20
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4B1409A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method, v2);
    byte_4B1409A = 1;
  }
  if ( !this->fields.__1__state )
  {
    this->fields.__1__state = -1;
    _4__this = this->fields.__4__this;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !_4__this || !Instance )
      sub_1BCAA3C(Instance, v6);
    WarBoardManager__PlayedEventId(
      (WarBoardManager_o *)Instance,
      *(_DWORD *)(&_4__this->fields._isPause_k__BackingField + 3),
      0LL);
  }
  return 0;
}


Il2CppObject *__fastcall WarBoardTaskPlayedEventId__Execute_d__2__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        WarBoardTaskPlayedEventId__Execute_d__2_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn WarBoardTaskPlayedEventId__Execute_d__2__System_Collections_IEnumerator_Reset(
        WarBoardTaskPlayedEventId__Execute_d__2_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_WarBoardTaskPlayedEventId__Execute_d__2_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
}


Il2CppObject *__fastcall WarBoardTaskPlayedEventId__Execute_d__2__System_Collections_IEnumerator_get_Current(
        WarBoardTaskPlayedEventId__Execute_d__2_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall WarBoardTaskPlayedEventId__Execute_d__2__System_IDisposable_Dispose(
        WarBoardTaskPlayedEventId__Execute_d__2_o *this,
        const MethodInfo *method)
{
  ;
}