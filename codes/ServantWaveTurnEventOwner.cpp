void __fastcall ServantWaveTurnEventOwner___ctor(ServantWaveTurnEventOwner_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42EBF88 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent____ctor__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___TypeInfo, v5, v6, v7);
    byte_42EBF88 = 1;
  }
  v8 = (System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)sub_B5D694(System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___TypeInfo);
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData____ctor(
    v8,
    (const MethodInfo_2F5BC68 *)Method_System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent____ctor__);
  this->fields.servantWaveTurnEventDict = (struct System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___o *)v8;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v8, v9, v10, v11, v12, v13, v14);
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
  if ( (byte_42EBF86 & 1) == 0 )
  {
    this = (ServantWaveTurnEventOwner_o *)sub_B5D5C4(
                                            &Method_System_Collections_Generic_List_ServantWaveTurnEvent__Add__,
                                            (_DWORD)ev,
                                            (_DWORD)method,
                                            v3);
    byte_42EBF86 = 1;
  }
  if ( !ev
    || (this = (ServantWaveTurnEventOwner_o *)ServantWaveTurnEventOwner__GetOrCreateWaveTurnEventDictValue(
                                                v5,
                                                ev->fields._Wave_k__BackingField,
                                                ev->fields._Turn_k__BackingField,
                                                v3)) == 0LL )
  {
    sub_B5D69C(this, ev);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
    (EventMissionProgressRequest_Argument_ProgressData_o *)ev,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ServantWaveTurnEvent__Add__);
}


int64_t __fastcall ServantWaveTurnEventOwner__CalcWaveTurnVal(int32_t wave, int32_t turn, const MethodInfo *method)
{
  return wave + 100 * turn;
}


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

  if ( (byte_42EBF85 & 1) == 0 )
  {
    sub_B5D5C4(&ServantWaveTurnEventOwner__EventEnumerator_d__1_TypeInfo, wave, turn, method);
    byte_42EBF85 = 1;
  }
  v7 = sub_B5D694(ServantWaveTurnEventOwner__EventEnumerator_d__1_TypeInfo);
  ServantWaveTurnEventOwner__EventEnumerator_d__1___ctor(
    (ServantWaveTurnEventOwner__EventEnumerator_d__1_o *)v7,
    -2,
    0LL);
  if ( !v7 )
    sub_B5D69C(v8, v9);
  *(_QWORD *)(v7 + 40) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v7 + 40), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  struct System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___o *servantWaveTurnEventDict; // x0
  int64_t v20; // x20
  struct System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___o *v21; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v22; // x22

  if ( (byte_42EBF87 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___ContainsKey__,
      wave,
      turn,
      method);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___get_Item__, v7, v8, v9);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___set_Item__,
      v10,
      v11,
      v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantWaveTurnEvent___ctor__, v13, v14, v15);
    sub_B5D5C4(&System_Collections_Generic_List_ServantWaveTurnEvent__TypeInfo, v16, v17, v18);
    byte_42EBF87 = 1;
  }
  servantWaveTurnEventDict = this->fields.servantWaveTurnEventDict;
  if ( !servantWaveTurnEventDict )
    goto LABEL_9;
  v20 = wave + 100 * turn;
  if ( !System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___ContainsKey(
          (System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)servantWaveTurnEventDict,
          v20,
          (const MethodInfo_2F5CA8C *)Method_System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___ContainsKey__) )
  {
    v21 = this->fields.servantWaveTurnEventDict;
    v22 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ServantWaveTurnEvent__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v22,
      (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ServantWaveTurnEvent___ctor__);
    if ( !v21 )
      goto LABEL_9;
    System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___set_Item(
      (System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)v21,
      v20,
      (WarBoardAIRoute_TargetData_o *)v22,
      (const MethodInfo_2F5C7F0 *)Method_System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___set_Item__);
  }
  servantWaveTurnEventDict = this->fields.servantWaveTurnEventDict;
  if ( !servantWaveTurnEventDict )
LABEL_9:
    sub_B5D69C(servantWaveTurnEventDict, *(_QWORD *)&wave);
  return (System_Collections_Generic_List_ServantWaveTurnEvent__o *)System_Collections_Generic_Dictionary_long__object___get_Item(
                                                                      (System_Collections_Generic_Dictionary_TKey__TValue__o *)servantWaveTurnEventDict,
                                                                      v20,
                                                                      (const MethodInfo_2F5C754 *)Method_System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___get_Item__);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int32_t _1__state; // w8
  ServantWaveTurnEventOwner_o *_4__this; // x0
  System_Collections_Generic_List_ServantWaveTurnEvent__o *WaveTurnEventDictValue; // x0
  __int64 v14; // x1
  struct System_Collections_Generic_List_Enumerator_ServantWaveTurnEvent__o *p__7__wrap1; // x20
  __int128 v16; // q0
  const MethodInfo *v17; // x1
  bool result; // w0
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_42E5DAF & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantWaveTurnEvent__MoveNext__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ServantWaveTurnEvent__get_Current__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantWaveTurnEvent__GetEnumerator__, v8, v9, v10);
    byte_42E5DAF = 1;
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
      sub_B5D69C(0LL, method);
    WaveTurnEventDictValue = ServantWaveTurnEventOwner__GetOrCreateWaveTurnEventDictValue(
                               _4__this,
                               this->fields.wave,
                               this->fields.turn,
                               0LL);
    if ( !WaveTurnEventDictValue )
      sub_B5D69C(0LL, v14);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v19,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)WaveTurnEventDictValue,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ServantWaveTurnEvent__GetEnumerator__);
    p__7__wrap1 = &this->fields.__7__wrap1;
    v16 = *(_OWORD *)&v19.fields.list;
    this->fields.__7__wrap1.fields.current = (struct ServantWaveTurnEvent_o *)v19.fields.current;
    *(_OWORD *)&this->fields.__7__wrap1.fields.list = v16;
    sub_B5D560(&this->fields.__7__wrap1);
  }
  this->fields.__1__state = -3;
  if ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
         (System_Collections_Generic_List_Enumerator_T__o *)p__7__wrap1,
         (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ServantWaveTurnEvent__MoveNext__) )
  {
    this->fields.__2__current = this->fields.__7__wrap1.fields.current;
    sub_B5D560(&this->fields.__2__current);
    result = 1;
    this->fields.__1__state = 1;
  }
  else
  {
    ServantWaveTurnEventOwner__EventEnumerator_d__1____m__Finally1(this, v17);
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
  int v2; // w2
  __int64 v3; // x3
  int32_t l__initialThreadId; // w20
  ServantWaveTurnEventOwner__EventEnumerator_d__1_o *v6; // x20
  __int64 CurrentManagedThreadId; // x0
  __int64 v8; // x1
  System_Collections_Generic_IEnumerator_ServantWaveTurnEvent__o *result; // x0

  if ( (byte_42E5DB1 & 1) == 0 )
  {
    sub_B5D5C4(&ServantWaveTurnEventOwner__EventEnumerator_d__1_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5DB1 = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0LL)) )
  {
    this->fields.__1__state = 0;
    v6 = this;
  }
  else
  {
    v6 = (ServantWaveTurnEventOwner__EventEnumerator_d__1_o *)sub_B5D694(ServantWaveTurnEventOwner__EventEnumerator_d__1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v6, 0LL);
    v6->fields.__1__state = 0;
    CurrentManagedThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
    v6->fields.__l__initialThreadId = CurrentManagedThreadId;
    if ( !v6 )
      sub_B5D69C(CurrentManagedThreadId, v8);
    v6->fields.__4__this = this->fields.__4__this;
    sub_B5D560(&v6->fields.__4__this);
  }
  result = (System_Collections_Generic_IEnumerator_ServantWaveTurnEvent__o *)v6;
  v6->fields.wave = this->fields.__3__wave;
  v6->fields.turn = this->fields.__3__turn;
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_ServantWaveTurnEventOwner__EventEnumerator_d__1_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E5DB0 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ServantWaveTurnEvent__Dispose__,
      (_DWORD)method,
      v2,
      v3);
    byte_42E5DB0 = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    (System_Collections_Generic_List_Enumerator_T__o *)&this->fields.__7__wrap1,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ServantWaveTurnEvent__Dispose__);
}