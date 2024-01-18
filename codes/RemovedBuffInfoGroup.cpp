void __fastcall RemovedBuffInfoGroup___ctor(RemovedBuffInfoGroup_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v4; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_418AD75 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__RemovedBuffInfo___ctor__, method);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__RemovedBuffInfo__TypeInfo, v3);
    byte_418AD75 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v4 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__RemovedBuffInfo__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v4,
    (const MethodInfo_2E63B98 *)Method_System_Collections_Generic_Dictionary_int__RemovedBuffInfo___ctor__);
  this->fields._servantUniqueIdToRemovedBuffInfoMap_k__BackingField = (struct System_Collections_Generic_Dictionary_int__RemovedBuffInfo__o *)v4;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v4, v5, v6, v7, v8, v9, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RemovedBuffInfoGroup__Register(
        RemovedBuffInfoGroup_o *this,
        int32_t targetServantUniqueId,
        RemovedBuffInfo_o *removedBuffInfo,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__RemovedBuffInfo__o *servantUniqueIdToRemovedBuffInfoMap_k__BackingField; // x0

  if ( (byte_418AD76 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_int__RemovedBuffInfo__set_Item__,
      *(_QWORD *)&targetServantUniqueId);
    byte_418AD76 = 1;
  }
  servantUniqueIdToRemovedBuffInfoMap_k__BackingField = this->fields._servantUniqueIdToRemovedBuffInfoMap_k__BackingField;
  if ( !servantUniqueIdToRemovedBuffInfoMap_k__BackingField )
    sub_B2C434(0LL, *(_QWORD *)&targetServantUniqueId);
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
    (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)servantUniqueIdToRemovedBuffInfoMap_k__BackingField,
    targetServantUniqueId,
    (WarBoardAIRoute_RouteData_o *)removedBuffInfo,
    (const MethodInfo_2E64724 *)Method_System_Collections_Generic_Dictionary_int__RemovedBuffInfo__set_Item__);
}


System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *__fastcall RemovedBuffInfoGroup__RemovedAllBuffEnumerable(
        RemovedBuffInfoGroup_o *this,
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

  if ( (byte_418AD77 & 1) == 0 )
  {
    sub_B2C35C(&RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6_TypeInfo, method);
    byte_418AD77 = 1;
  }
  v3 = sub_B2C42C(RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6_TypeInfo);
  RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6___ctor(
    (RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6_o *)v3,
    -2,
    0LL);
  if ( !v3 )
    sub_B2C434(v4, v5);
  *(_QWORD *)(v3 + 40) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v3 + 40), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *)v3;
}


System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *__fastcall RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable(
        RemovedBuffInfoGroup_o *this,
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

  if ( (byte_418AD78 & 1) == 0 )
  {
    sub_B2C35C(&RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7_TypeInfo, method);
    byte_418AD78 = 1;
  }
  v3 = sub_B2C42C(RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7_TypeInfo);
  RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7___ctor(
    (RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7_o *)v3,
    -2,
    0LL);
  if ( !v3 )
    sub_B2C434(v4, v5);
  *(_QWORD *)(v3 + 40) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v3 + 40), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *)v3;
}


System_Collections_Generic_Dictionary_int__RemovedBuffInfo__o *__fastcall RemovedBuffInfoGroup__get_servantUniqueIdToRemovedBuffInfoMap(
        RemovedBuffInfoGroup_o *this,
        const MethodInfo *method)
{
  return this->fields._servantUniqueIdToRemovedBuffInfoMap_k__BackingField;
}


void __fastcall RemovedBuffInfoGroup__set_servantUniqueIdToRemovedBuffInfoMap(
        RemovedBuffInfoGroup_o *this,
        System_Collections_Generic_Dictionary_int__RemovedBuffInfo__o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._servantUniqueIdToRemovedBuffInfoMap_k__BackingField = value;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6___ctor(
        RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
}


bool __fastcall RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6__MoveNext(
        RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6_o *this,
        const MethodInfo *method)
{
  RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t _1__state; // w8
  struct RemovedBuffInfoGroup_o *_4__this; // x8
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *servantUniqueIdToRemovedBuffInfoMap_k__BackingField; // x0
  struct System_Collections_Generic_Dictionary_Enumerator_int__RemovedBuffInfo__o *p__7__wrap1; // x20
  __int128 v13; // q0
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // q1
  struct System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__o *p__7__wrap2; // x20
  bool result; // w0
  Il2CppObject *value; // x8
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *klass; // x0
  __int128 v19; // q0
  const MethodInfo *v20; // x1
  _BOOL8 v21; // x0
  const MethodInfo *v22; // x1
  struct BattleBuffData_BuffData_o *v23; // x1
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v24; // [xsp+48h] [xbp-38h] BYREF

  v2 = this;
  if ( (byte_4185655 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__RemovedBuffInfo__GetEnumerator__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_int__RemovedBuffInfo__MoveNext__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_int__RemovedBuffInfo__get_Current__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_int__RemovedBuffInfo__get_Value__, v7);
    this = (RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6_o *)sub_B2C35C(
                                                                      &Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__,
                                                                      v8);
    byte_4185655 = 1;
  }
  _1__state = v2->fields.__1__state;
  if ( _1__state == 1 )
  {
    p__7__wrap2 = &v2->fields.__7__wrap2;
    goto LABEL_15;
  }
  if ( _1__state )
    return 0;
  _4__this = v2->fields.__4__this;
  v2->fields.__1__state = -1;
  if ( !_4__this )
    sub_B2C434(this, method);
  servantUniqueIdToRemovedBuffInfoMap_k__BackingField = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)_4__this->fields._servantUniqueIdToRemovedBuffInfoMap_k__BackingField;
  if ( !servantUniqueIdToRemovedBuffInfoMap_k__BackingField )
    sub_B2C434(0LL, method);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
    &v24,
    servantUniqueIdToRemovedBuffInfoMap_k__BackingField,
    (const MethodInfo_2E64D30 *)Method_System_Collections_Generic_Dictionary_int__RemovedBuffInfo__GetEnumerator__);
  p__7__wrap1 = &v2->fields.__7__wrap1;
  v13 = *(_OWORD *)&v24.fields.dictionary;
  current = v24.fields.current;
  *(_QWORD *)&v2->fields.__7__wrap1.fields.getEnumeratorRetType = *(_QWORD *)&v24.fields.getEnumeratorRetType;
  *(_OWORD *)&v2->fields.__7__wrap1.fields.dictionary = v13;
  v2->fields.__7__wrap1.fields.current = current;
  sub_B2C2F8(&v2->fields.__7__wrap1, 0LL);
  v2->fields.__1__state = -3;
  while ( 1 )
  {
    v21 = System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
            (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)p__7__wrap1,
            (const MethodInfo_277DFA8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__RemovedBuffInfo__MoveNext__);
    if ( !v21 )
    {
      RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6____m__Finally1(v2, v22);
      result = 0;
      *(_QWORD *)&p__7__wrap1->fields.getEnumeratorRetType = 0LL;
      *(_OWORD *)&p__7__wrap1->fields.dictionary = 0u;
      p__7__wrap1->fields.current = 0u;
      return result;
    }
    value = v2->fields.__7__wrap1.fields.current.fields.value;
    if ( !value )
      sub_B2C434(v21, v22);
    klass = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)value[1].klass;
    if ( !klass )
      sub_B2C434(0LL, v22);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v24,
      klass,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
    p__7__wrap2 = &v2->fields.__7__wrap2;
    v19 = *(_OWORD *)&v24.fields.dictionary;
    v2->fields.__7__wrap2.fields.current = (struct BattleBuffData_BuffData_o *)v24.fields.current.fields.key;
    *(_OWORD *)&v2->fields.__7__wrap2.fields.list = v19;
    sub_B2C2F8(&v2->fields.__7__wrap2, 0LL);
LABEL_15:
    v2->fields.__1__state = -4;
    if ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           (System_Collections_Generic_List_Enumerator_T__o *)p__7__wrap2,
           (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__) )
    {
      break;
    }
    RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6____m__Finally2(v2, v20);
    p__7__wrap2->fields.list = 0LL;
    *(_QWORD *)&p__7__wrap2->fields.index = 0LL;
    p__7__wrap2->fields.current = 0LL;
    p__7__wrap1 = &v2->fields.__7__wrap1;
  }
  v23 = v2->fields.__7__wrap2.fields.current;
  v2->fields.__2__current = v23;
  sub_B2C2F8(&v2->fields.__2__current, v23);
  result = 1;
  v2->fields.__1__state = 1;
  return result;
}


System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__o *__fastcall RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6__System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__GetEnumerator(
        RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  __int64 v4; // x20
  __int64 CurrentManagedThreadId; // x0
  __int64 v6; // x1
  struct RemovedBuffInfoGroup_o *_4__this; // x1

  if ( (byte_4185658 & 1) == 0 )
  {
    sub_B2C35C(&RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6_TypeInfo, method);
    byte_4185658 = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0LL)) )
  {
    this->fields.__1__state = 0;
  }
  else
  {
    v4 = sub_B2C42C(RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6_TypeInfo);
    System_Object___ctor((Il2CppObject *)v4, 0LL);
    *(_DWORD *)(v4 + 16) = 0;
    CurrentManagedThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
    *(_DWORD *)(v4 + 32) = CurrentManagedThreadId;
    if ( !v4 )
      sub_B2C434(CurrentManagedThreadId, v6);
    _4__this = this->fields.__4__this;
    *(_QWORD *)(v4 + 40) = _4__this;
    sub_B2C2F8(v4 + 40, _4__this);
    return (System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__o *)v4;
  }
  return (System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__o *)this;
}


BattleBuffData_BuffData_o *__fastcall RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6__System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__get_Current(
        RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6__System_Collections_IEnumerator_Reset(
        RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
}


Il2CppObject *__fastcall RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6__System_Collections_IEnumerator_get_Current(
        RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6_o *this,
        const MethodInfo *method)
{
  return (Il2CppObject *)this->fields.__2__current;
}


void __fastcall RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6__System_IDisposable_Dispose(
        RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8

  _1__state = this->fields.__1__state;
  if ( (_1__state & 0xFFFFFFFE) == -4 )
  {
    if ( _1__state != -4 && _1__state != 1 )
      goto LABEL_7;
  }
  else if ( _1__state != 1 )
  {
    return;
  }
  RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6____m__Finally2(this, method);
LABEL_7:
  RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6____m__Finally1(this, method);
}


void __fastcall RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6____m__Finally1(
        RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6_o *this,
        const MethodInfo *method)
{
  if ( (byte_4185656 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_int__RemovedBuffInfo__Dispose__, method);
    byte_4185656 = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&this->fields.__7__wrap1,
    (const MethodInfo_277E114 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__RemovedBuffInfo__Dispose__);
}


void __fastcall RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6____m__Finally2(
        RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6_o *this,
        const MethodInfo *method)
{
  if ( (byte_4185657 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, method);
    byte_4185657 = 1;
  }
  this->fields.__1__state = -3;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    (System_Collections_Generic_List_Enumerator_T__o *)&this->fields.__7__wrap2,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
}


void __fastcall RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7___ctor(
        RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
}


bool __fastcall RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7__MoveNext(
        RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7_o *this,
        const MethodInfo *method)
{
  RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t _1__state; // w8
  struct RemovedBuffInfoGroup_o *_4__this; // x8
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *servantUniqueIdToRemovedBuffInfoMap_k__BackingField; // x0
  struct System_Collections_Generic_Dictionary_Enumerator_int__RemovedBuffInfo__o *p__7__wrap1; // x20
  __int128 v13; // q0
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // q1
  struct System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__o *p__7__wrap2; // x20
  bool result; // w0
  Il2CppObject *value; // x8
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *monitor; // x0
  __int128 v19; // q0
  const MethodInfo *v20; // x1
  _BOOL8 v21; // x0
  const MethodInfo *v22; // x1
  struct BattleBuffData_BuffData_o *v23; // x1
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v24; // [xsp+48h] [xbp-38h] BYREF

  v2 = this;
  if ( (byte_4185659 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__RemovedBuffInfo__GetEnumerator__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_int__RemovedBuffInfo__MoveNext__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_int__RemovedBuffInfo__get_Current__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_int__RemovedBuffInfo__get_Value__, v7);
    this = (RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7_o *)sub_B2C35C(
                                                                          &Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__,
                                                                          v8);
    byte_4185659 = 1;
  }
  _1__state = v2->fields.__1__state;
  if ( _1__state == 1 )
  {
    p__7__wrap2 = &v2->fields.__7__wrap2;
    goto LABEL_15;
  }
  if ( _1__state )
    return 0;
  _4__this = v2->fields.__4__this;
  v2->fields.__1__state = -1;
  if ( !_4__this )
    sub_B2C434(this, method);
  servantUniqueIdToRemovedBuffInfoMap_k__BackingField = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)_4__this->fields._servantUniqueIdToRemovedBuffInfoMap_k__BackingField;
  if ( !servantUniqueIdToRemovedBuffInfoMap_k__BackingField )
    sub_B2C434(0LL, method);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
    &v24,
    servantUniqueIdToRemovedBuffInfoMap_k__BackingField,
    (const MethodInfo_2E64D30 *)Method_System_Collections_Generic_Dictionary_int__RemovedBuffInfo__GetEnumerator__);
  p__7__wrap1 = &v2->fields.__7__wrap1;
  v13 = *(_OWORD *)&v24.fields.dictionary;
  current = v24.fields.current;
  *(_QWORD *)&v2->fields.__7__wrap1.fields.getEnumeratorRetType = *(_QWORD *)&v24.fields.getEnumeratorRetType;
  *(_OWORD *)&v2->fields.__7__wrap1.fields.dictionary = v13;
  v2->fields.__7__wrap1.fields.current = current;
  sub_B2C2F8(&v2->fields.__7__wrap1, 0LL);
  v2->fields.__1__state = -3;
  while ( 1 )
  {
    v21 = System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
            (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)p__7__wrap1,
            (const MethodInfo_277DFA8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__RemovedBuffInfo__MoveNext__);
    if ( !v21 )
    {
      RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7____m__Finally1(v2, v22);
      result = 0;
      *(_QWORD *)&p__7__wrap1->fields.getEnumeratorRetType = 0LL;
      *(_OWORD *)&p__7__wrap1->fields.dictionary = 0u;
      p__7__wrap1->fields.current = 0u;
      return result;
    }
    value = v2->fields.__7__wrap1.fields.current.fields.value;
    if ( !value )
      sub_B2C434(v21, v22);
    monitor = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)value[1].monitor;
    if ( !monitor )
      sub_B2C434(0LL, v22);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v24,
      monitor,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
    p__7__wrap2 = &v2->fields.__7__wrap2;
    v19 = *(_OWORD *)&v24.fields.dictionary;
    v2->fields.__7__wrap2.fields.current = (struct BattleBuffData_BuffData_o *)v24.fields.current.fields.key;
    *(_OWORD *)&v2->fields.__7__wrap2.fields.list = v19;
    sub_B2C2F8(&v2->fields.__7__wrap2, 0LL);
LABEL_15:
    v2->fields.__1__state = -4;
    if ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           (System_Collections_Generic_List_Enumerator_T__o *)p__7__wrap2,
           (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__) )
    {
      break;
    }
    RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7____m__Finally2(v2, v20);
    p__7__wrap2->fields.list = 0LL;
    *(_QWORD *)&p__7__wrap2->fields.index = 0LL;
    p__7__wrap2->fields.current = 0LL;
    p__7__wrap1 = &v2->fields.__7__wrap1;
  }
  v23 = v2->fields.__7__wrap2.fields.current;
  v2->fields.__2__current = v23;
  sub_B2C2F8(&v2->fields.__2__current, v23);
  result = 1;
  v2->fields.__1__state = 1;
  return result;
}


System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__o *__fastcall RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7__System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__GetEnumerator(
        RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  __int64 v4; // x20
  __int64 CurrentManagedThreadId; // x0
  __int64 v6; // x1
  struct RemovedBuffInfoGroup_o *_4__this; // x1

  if ( (byte_418565C & 1) == 0 )
  {
    sub_B2C35C(&RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7_TypeInfo, method);
    byte_418565C = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0LL)) )
  {
    this->fields.__1__state = 0;
  }
  else
  {
    v4 = sub_B2C42C(RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7_TypeInfo);
    System_Object___ctor((Il2CppObject *)v4, 0LL);
    *(_DWORD *)(v4 + 16) = 0;
    CurrentManagedThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
    *(_DWORD *)(v4 + 32) = CurrentManagedThreadId;
    if ( !v4 )
      sub_B2C434(CurrentManagedThreadId, v6);
    _4__this = this->fields.__4__this;
    *(_QWORD *)(v4 + 40) = _4__this;
    sub_B2C2F8(v4 + 40, _4__this);
    return (System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__o *)v4;
  }
  return (System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__o *)this;
}


BattleBuffData_BuffData_o *__fastcall RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7__System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__get_Current(
        RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7__System_Collections_IEnumerator_Reset(
        RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
}


Il2CppObject *__fastcall RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7__System_Collections_IEnumerator_get_Current(
        RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7_o *this,
        const MethodInfo *method)
{
  return (Il2CppObject *)this->fields.__2__current;
}


void __fastcall RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7__System_IDisposable_Dispose(
        RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8

  _1__state = this->fields.__1__state;
  if ( (_1__state & 0xFFFFFFFE) == -4 )
  {
    if ( _1__state != -4 && _1__state != 1 )
      goto LABEL_7;
  }
  else if ( _1__state != 1 )
  {
    return;
  }
  RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7____m__Finally2(this, method);
LABEL_7:
  RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7____m__Finally1(this, method);
}


void __fastcall RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7____m__Finally1(
        RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7_o *this,
        const MethodInfo *method)
{
  if ( (byte_418565A & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_int__RemovedBuffInfo__Dispose__, method);
    byte_418565A = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&this->fields.__7__wrap1,
    (const MethodInfo_277E114 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__RemovedBuffInfo__Dispose__);
}


void __fastcall RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7____m__Finally2(
        RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7_o *this,
        const MethodInfo *method)
{
  if ( (byte_418565B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, method);
    byte_418565B = 1;
  }
  this->fields.__1__state = -3;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    (System_Collections_Generic_List_Enumerator_T__o *)&this->fields.__7__wrap2,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
}