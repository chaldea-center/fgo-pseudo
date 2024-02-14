void __fastcall ServantWaveTurnEventOwner___ctor(ServantWaveTurnEventOwner_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *v5; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42177C8 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent____ctor__, method);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___TypeInfo, v4);
    byte_42177C8 = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)sub_B0D974(
                                                                                      System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___TypeInfo,
                                                                                      method,
                                                                                      v2);
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData____ctor(
    v5,
    (const MethodInfo_2EB8FCC *)Method_System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent____ctor__);
  this->fields.servantWaveTurnEventDict = (struct System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___o *)v5;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v5, v6, v7, v8, v9, v10, v11);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantWaveTurnEventOwner__Add(
        ServantWaveTurnEventOwner_o *this,
        ServantWaveTurnEvent_o *ev,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  ServantWaveTurnEventOwner_o *v5; // x20

  v5 = this;
  if ( (byte_42177C6 & 1) == 0 )
  {
    this = (ServantWaveTurnEventOwner_o *)sub_B0D8A4(
                                            &Method_System_Collections_Generic_List_ServantWaveTurnEvent__Add__,
                                            ev);
    byte_42177C6 = 1;
  }
  if ( !ev
    || (this = (ServantWaveTurnEventOwner_o *)ServantWaveTurnEventOwner__GetOrCreateWaveTurnEventDictValue(
                                                v5,
                                                ev->fields._Wave_k__BackingField,
                                                ev->fields._Turn_k__BackingField,
                                                v3)) == 0LL )
  {
    sub_B0D97C(this);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
    (EventMissionProgressRequest_Argument_ProgressData_o *)ev,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ServantWaveTurnEvent__Add__);
}


int64_t __fastcall ServantWaveTurnEventOwner__CalcWaveTurnVal(int32_t wave, int32_t turn, const MethodInfo *method)
{
  return wave + 100 * turn;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_IEnumerable_ServantWaveTurnEvent__o *__fastcall ServantWaveTurnEventOwner__EventEnumerator(
        ServantWaveTurnEventOwner_o *this,
        int32_t wave,
        int32_t turn,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42177C5 & 1) == 0 )
  {
    sub_B0D8A4(&ServantWaveTurnEventOwner__EventEnumerator_d__1_TypeInfo, *(_QWORD *)&wave);
    byte_42177C5 = 1;
  }
  v7 = sub_B0D974(ServantWaveTurnEventOwner__EventEnumerator_d__1_TypeInfo, *(_QWORD *)&wave, *(_QWORD *)&turn);
  ServantWaveTurnEventOwner__EventEnumerator_d__1___ctor(
    (ServantWaveTurnEventOwner__EventEnumerator_d__1_o *)v7,
    -2,
    0LL);
  if ( !v7 )
    sub_B0D97C(v8);
  *(_QWORD *)(v7 + 40) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v7 + 40), (System_Int32_array **)this, v9, v10, v11, v12, v13, v14);
  *(_DWORD *)(v7 + 52) = wave;
  *(_DWORD *)(v7 + 60) = turn;
  return (System_Collections_Generic_IEnumerable_ServantWaveTurnEvent__o *)v7;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ServantWaveTurnEvent__o *__fastcall ServantWaveTurnEventOwner__GetOrCreateWaveTurnEventDictValue(
        ServantWaveTurnEventOwner_o *this,
        int32_t wave,
        int32_t turn,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___o *servantWaveTurnEventDict; // x0
  int64_t v12; // x20
  __int64 v13; // x1
  __int64 v14; // x2
  struct System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___o *v15; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v16; // x22

  if ( (byte_42177C7 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___ContainsKey__,
      *(_QWORD *)&wave);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___get_Item__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___set_Item__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantWaveTurnEvent___ctor__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_ServantWaveTurnEvent__TypeInfo, v10);
    byte_42177C7 = 1;
  }
  servantWaveTurnEventDict = this->fields.servantWaveTurnEventDict;
  if ( !servantWaveTurnEventDict )
    goto LABEL_9;
  v12 = wave + 100 * turn;
  if ( !System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___ContainsKey(
          (System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)servantWaveTurnEventDict,
          v12,
          (const MethodInfo_2EB9DF0 *)Method_System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___ContainsKey__) )
  {
    v15 = this->fields.servantWaveTurnEventDict;
    v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                    System_Collections_Generic_List_ServantWaveTurnEvent__TypeInfo,
                                                                                                    v13,
                                                                                                    v14);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v16,
      (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ServantWaveTurnEvent___ctor__);
    if ( !v15 )
      goto LABEL_9;
    System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___set_Item(
      (System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)v15,
      v12,
      (WarBoardAIRoute_TargetData_o *)v16,
      (const MethodInfo_2EB9B54 *)Method_System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___set_Item__);
  }
  servantWaveTurnEventDict = this->fields.servantWaveTurnEventDict;
  if ( !servantWaveTurnEventDict )
LABEL_9:
    sub_B0D97C(servantWaveTurnEventDict);
  return (System_Collections_Generic_List_ServantWaveTurnEvent__o *)System_Collections_Generic_Dictionary_long__object___get_Item(
                                                                      (System_Collections_Generic_Dictionary_TKey__TValue__o *)servantWaveTurnEventDict,
                                                                      v12,
                                                                      (const MethodInfo_2EB9AB8 *)Method_System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___get_Item__);
}


void __fastcall ServantWaveTurnEventOwner__EventEnumerator_d__1___ctor(
        ServantWaveTurnEventOwner__EventEnumerator_d__1_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
}


bool __fastcall ServantWaveTurnEventOwner__EventEnumerator_d__1__MoveNext(
        ServantWaveTurnEventOwner__EventEnumerator_d__1_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  int32_t _1__state; // w8
  ServantWaveTurnEventOwner_o *_4__this; // x0
  System_Collections_Generic_List_ServantWaveTurnEvent__o *WaveTurnEventDictValue; // x0
  struct System_Collections_Generic_List_Enumerator_ServantWaveTurnEvent__o *p__7__wrap1; // x20
  __int128 v9; // q0
  const MethodInfo *v10; // x1
  struct ServantWaveTurnEvent_o *current; // x1
  bool result; // w0
  System_Collections_Generic_List_Enumerator_T__o v13; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_421227D & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantWaveTurnEvent__MoveNext__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantWaveTurnEvent__get_Current__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantWaveTurnEvent__GetEnumerator__, v4);
    byte_421227D = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    p__7__wrap1 = &this->fields.__7__wrap1;
  }
  else
  {
    if ( _1__state )
      return 0;
    _4__this = this->fields.__4__this;
    this->fields.__1__state = -1;
    if ( !_4__this )
      sub_B0D97C(0LL);
    WaveTurnEventDictValue = ServantWaveTurnEventOwner__GetOrCreateWaveTurnEventDictValue(
                               _4__this,
                               this->fields.wave,
                               this->fields.turn,
                               0LL);
    if ( !WaveTurnEventDictValue )
      sub_B0D97C(0LL);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v13,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)WaveTurnEventDictValue,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ServantWaveTurnEvent__GetEnumerator__);
    p__7__wrap1 = &this->fields.__7__wrap1;
    v9 = *(_OWORD *)&v13.fields.list;
    this->fields.__7__wrap1.fields.current = (struct ServantWaveTurnEvent_o *)v13.fields.current;
    *(_OWORD *)&this->fields.__7__wrap1.fields.list = v9;
    sub_B0D840(&this->fields.__7__wrap1, 0LL);
  }
  this->fields.__1__state = -3;
  if ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
         (System_Collections_Generic_List_Enumerator_T__o *)p__7__wrap1,
         (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ServantWaveTurnEvent__MoveNext__) )
  {
    current = this->fields.__7__wrap1.fields.current;
    this->fields.__2__current = current;
    sub_B0D840(&this->fields.__2__current, current);
    result = 1;
    this->fields.__1__state = 1;
  }
  else
  {
    ServantWaveTurnEventOwner__EventEnumerator_d__1____m__Finally1(this, v10);
    result = 0;
    p__7__wrap1->fields.list = 0LL;
    *(_QWORD *)&p__7__wrap1->fields.index = 0LL;
    p__7__wrap1->fields.current = 0LL;
  }
  return result;
}


System_Collections_Generic_IEnumerator_ServantWaveTurnEvent__o *__fastcall ServantWaveTurnEventOwner__EventEnumerator_d__1__System_Collections_Generic_IEnumerable_ServantWaveTurnEvent__GetEnumerator(
        ServantWaveTurnEventOwner__EventEnumerator_d__1_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t l__initialThreadId; // w20
  ServantWaveTurnEventOwner__EventEnumerator_d__1_o *v5; // x20
  __int64 CurrentManagedThreadId; // x0
  struct ServantWaveTurnEventOwner_o *_4__this; // x1
  System_Collections_Generic_IEnumerator_ServantWaveTurnEvent__o *result; // x0

  if ( (byte_421227F & 1) == 0 )
  {
    sub_B0D8A4(&ServantWaveTurnEventOwner__EventEnumerator_d__1_TypeInfo, method);
    byte_421227F = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0LL)) )
  {
    this->fields.__1__state = 0;
    v5 = this;
  }
  else
  {
    v5 = (ServantWaveTurnEventOwner__EventEnumerator_d__1_o *)sub_B0D974(
                                                                ServantWaveTurnEventOwner__EventEnumerator_d__1_TypeInfo,
                                                                method,
                                                                v2);
    System_Object___ctor((Il2CppObject *)v5, 0LL);
    v5->fields.__1__state = 0;
    CurrentManagedThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
    v5->fields.__l__initialThreadId = CurrentManagedThreadId;
    if ( !v5 )
      sub_B0D97C(CurrentManagedThreadId);
    _4__this = this->fields.__4__this;
    v5->fields.__4__this = _4__this;
    sub_B0D840(&v5->fields.__4__this, _4__this);
  }
  result = (System_Collections_Generic_IEnumerator_ServantWaveTurnEvent__o *)v5;
  v5->fields.wave = this->fields.__3__wave;
  v5->fields.turn = this->fields.__3__turn;
  return result;
}


ServantWaveTurnEvent_o *__fastcall ServantWaveTurnEventOwner__EventEnumerator_d__1__System_Collections_Generic_IEnumerator_ServantWaveTurnEvent__get_Current(
        ServantWaveTurnEventOwner__EventEnumerator_d__1_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn ServantWaveTurnEventOwner__EventEnumerator_d__1__System_Collections_IEnumerator_Reset(
        ServantWaveTurnEventOwner__EventEnumerator_d__1_o *this,
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
  v6 = sub_B0D8A8(&Method_ServantWaveTurnEventOwner__EventEnumerator_d__1_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
}


Il2CppObject *__fastcall ServantWaveTurnEventOwner__EventEnumerator_d__1__System_Collections_IEnumerator_get_Current(
        ServantWaveTurnEventOwner__EventEnumerator_d__1_o *this,
        const MethodInfo *method)
{
  return (Il2CppObject *)this->fields.__2__current;
}


void __fastcall ServantWaveTurnEventOwner__EventEnumerator_d__1__System_IDisposable_Dispose(
        ServantWaveTurnEventOwner__EventEnumerator_d__1_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8

  _1__state = this->fields.__1__state;
  if ( _1__state == 1 || _1__state == -3 )
    ServantWaveTurnEventOwner__EventEnumerator_d__1____m__Finally1(this, method);
}


void __fastcall ServantWaveTurnEventOwner__EventEnumerator_d__1____m__Finally1(
        ServantWaveTurnEventOwner__EventEnumerator_d__1_o *this,
        const MethodInfo *method)
{
  if ( (byte_421227E & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ServantWaveTurnEvent__Dispose__, method);
    byte_421227E = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    (System_Collections_Generic_List_Enumerator_T__o *)&this->fields.__7__wrap1,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ServantWaveTurnEvent__Dispose__);
}