// local variable allocation has failed, the output may be wrong!
void WarBoardTaskPlayedEventId___ctor(
        WarBoardTaskPlayedEventId_o *this,
        int32_t playedEventId,
        const MethodInfo *method)
{
  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)this, *(const MethodInfo **)&playedEventId);
  *(_DWORD *)(&this->fields._isPause_k__BackingField + 3) = playedEventId;
}


System_Collections_IEnumerator_o *WarBoardTaskPlayedEventId__Execute(
        WarBoardTaskPlayedEventId_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4D2E64E & 1) == 0 )
  {
    sub_1C93AD4(&WarBoardTaskPlayedEventId__Execute_d__2_TypeInfo);
    byte_4D2E64E = 1;
  }
  v3 = sub_1C93D20(WarBoardTaskPlayedEventId__Execute_d__2_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


void WarBoardTaskPlayedEventId__Execute_d__2___ctor(
        WarBoardTaskPlayedEventId__Execute_d__2_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool WarBoardTaskPlayedEventId__Execute_d__2__MoveNext(
        WarBoardTaskPlayedEventId__Execute_d__2_o *this,
        const MethodInfo *method)
{
  struct WarBoardTaskPlayedEventId_o *_4__this; // x20
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4D2E64F & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4D2E64F = 1;
  }
  if ( !this->fields.__1__state )
  {
    this->fields.__1__state = -1;
    _4__this = this->fields.__4__this;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !_4__this || !Instance )
      sub_1C93D2C(Instance, v5);
    WarBoardManager__PlayedEventId(
      (WarBoardManager_o *)Instance,
      *(_DWORD *)(&_4__this->fields._isPause_k__BackingField + 3),
      0);
  }
  return 0;
}


Il2CppObject *WarBoardTaskPlayedEventId__Execute_d__2__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        WarBoardTaskPlayedEventId__Execute_d__2_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn WarBoardTaskPlayedEventId__Execute_d__2__System_Collections_IEnumerator_Reset(
        WarBoardTaskPlayedEventId__Execute_d__2_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C93AE8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C93D20(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C93AE8(&Method_WarBoardTaskPlayedEventId__Execute_d__2_System_Collections_IEnumerator_Reset__);
  sub_1C93BFC(v3, v4);
}


Il2CppObject *WarBoardTaskPlayedEventId__Execute_d__2__System_Collections_IEnumerator_get_Current(
        WarBoardTaskPlayedEventId__Execute_d__2_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void WarBoardTaskPlayedEventId__Execute_d__2__System_IDisposable_Dispose(
        WarBoardTaskPlayedEventId__Execute_d__2_o *this,
        const MethodInfo *method)
{
  ;
}