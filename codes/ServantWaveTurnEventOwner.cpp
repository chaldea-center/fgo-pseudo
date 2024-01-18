void __fastcall ServantWaveTurnEventOwner___ctor(ServantWaveTurnEventOwner_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *v4; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_418B12B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent____ctor__, method);
    sub_B2C35C(&System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___TypeInfo, v3);
    byte_418B12B = 1;
  }
  v4 = (System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)sub_B2C42C(System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___TypeInfo);
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData____ctor(
    v4,
    (const MethodInfo_2E58690 *)Method_System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent____ctor__);
  this->fields.servantWaveTurnEventDict = (struct System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___o *)v4;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v4, v5, v6, v7, v8, v9, v10);
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
  if ( (byte_418B129 & 1) == 0 )
  {
    this = (ServantWaveTurnEventOwner_o *)sub_B2C35C(
                                            &Method_System_Collections_Generic_List_ServantWaveTurnEvent__Add__,
                                            ev);
    byte_418B129 = 1;
  }
  if ( !ev
    || (this = (ServantWaveTurnEventOwner_o *)ServantWaveTurnEventOwner__GetOrCreateWaveTurnEventDictValue(
                                                v5,
                                                ev->fields._Wave_k__BackingField,
                                                ev->fields._Turn_k__BackingField,
                                                v3)) == 0LL )
  {
    sub_B2C434(this, ev);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
    (EventMissionProgressRequest_Argument_ProgressData_o *)ev,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ServantWaveTurnEvent__Add__);
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
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_418B128 & 1) == 0 )
  {
    sub_B2C35C(&ServantWaveTurnEventOwner__EventEnumerator_d__1_TypeInfo, *(_QWORD *)&wave);
    byte_418B128 = 1;
  }
  v7 = sub_B2C42C(ServantWaveTurnEventOwner__EventEnumerator_d__1_TypeInfo);
  ServantWaveTurnEventOwner__EventEnumerator_d__1___ctor(
    (ServantWaveTurnEventOwner__EventEnumerator_d__1_o *)v7,
    -2,
    0LL);
  if ( !v7 )
    sub_B2C434(v8, v9);
  *(_QWORD *)(v7 + 40) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v7 + 40), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
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
  struct System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___o *v13; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x22

  if ( (byte_418B12A & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___ContainsKey__,
      *(_QWORD *)&wave);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___get_Item__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___set_Item__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantWaveTurnEvent___ctor__, v9);
    sub_B2C35C(&System_Collections_Generic_List_ServantWaveTurnEvent__TypeInfo, v10);
    byte_418B12A = 1;
  }
  servantWaveTurnEventDict = this->fields.servantWaveTurnEventDict;
  if ( !servantWaveTurnEventDict )
    goto LABEL_9;
  v12 = wave + 100 * turn;
  if ( !System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___ContainsKey(
          (System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)servantWaveTurnEventDict,
          v12,
          (const MethodInfo_2E594B4 *)Method_System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___ContainsKey__) )
  {
    v13 = this->fields.servantWaveTurnEventDict;
    v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ServantWaveTurnEvent__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v14,
      (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ServantWaveTurnEvent___ctor__);
    if ( !v13 )
      goto LABEL_9;
    System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___set_Item(
      (System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)v13,
      v12,
      (WarBoardAIRoute_TargetData_o *)v14,
      (const MethodInfo_2E59218 *)Method_System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___set_Item__);
  }
  servantWaveTurnEventDict = this->fields.servantWaveTurnEventDict;
  if ( !servantWaveTurnEventDict )
LABEL_9:
    sub_B2C434(servantWaveTurnEventDict, *(_QWORD *)&wave);
  return (System_Collections_Generic_List_ServantWaveTurnEvent__o *)System_Collections_Generic_Dictionary_long__object___get_Item(
                                                                      (System_Collections_Generic_Dictionary_TKey__TValue__o *)servantWaveTurnEventDict,
                                                                      v12,
                                                                      (const MethodInfo_2E5917C *)Method_System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___get_Item__);
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
  __int64 v8; // x1
  struct System_Collections_Generic_List_Enumerator_ServantWaveTurnEvent__o *p__7__wrap1; // x20
  __int128 v10; // q0
  const MethodInfo *v11; // x1
  struct ServantWaveTurnEvent_o *current; // x1
  bool result; // w0
  System_Collections_Generic_List_Enumerator_T__o v14; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4185434 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantWaveTurnEvent__MoveNext__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantWaveTurnEvent__get_Current__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantWaveTurnEvent__GetEnumerator__, v4);
    byte_4185434 = 1;
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
      sub_B2C434(0LL, method);
    WaveTurnEventDictValue = ServantWaveTurnEventOwner__GetOrCreateWaveTurnEventDictValue(
                               _4__this,
                               this->fields.wave,
                               this->fields.turn,
                               0LL);
    if ( !WaveTurnEventDictValue )
      sub_B2C434(0LL, v8);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v14,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)WaveTurnEventDictValue,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ServantWaveTurnEvent__GetEnumerator__);
    p__7__wrap1 = &this->fields.__7__wrap1;
    v10 = *(_OWORD *)&v14.fields.list;
    this->fields.__7__wrap1.fields.current = (struct ServantWaveTurnEvent_o *)v14.fields.current;
    *(_OWORD *)&this->fields.__7__wrap1.fields.list = v10;
    sub_B2C2F8(&this->fields.__7__wrap1, 0LL);
  }
  this->fields.__1__state = -3;
  if ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
         (System_Collections_Generic_List_Enumerator_T__o *)p__7__wrap1,
         (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ServantWaveTurnEvent__MoveNext__) )
  {
    current = this->fields.__7__wrap1.fields.current;
    this->fields.__2__current = current;
    sub_B2C2F8(&this->fields.__2__current, current);
    result = 1;
    this->fields.__1__state = 1;
  }
  else
  {
    ServantWaveTurnEventOwner__EventEnumerator_d__1____m__Finally1(this, v11);
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
  int32_t l__initialThreadId; // w20
  ServantWaveTurnEventOwner__EventEnumerator_d__1_o *v4; // x20
  __int64 CurrentManagedThreadId; // x0
  __int64 v6; // x1
  struct ServantWaveTurnEventOwner_o *_4__this; // x1
  System_Collections_Generic_IEnumerator_ServantWaveTurnEvent__o *result; // x0

  if ( (byte_4185436 & 1) == 0 )
  {
    sub_B2C35C(&ServantWaveTurnEventOwner__EventEnumerator_d__1_TypeInfo, method);
    byte_4185436 = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0LL)) )
  {
    this->fields.__1__state = 0;
    v4 = this;
  }
  else
  {
    v4 = (ServantWaveTurnEventOwner__EventEnumerator_d__1_o *)sub_B2C42C(ServantWaveTurnEventOwner__EventEnumerator_d__1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v4, 0LL);
    v4->fields.__1__state = 0;
    CurrentManagedThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
    v4->fields.__l__initialThreadId = CurrentManagedThreadId;
    if ( !v4 )
      sub_B2C434(CurrentManagedThreadId, v6);
    _4__this = this->fields.__4__this;
    v4->fields.__4__this = _4__this;
    sub_B2C2F8(&v4->fields.__4__this, _4__this);
  }
  result = (System_Collections_Generic_IEnumerator_ServantWaveTurnEvent__o *)v4;
  v4->fields.wave = this->fields.__3__wave;
  v4->fields.turn = this->fields.__3__turn;
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_ServantWaveTurnEventOwner__EventEnumerator_d__1_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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
  if ( (byte_4185435 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantWaveTurnEvent__Dispose__, method);
    byte_4185435 = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    (System_Collections_Generic_List_Enumerator_T__o *)&this->fields.__7__wrap1,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ServantWaveTurnEvent__Dispose__);
}