void __fastcall ServantWaveTurnEventOwner___ctor(ServantWaveTurnEventOwner_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_438DD3F & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent____ctor__);
    sub_B775C4(&System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___TypeInfo);
    byte_438DD3F = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)sub_B77694(System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___TypeInfo);
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData____ctor(
    v3,
    (const MethodInfo_2FCD3B0 *)Method_System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent____ctor__);
  this->fields.servantWaveTurnEventDict = (struct System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___o *)v3;
  sub_B77560((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v3, v4, v5, v6, v7, v8, v9);
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
  if ( (byte_438DD3D & 1) == 0 )
  {
    this = (ServantWaveTurnEventOwner_o *)sub_B775C4(&Method_System_Collections_Generic_List_ServantWaveTurnEvent__Add__);
    byte_438DD3D = 1;
  }
  if ( !ev
    || (this = (ServantWaveTurnEventOwner_o *)ServantWaveTurnEventOwner__GetOrCreateWaveTurnEventDictValue(
                                                v5,
                                                ev->fields._Wave_k__BackingField,
                                                ev->fields._Turn_k__BackingField,
                                                v3)) == 0LL )
  {
    sub_B7769C(this, ev);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
    (EventMissionProgressRequest_Argument_ProgressData_o *)ev,
    (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_ServantWaveTurnEvent__Add__);
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

  if ( (byte_438DD3C & 1) == 0 )
  {
    sub_B775C4(&ServantWaveTurnEventOwner__EventEnumerator_d__1_TypeInfo);
    byte_438DD3C = 1;
  }
  v7 = sub_B77694(ServantWaveTurnEventOwner__EventEnumerator_d__1_TypeInfo);
  ServantWaveTurnEventOwner__EventEnumerator_d__1___ctor(
    (ServantWaveTurnEventOwner__EventEnumerator_d__1_o *)v7,
    -2,
    0LL);
  if ( !v7 )
    sub_B7769C(v8, v9);
  *(_QWORD *)(v7 + 40) = this;
  sub_B77560((BattleServantConfConponent_o *)(v7 + 40), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
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
  struct System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___o *servantWaveTurnEventDict; // x0
  int64_t v8; // x20
  struct System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___o *v9; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x22

  if ( (byte_438DD3E & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___ContainsKey__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___get_Item__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___set_Item__);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantWaveTurnEvent___ctor__);
    sub_B775C4(&System_Collections_Generic_List_ServantWaveTurnEvent__TypeInfo);
    byte_438DD3E = 1;
  }
  servantWaveTurnEventDict = this->fields.servantWaveTurnEventDict;
  if ( !servantWaveTurnEventDict )
    goto LABEL_9;
  v8 = wave + 100 * turn;
  if ( !System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___ContainsKey(
          (System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)servantWaveTurnEventDict,
          v8,
          (const MethodInfo_2FCE1D4 *)Method_System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___ContainsKey__) )
  {
    v9 = this->fields.servantWaveTurnEventDict;
    v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_ServantWaveTurnEvent__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v10,
      (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_ServantWaveTurnEvent___ctor__);
    if ( !v9 )
      goto LABEL_9;
    System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___set_Item(
      (System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)v9,
      v8,
      (WarBoardAIRoute_TargetData_o *)v10,
      (const MethodInfo_2FCDF38 *)Method_System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___set_Item__);
  }
  servantWaveTurnEventDict = this->fields.servantWaveTurnEventDict;
  if ( !servantWaveTurnEventDict )
LABEL_9:
    sub_B7769C(servantWaveTurnEventDict, *(_QWORD *)&wave);
  return (System_Collections_Generic_List_ServantWaveTurnEvent__o *)System_Collections_Generic_Dictionary_long__object___get_Item(
                                                                      (System_Collections_Generic_Dictionary_TKey__TValue__o *)servantWaveTurnEventDict,
                                                                      v8,
                                                                      (const MethodInfo_2FCDE9C *)Method_System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___get_Item__);
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
  int32_t _1__state; // w8
  ServantWaveTurnEventOwner_o *_4__this; // x0
  System_Collections_Generic_List_ServantWaveTurnEvent__o *WaveTurnEventDictValue; // x0
  __int64 v6; // x1
  struct System_Collections_Generic_List_Enumerator_ServantWaveTurnEvent__o *p__7__wrap1; // x20
  __int128 v8; // q0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  const MethodInfo *v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  struct ServantWaveTurnEvent_o *current; // x1
  bool result; // w0
  System_Collections_Generic_List_Enumerator_T__o v24; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4388E62 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ServantWaveTurnEvent__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ServantWaveTurnEvent__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantWaveTurnEvent__GetEnumerator__);
    byte_4388E62 = 1;
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
      sub_B7769C(0LL, method);
    WaveTurnEventDictValue = ServantWaveTurnEventOwner__GetOrCreateWaveTurnEventDictValue(
                               _4__this,
                               this->fields.wave,
                               this->fields.turn,
                               0LL);
    if ( !WaveTurnEventDictValue )
      sub_B7769C(0LL, v6);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v24,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)WaveTurnEventDictValue,
      (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_ServantWaveTurnEvent__GetEnumerator__);
    p__7__wrap1 = &this->fields.__7__wrap1;
    v8 = *(_OWORD *)&v24.fields.list;
    this->fields.__7__wrap1.fields.current = (struct ServantWaveTurnEvent_o *)v24.fields.current;
    *(_OWORD *)&this->fields.__7__wrap1.fields.list = v8;
    sub_B77560((BattleServantConfConponent_o *)&this->fields.__7__wrap1, 0LL, v9, v10, v11, v12, v13, v14);
  }
  this->fields.__1__state = -3;
  if ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
         (System_Collections_Generic_List_Enumerator_T__o *)p__7__wrap1,
         (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_ServantWaveTurnEvent__MoveNext__) )
  {
    current = this->fields.__7__wrap1.fields.current;
    this->fields.__2__current = current;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.__2__current,
      (System_Int32_array **)current,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
    result = 1;
    this->fields.__1__state = 1;
  }
  else
  {
    ServantWaveTurnEventOwner__EventEnumerator_d__1____m__Finally1(this, v15);
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
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_Int32_array **_4__this; // x1
  System_Collections_Generic_IEnumerator_ServantWaveTurnEvent__o *result; // x0

  if ( (byte_4388E64 & 1) == 0 )
  {
    sub_B775C4(&ServantWaveTurnEventOwner__EventEnumerator_d__1_TypeInfo);
    byte_4388E64 = 1;
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
    v4 = (ServantWaveTurnEventOwner__EventEnumerator_d__1_o *)sub_B77694(ServantWaveTurnEventOwner__EventEnumerator_d__1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v4, 0LL);
    v4->fields.__1__state = 0;
    CurrentManagedThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
    v4->fields.__l__initialThreadId = CurrentManagedThreadId;
    if ( !v4 )
      sub_B7769C(CurrentManagedThreadId, v6);
    _4__this = (System_Int32_array **)this->fields.__4__this;
    v4->fields.__4__this = (struct ServantWaveTurnEventOwner_o *)_4__this;
    sub_B77560((BattleServantConfConponent_o *)&v4->fields.__4__this, _4__this, v7, v8, v9, v10, v11, v12);
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

  v2 = sub_B775C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B77694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B775C8(&Method_ServantWaveTurnEventOwner__EventEnumerator_d__1_System_Collections_IEnumerator_Reset__);
  sub_B77668(v3, v4);
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
  if ( (byte_4388E63 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ServantWaveTurnEvent__Dispose__);
    byte_4388E63 = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    (System_Collections_Generic_List_Enumerator_T__o *)&this->fields.__7__wrap1,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_ServantWaveTurnEvent__Dispose__);
}