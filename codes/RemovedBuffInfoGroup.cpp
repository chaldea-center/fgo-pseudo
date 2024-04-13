void __fastcall RemovedBuffInfoGroup___ctor(RemovedBuffInfoGroup_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42EC556 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__RemovedBuffInfo___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__RemovedBuffInfo__TypeInfo, v5, v6, v7);
    byte_42EC556 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v8 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__RemovedBuffInfo__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v8,
    (const MethodInfo_2F31510 *)Method_System_Collections_Generic_Dictionary_int__RemovedBuffInfo___ctor__);
  this->fields._servantUniqueIdToRemovedBuffInfoMap_k__BackingField = (struct System_Collections_Generic_Dictionary_int__RemovedBuffInfo__o *)v8;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v8, v9, v10, v11, v12, v13, v14);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RemovedBuffInfoGroup__Register(
        RemovedBuffInfoGroup_o *this,
        int32_t targetServantUniqueId,
        RemovedBuffInfo_o *removedBuffInfo,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__RemovedBuffInfo__o *servantUniqueIdToRemovedBuffInfoMap_k__BackingField; // x0

  if ( (byte_42EC557 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__RemovedBuffInfo__set_Item__,
      targetServantUniqueId,
      (_DWORD)removedBuffInfo,
      method);
    byte_42EC557 = 1;
  }
  servantUniqueIdToRemovedBuffInfoMap_k__BackingField = this->fields._servantUniqueIdToRemovedBuffInfoMap_k__BackingField;
  if ( !servantUniqueIdToRemovedBuffInfoMap_k__BackingField )
    sub_B5D69C(0LL, *(_QWORD *)&targetServantUniqueId);
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
    (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)servantUniqueIdToRemovedBuffInfoMap_k__BackingField,
    targetServantUniqueId,
    (WarBoardAIRoute_RouteData_o *)removedBuffInfo,
    (const MethodInfo_2F3209C *)Method_System_Collections_Generic_Dictionary_int__RemovedBuffInfo__set_Item__);
}


System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *__fastcall RemovedBuffInfoGroup__RemovedAllBuffEnumerable(
        RemovedBuffInfoGroup_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42EC558 & 1) == 0 )
  {
    sub_B5D5C4(&RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EC558 = 1;
  }
  v5 = sub_B5D694(RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6_TypeInfo);
  RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6___ctor(
    (RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6_o *)v5,
    -2,
    0LL);
  if ( !v5 )
    sub_B5D69C(v6, v7);
  *(_QWORD *)(v5 + 40) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v5 + 40), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  return (System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *)v5;
}


System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *__fastcall RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable(
        RemovedBuffInfoGroup_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42EC559 & 1) == 0 )
  {
    sub_B5D5C4(&RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EC559 = 1;
  }
  v5 = sub_B5D694(RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7_TypeInfo);
  RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7___ctor(
    (RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7_o *)v5,
    -2,
    0LL);
  if ( !v5 )
    sub_B5D69C(v6, v7);
  *(_QWORD *)(v5 + 40) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v5 + 40), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  return (System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *)v5;
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
  sub_B5D560(
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
  int v2; // w2
  __int64 v3; // x3
  RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int32_t _1__state; // w8
  struct RemovedBuffInfoGroup_o *_4__this; // x8
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *servantUniqueIdToRemovedBuffInfoMap_k__BackingField; // x0
  struct System_Collections_Generic_Dictionary_Enumerator_int__RemovedBuffInfo__o *p__7__wrap1; // x20
  __int128 v27; // q0
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // q1
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  struct System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__o *p__7__wrap2; // x20
  bool result; // w0
  Il2CppObject *value; // x8
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *klass; // x0
  __int128 v39; // q0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  const MethodInfo *v46; // x1
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  _BOOL8 v53; // x0
  const MethodInfo *v54; // x1
  System_Int32_array **v55; // x1
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v56; // [xsp+48h] [xbp-38h] BYREF

  v4 = this;
  if ( (byte_42E7F4A & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__RemovedBuffInfo__GetEnumerator__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__RemovedBuffInfo__MoveNext__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v11, v12, v13);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__RemovedBuffInfo__get_Current__,
      v14,
      v15,
      v16);
    sub_B5D5C4(&Method_System_Collections_Generic_KeyValuePair_int__RemovedBuffInfo__get_Value__, v17, v18, v19);
    this = (RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6_o *)sub_B5D5C4(
                                                                      &Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__,
                                                                      v20,
                                                                      v21,
                                                                      v22);
    byte_42E7F4A = 1;
  }
  _1__state = v4->fields.__1__state;
  if ( _1__state == 1 )
  {
    p__7__wrap2 = &v4->fields.__7__wrap2;
    goto LABEL_15;
  }
  if ( _1__state )
    return 0;
  _4__this = v4->fields.__4__this;
  v4->fields.__1__state = -1;
  if ( !_4__this )
    sub_B5D69C(this, method);
  servantUniqueIdToRemovedBuffInfoMap_k__BackingField = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)_4__this->fields._servantUniqueIdToRemovedBuffInfoMap_k__BackingField;
  if ( !servantUniqueIdToRemovedBuffInfoMap_k__BackingField )
    sub_B5D69C(0LL, method);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
    &v56,
    servantUniqueIdToRemovedBuffInfoMap_k__BackingField,
    (const MethodInfo_2F326A8 *)Method_System_Collections_Generic_Dictionary_int__RemovedBuffInfo__GetEnumerator__);
  p__7__wrap1 = &v4->fields.__7__wrap1;
  v27 = *(_OWORD *)&v56.fields.dictionary;
  current = v56.fields.current;
  *(_QWORD *)&v4->fields.__7__wrap1.fields.getEnumeratorRetType = *(_QWORD *)&v56.fields.getEnumeratorRetType;
  *(_OWORD *)&v4->fields.__7__wrap1.fields.dictionary = v27;
  v4->fields.__7__wrap1.fields.current = current;
  sub_B5D560((BattleServantConfConponent_o *)&v4->fields.__7__wrap1, 0LL, v29, v30, v31, v32, v33, v34);
  v4->fields.__1__state = -3;
  while ( 1 )
  {
    v53 = System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
            (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)p__7__wrap1,
            (const MethodInfo_28A1C74 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__RemovedBuffInfo__MoveNext__);
    if ( !v53 )
    {
      RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6____m__Finally1(v4, v54);
      result = 0;
      *(_QWORD *)&p__7__wrap1->fields.getEnumeratorRetType = 0LL;
      *(_OWORD *)&p__7__wrap1->fields.dictionary = 0u;
      p__7__wrap1->fields.current = 0u;
      return result;
    }
    value = v4->fields.__7__wrap1.fields.current.fields.value;
    if ( !value )
      sub_B5D69C(v53, v54);
    klass = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)value[1].klass;
    if ( !klass )
      sub_B5D69C(0LL, v54);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v56,
      klass,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
    p__7__wrap2 = &v4->fields.__7__wrap2;
    v39 = *(_OWORD *)&v56.fields.dictionary;
    v4->fields.__7__wrap2.fields.current = (struct BattleBuffData_BuffData_o *)v56.fields.current.fields.key;
    *(_OWORD *)&v4->fields.__7__wrap2.fields.list = v39;
    sub_B5D560((BattleServantConfConponent_o *)&v4->fields.__7__wrap2, 0LL, v40, v41, v42, v43, v44, v45);
LABEL_15:
    v4->fields.__1__state = -4;
    if ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           (System_Collections_Generic_List_Enumerator_T__o *)p__7__wrap2,
           (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__) )
    {
      break;
    }
    RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6____m__Finally2(v4, v46);
    p__7__wrap2->fields.list = 0LL;
    *(_QWORD *)&p__7__wrap2->fields.index = 0LL;
    p__7__wrap2->fields.current = 0LL;
    p__7__wrap1 = &v4->fields.__7__wrap1;
  }
  v55 = (System_Int32_array **)v4->fields.__7__wrap2.fields.current;
  v4->fields.__2__current = (struct BattleBuffData_BuffData_o *)v55;
  sub_B5D560((BattleServantConfConponent_o *)&v4->fields.__2__current, v55, v47, v48, v49, v50, v51, v52);
  result = 1;
  v4->fields.__1__state = 1;
  return result;
}


System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__o *__fastcall RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6__System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__GetEnumerator(
        RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int32_t l__initialThreadId; // w20
  __int64 v6; // x20
  __int64 CurrentManagedThreadId; // x0
  __int64 v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Int32_array **_4__this; // x1

  if ( (byte_42E7F4D & 1) == 0 )
  {
    sub_B5D5C4(&RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7F4D = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0LL)) )
  {
    this->fields.__1__state = 0;
  }
  else
  {
    v6 = sub_B5D694(RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6_TypeInfo);
    System_Object___ctor((Il2CppObject *)v6, 0LL);
    *(_DWORD *)(v6 + 16) = 0;
    CurrentManagedThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
    *(_DWORD *)(v6 + 32) = CurrentManagedThreadId;
    if ( !v6 )
      sub_B5D69C(CurrentManagedThreadId, v8);
    _4__this = (System_Int32_array **)this->fields.__4__this;
    *(_QWORD *)(v6 + 40) = _4__this;
    sub_B5D560((BattleServantConfConponent_o *)(v6 + 40), _4__this, v9, v10, v11, v12, v13, v14);
    return (System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__o *)v6;
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E7F4B & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__RemovedBuffInfo__Dispose__,
      (_DWORD)method,
      v2,
      v3);
    byte_42E7F4B = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&this->fields.__7__wrap1,
    (const MethodInfo_28A1DE0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__RemovedBuffInfo__Dispose__);
}


void __fastcall RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6____m__Finally2(
        RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E7F4C & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__,
      (_DWORD)method,
      v2,
      v3);
    byte_42E7F4C = 1;
  }
  this->fields.__1__state = -3;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    (System_Collections_Generic_List_Enumerator_T__o *)&this->fields.__7__wrap2,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
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
  int v2; // w2
  __int64 v3; // x3
  RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int32_t _1__state; // w8
  struct RemovedBuffInfoGroup_o *_4__this; // x8
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *servantUniqueIdToRemovedBuffInfoMap_k__BackingField; // x0
  struct System_Collections_Generic_Dictionary_Enumerator_int__RemovedBuffInfo__o *p__7__wrap1; // x20
  __int128 v27; // q0
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // q1
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  struct System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__o *p__7__wrap2; // x20
  bool result; // w0
  Il2CppObject *value; // x8
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *monitor; // x0
  __int128 v39; // q0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  const MethodInfo *v46; // x1
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  _BOOL8 v53; // x0
  const MethodInfo *v54; // x1
  System_Int32_array **v55; // x1
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v56; // [xsp+48h] [xbp-38h] BYREF

  v4 = this;
  if ( (byte_42E7F4E & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__RemovedBuffInfo__GetEnumerator__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__RemovedBuffInfo__MoveNext__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v11, v12, v13);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__RemovedBuffInfo__get_Current__,
      v14,
      v15,
      v16);
    sub_B5D5C4(&Method_System_Collections_Generic_KeyValuePair_int__RemovedBuffInfo__get_Value__, v17, v18, v19);
    this = (RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7_o *)sub_B5D5C4(
                                                                          &Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__,
                                                                          v20,
                                                                          v21,
                                                                          v22);
    byte_42E7F4E = 1;
  }
  _1__state = v4->fields.__1__state;
  if ( _1__state == 1 )
  {
    p__7__wrap2 = &v4->fields.__7__wrap2;
    goto LABEL_15;
  }
  if ( _1__state )
    return 0;
  _4__this = v4->fields.__4__this;
  v4->fields.__1__state = -1;
  if ( !_4__this )
    sub_B5D69C(this, method);
  servantUniqueIdToRemovedBuffInfoMap_k__BackingField = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)_4__this->fields._servantUniqueIdToRemovedBuffInfoMap_k__BackingField;
  if ( !servantUniqueIdToRemovedBuffInfoMap_k__BackingField )
    sub_B5D69C(0LL, method);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
    &v56,
    servantUniqueIdToRemovedBuffInfoMap_k__BackingField,
    (const MethodInfo_2F326A8 *)Method_System_Collections_Generic_Dictionary_int__RemovedBuffInfo__GetEnumerator__);
  p__7__wrap1 = &v4->fields.__7__wrap1;
  v27 = *(_OWORD *)&v56.fields.dictionary;
  current = v56.fields.current;
  *(_QWORD *)&v4->fields.__7__wrap1.fields.getEnumeratorRetType = *(_QWORD *)&v56.fields.getEnumeratorRetType;
  *(_OWORD *)&v4->fields.__7__wrap1.fields.dictionary = v27;
  v4->fields.__7__wrap1.fields.current = current;
  sub_B5D560((BattleServantConfConponent_o *)&v4->fields.__7__wrap1, 0LL, v29, v30, v31, v32, v33, v34);
  v4->fields.__1__state = -3;
  while ( 1 )
  {
    v53 = System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
            (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)p__7__wrap1,
            (const MethodInfo_28A1C74 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__RemovedBuffInfo__MoveNext__);
    if ( !v53 )
    {
      RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7____m__Finally1(v4, v54);
      result = 0;
      *(_QWORD *)&p__7__wrap1->fields.getEnumeratorRetType = 0LL;
      *(_OWORD *)&p__7__wrap1->fields.dictionary = 0u;
      p__7__wrap1->fields.current = 0u;
      return result;
    }
    value = v4->fields.__7__wrap1.fields.current.fields.value;
    if ( !value )
      sub_B5D69C(v53, v54);
    monitor = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)value[1].monitor;
    if ( !monitor )
      sub_B5D69C(0LL, v54);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v56,
      monitor,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
    p__7__wrap2 = &v4->fields.__7__wrap2;
    v39 = *(_OWORD *)&v56.fields.dictionary;
    v4->fields.__7__wrap2.fields.current = (struct BattleBuffData_BuffData_o *)v56.fields.current.fields.key;
    *(_OWORD *)&v4->fields.__7__wrap2.fields.list = v39;
    sub_B5D560((BattleServantConfConponent_o *)&v4->fields.__7__wrap2, 0LL, v40, v41, v42, v43, v44, v45);
LABEL_15:
    v4->fields.__1__state = -4;
    if ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           (System_Collections_Generic_List_Enumerator_T__o *)p__7__wrap2,
           (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__) )
    {
      break;
    }
    RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7____m__Finally2(v4, v46);
    p__7__wrap2->fields.list = 0LL;
    *(_QWORD *)&p__7__wrap2->fields.index = 0LL;
    p__7__wrap2->fields.current = 0LL;
    p__7__wrap1 = &v4->fields.__7__wrap1;
  }
  v55 = (System_Int32_array **)v4->fields.__7__wrap2.fields.current;
  v4->fields.__2__current = (struct BattleBuffData_BuffData_o *)v55;
  sub_B5D560((BattleServantConfConponent_o *)&v4->fields.__2__current, v55, v47, v48, v49, v50, v51, v52);
  result = 1;
  v4->fields.__1__state = 1;
  return result;
}


System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__o *__fastcall RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7__System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__GetEnumerator(
        RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int32_t l__initialThreadId; // w20
  __int64 v6; // x20
  __int64 CurrentManagedThreadId; // x0
  __int64 v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Int32_array **_4__this; // x1

  if ( (byte_42E7F51 & 1) == 0 )
  {
    sub_B5D5C4(&RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7F51 = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0LL)) )
  {
    this->fields.__1__state = 0;
  }
  else
  {
    v6 = sub_B5D694(RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7_TypeInfo);
    System_Object___ctor((Il2CppObject *)v6, 0LL);
    *(_DWORD *)(v6 + 16) = 0;
    CurrentManagedThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
    *(_DWORD *)(v6 + 32) = CurrentManagedThreadId;
    if ( !v6 )
      sub_B5D69C(CurrentManagedThreadId, v8);
    _4__this = (System_Int32_array **)this->fields.__4__this;
    *(_QWORD *)(v6 + 40) = _4__this;
    sub_B5D560((BattleServantConfConponent_o *)(v6 + 40), _4__this, v9, v10, v11, v12, v13, v14);
    return (System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__o *)v6;
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E7F4F & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_int__RemovedBuffInfo__Dispose__,
      (_DWORD)method,
      v2,
      v3);
    byte_42E7F4F = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&this->fields.__7__wrap1,
    (const MethodInfo_28A1DE0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__RemovedBuffInfo__Dispose__);
}


void __fastcall RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7____m__Finally2(
        RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E7F50 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__,
      (_DWORD)method,
      v2,
      v3);
    byte_42E7F50 = 1;
  }
  this->fields.__1__state = -3;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    (System_Collections_Generic_List_Enumerator_T__o *)&this->fields.__7__wrap2,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
}