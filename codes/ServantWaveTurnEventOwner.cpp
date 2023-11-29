void __fastcall ServantWaveTurnEventOwner___ctor(ServantWaveTurnEventOwner_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_40FCB24 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent____ctor__, method);
    sub_B16FFC(&System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___TypeInfo, v6);
    byte_40FCB24 = 1;
  }
  v7 = (System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)sub_B170CC(
                                                                                      System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___TypeInfo,
                                                                                      method,
                                                                                      v2,
                                                                                      v3,
                                                                                      v4);
  System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData____ctor(
    v7,
    (const MethodInfo_2E11F60 *)Method_System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent____ctor__);
  this->fields.servantWaveTurnEventDict = (struct System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___o *)v7;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v7, v8, v9, v10, v11, v12, v13);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantWaveTurnEventOwner__Add(
        ServantWaveTurnEventOwner_o *this,
        ServantWaveTurnEvent_o *ev,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_Collections_Generic_List_ServantWaveTurnEvent__o *WaveTurnEventDictValue; // x0

  if ( (byte_40FCB22 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantWaveTurnEvent__Add__, ev);
    byte_40FCB22 = 1;
  }
  if ( !ev
    || (WaveTurnEventDictValue = ServantWaveTurnEventOwner__GetOrCreateWaveTurnEventDictValue(
                                   this,
                                   ev->fields._Wave_k__BackingField,
                                   ev->fields._Turn_k__BackingField,
                                   v3)) == 0LL )
  {
    sub_B170D4();
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)WaveTurnEventDictValue,
    (EventMissionProgressRequest_Argument_ProgressData_o *)ev,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ServantWaveTurnEvent__Add__);
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
  __int64 v4; // x4
  __int64 v8; // x22
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_40FCB21 & 1) == 0 )
  {
    sub_B16FFC(&ServantWaveTurnEventOwner__EventEnumerator_d__1_TypeInfo, *(_QWORD *)&wave);
    byte_40FCB21 = 1;
  }
  v8 = sub_B170CC(
         ServantWaveTurnEventOwner__EventEnumerator_d__1_TypeInfo,
         *(_QWORD *)&wave,
         *(_QWORD *)&turn,
         method,
         v4);
  ServantWaveTurnEventOwner__EventEnumerator_d__1___ctor(
    (ServantWaveTurnEventOwner__EventEnumerator_d__1_o *)v8,
    -2,
    0LL);
  if ( !v8 )
    sub_B170D4();
  *(_QWORD *)(v8 + 40) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v8 + 40), (System_Int32_array **)this, v9, v10, v11, v12, v13, v14);
  *(_DWORD *)(v8 + 52) = wave;
  *(_DWORD *)(v8 + 60) = turn;
  return (System_Collections_Generic_IEnumerable_ServantWaveTurnEvent__o *)v8;
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
  __int64 v15; // x3
  __int64 v16; // x4
  struct System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___o *v17; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x22
  System_Collections_Generic_Dictionary_TKey__TValue__o *v19; // x0

  if ( (byte_40FCB23 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___ContainsKey__,
      *(_QWORD *)&wave);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___get_Item__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___set_Item__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantWaveTurnEvent___ctor__, v9);
    sub_B16FFC(&System_Collections_Generic_List_ServantWaveTurnEvent__TypeInfo, v10);
    byte_40FCB23 = 1;
  }
  servantWaveTurnEventDict = this->fields.servantWaveTurnEventDict;
  if ( !servantWaveTurnEventDict )
    goto LABEL_9;
  v12 = wave + 100 * turn;
  if ( !System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___ContainsKey(
          (System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)servantWaveTurnEventDict,
          v12,
          (const MethodInfo_2E12D84 *)Method_System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___ContainsKey__) )
  {
    v17 = this->fields.servantWaveTurnEventDict;
    v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                    System_Collections_Generic_List_ServantWaveTurnEvent__TypeInfo,
                                                                                                    v13,
                                                                                                    v14,
                                                                                                    v15,
                                                                                                    v16);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v18,
      (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ServantWaveTurnEvent___ctor__);
    if ( !v17 )
      goto LABEL_9;
    System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData___set_Item(
      (System_Collections_Generic_Dictionary_long__WarBoardAIRoute_TargetData__o *)v17,
      v12,
      (WarBoardAIRoute_TargetData_o *)v18,
      (const MethodInfo_2E12AE8 *)Method_System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___set_Item__);
  }
  v19 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.servantWaveTurnEventDict;
  if ( !v19 )
LABEL_9:
    sub_B170D4();
  return (System_Collections_Generic_List_ServantWaveTurnEvent__o *)System_Collections_Generic_Dictionary_long__object___get_Item(
                                                                      v19,
                                                                      v12,
                                                                      (const MethodInfo_2E12A4C *)Method_System_Collections_Generic_Dictionary_long__List_ServantWaveTurnEvent___get_Item__);
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
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  const MethodInfo *v16; // x1
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  struct ServantWaveTurnEvent_o *current; // x1
  bool result; // w0
  System_Collections_Generic_List_Enumerator_T__o v25; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_40F7678 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantWaveTurnEvent__MoveNext__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantWaveTurnEvent__get_Current__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantWaveTurnEvent__GetEnumerator__, v4);
    byte_40F7678 = 1;
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
      sub_B170D4();
    WaveTurnEventDictValue = ServantWaveTurnEventOwner__GetOrCreateWaveTurnEventDictValue(
                               _4__this,
                               this->fields.wave,
                               this->fields.turn,
                               0LL);
    if ( !WaveTurnEventDictValue )
      sub_B170D4();
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v25,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)WaveTurnEventDictValue,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ServantWaveTurnEvent__GetEnumerator__);
    p__7__wrap1 = &this->fields.__7__wrap1;
    v9 = *(_OWORD *)&v25.fields.list;
    this->fields.__7__wrap1.fields.current = (struct ServantWaveTurnEvent_o *)v25.fields.current;
    *(_OWORD *)&this->fields.__7__wrap1.fields.list = v9;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.__7__wrap1, 0LL, v10, v11, v12, v13, v14, v15);
  }
  this->fields.__1__state = -3;
  if ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
         (System_Collections_Generic_List_Enumerator_T__o *)p__7__wrap1,
         (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ServantWaveTurnEvent__MoveNext__) )
  {
    current = this->fields.__7__wrap1.fields.current;
    this->fields.__2__current = current;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__2__current,
      (System_Int32_array **)current,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
    result = 1;
    this->fields.__1__state = 1;
  }
  else
  {
    ServantWaveTurnEventOwner__EventEnumerator_d__1____m__Finally1(this, v16);
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
  __int64 v3; // x3
  __int64 v4; // x4
  int32_t l__initialThreadId; // w20
  ServantWaveTurnEventOwner__EventEnumerator_d__1_o *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_Int32_array **_4__this; // x1
  System_Collections_Generic_IEnumerator_ServantWaveTurnEvent__o *result; // x0

  if ( (byte_40F767A & 1) == 0 )
  {
    sub_B16FFC(&ServantWaveTurnEventOwner__EventEnumerator_d__1_TypeInfo, method);
    byte_40F767A = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0LL)) )
  {
    this->fields.__1__state = 0;
    v7 = this;
  }
  else
  {
    v7 = (ServantWaveTurnEventOwner__EventEnumerator_d__1_o *)sub_B170CC(
                                                                ServantWaveTurnEventOwner__EventEnumerator_d__1_TypeInfo,
                                                                method,
                                                                v2,
                                                                v3,
                                                                v4);
    System_Object___ctor((Il2CppObject *)v7, 0LL);
    v7->fields.__1__state = 0;
    v7->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
    if ( !v7 )
      sub_B170D4();
    _4__this = (System_Int32_array **)this->fields.__4__this;
    v7->fields.__4__this = (struct ServantWaveTurnEventOwner_o *)_4__this;
    sub_B16F98((BattleServantConfConponent_o *)&v7->fields.__4__this, _4__this, v8, v9, v10, v11, v12, v13);
  }
  result = (System_Collections_Generic_IEnumerator_ServantWaveTurnEvent__o *)v7;
  v7->fields.wave = this->fields.__3__wave;
  v7->fields.turn = this->fields.__3__turn;
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
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_ServantWaveTurnEventOwner__EventEnumerator_d__1_System_Collections_IEnumerator_Reset__);
  sub_B170A0();
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
  if ( (byte_40F7679 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ServantWaveTurnEvent__Dispose__, method);
    byte_40F7679 = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    (System_Collections_Generic_List_Enumerator_T__o *)&this->fields.__7__wrap1,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ServantWaveTurnEvent__Dispose__);
}