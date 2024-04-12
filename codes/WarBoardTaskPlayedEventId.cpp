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
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42B22B4 & 1) == 0 )
  {
    sub_B52984(&WarBoardTaskPlayedEventId__Execute_d__2_TypeInfo);
    byte_42B22B4 = 1;
  }
  v3 = sub_B52A54(WarBoardTaskPlayedEventId__Execute_d__2_TypeInfo);
  WarBoardTaskPlayedEventId__Execute_d__2___ctor((WarBoardTaskPlayedEventId__Execute_d__2_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_B52A5C(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B52920((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
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
  struct WarBoardTaskPlayedEventId_o *_4__this; // x20
  WebViewManager_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_42AD766 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_42AD766 = 1;
  }
  if ( !this->fields.__1__state )
  {
    this->fields.__1__state = -1;
    _4__this = this->fields.__4__this;
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !_4__this || !Instance )
      sub_B52A5C(Instance, v5);
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B52988(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B52A54(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B52988(&Method_WarBoardTaskPlayedEventId__Execute_d__2_System_Collections_IEnumerator_Reset__);
  sub_B52A28(v3, v4);
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