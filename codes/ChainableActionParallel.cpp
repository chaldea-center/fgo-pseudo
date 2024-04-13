void __fastcall ChainableActionParallel___ctor(
        ChainableActionParallel_o *this,
        ChainableActionBase_array *actionArray,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v9; // x21
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_42EB6C7 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ChainableActionBase___ctor__,
      (_DWORD)actionArray,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&System_Collections_Generic_List_ChainableActionBase__TypeInfo, v6, v7, v8);
    byte_42EB6C7 = 1;
  }
  ChainableActionBase___ctor((ChainableActionBase_o *)this, (const MethodInfo *)actionArray);
  v9 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B5D694(System_Collections_Generic_List_ChainableActionBase__TypeInfo);
  System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
    v9,
    (System_Collections_Generic_IEnumerable_T__o *)actionArray,
    (const MethodInfo_30564F4 *)Method_System_Collections_Generic_List_ChainableActionBase___ctor__);
  this->fields.sysChainAction = (struct System_Collections_Generic_List_ChainableActionBase__o *)v9;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.sysChainAction,
    (System_Int32_array **)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
}


void __fastcall ChainableActionParallel___ctor_30552664(
        ChainableActionParallel_o *this,
        System_Action_Action__array *actions,
        const MethodInfo *method)
{
  ChainableActionBase_array *v4; // x1
  const MethodInfo *v5; // x2

  v4 = (ChainableActionBase_array *)SimpleChainableAction__ConvertToChainableActionArray(actions, 0LL);
  ChainableActionParallel___ctor(this, v4, v5);
}


void __fastcall ChainableActionParallel__ExecuteOnDetail(ChainableActionParallel_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
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
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *sysChainAction; // x0
  ChainableActionBase_o *current; // x20
  System_Action_array *v25; // x21
  System_Action_o *v26; // x22
  __int64 v27; // x0
  __int64 v28; // x1
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  __int64 v35; // x0
  __int64 v36; // x1
  const MethodInfo *v37; // x2
  ChainableActionBase_c *klass; // x8
  __int64 v39; // x0
  __int64 v40; // x0
  System_Collections_Generic_List_Enumerator_T__o v41; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v42; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_42EB6C8 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action___TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_ChainableActionParallel_OnOneActionEnded__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ChainableActionBase__Dispose__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ChainableActionBase__MoveNext__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ChainableActionBase__get_Current__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ChainableActionBase__GetEnumerator__, v20, v21, v22);
    byte_42EB6C8 = 1;
  }
  memset(&v42, 0, sizeof(v42));
  sysChainAction = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.sysChainAction;
  this->fields.executeEndCount = 0;
  if ( !sysChainAction )
    sub_B5D69C(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v41,
    sysChainAction,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ChainableActionBase__GetEnumerator__);
  v42 = v41;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v42,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ChainableActionBase__MoveNext__) )
  {
    current = (ChainableActionBase_o *)v42.fields.current;
    v25 = (System_Action_array *)sub_B5D5DC(System_Action___TypeInfo, 1LL);
    v26 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v26, (Il2CppObject *)this, Method_ChainableActionParallel_OnOneActionEnded__, 0LL);
    if ( !v25 )
      sub_B5D69C(v27, v28);
    if ( v26 )
    {
      v27 = sub_B5D684(v26, v25->obj.klass->_1.element_class);
      if ( !v27 )
      {
        v40 = sub_B5D6BC(0LL);
        sub_B5D668(v40, 0LL);
      }
    }
    if ( !v25->max_length )
    {
      v39 = sub_B5D6C8(v27);
      sub_B5D668(v39, 0LL);
    }
    v25->m_Items[0] = v26;
    sub_B5D560((BattleServantConfConponent_o *)v25->m_Items, (System_Int32_array **)v26, v29, v30, v31, v32, v33, v34);
    if ( !current )
      sub_B5D69C(v35, v36);
    ChainableActionBase__Final(current, v25, v37);
    if ( !current->fields._IsExecuted_k__BackingField )
    {
      klass = current->klass;
      current->fields._IsExecuted_k__BackingField = 1;
      ((void (__fastcall *)(ChainableActionBase_o *, Il2CppMethodPointer))klass->vtable._4_unknown.method)(
        current,
        klass->vtable._5_End.methodPtr);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v42,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ChainableActionBase__Dispose__);
}


void __fastcall ChainableActionParallel__OnOneActionEnded(ChainableActionParallel_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  ChainableActionParallel_o *v4; // x19
  struct System_Collections_Generic_List_ChainableActionBase__o *sysChainAction; // x9
  int v6; // w8

  v4 = this;
  if ( (byte_42EB6C9 & 1) == 0 )
  {
    this = (ChainableActionParallel_o *)sub_B5D5C4(
                                          &Method_System_Collections_Generic_List_ChainableActionBase__get_Count__,
                                          (_DWORD)method,
                                          v2,
                                          v3);
    byte_42EB6C9 = 1;
  }
  sysChainAction = v4->fields.sysChainAction;
  v6 = v4->fields.executeEndCount + 1;
  v4->fields.executeEndCount = v6;
  if ( !sysChainAction )
    sub_B5D69C(this, method);
  if ( sysChainAction->fields._size <= v6 )
    ((void (__fastcall *)(ChainableActionParallel_o *, void *))v4->klass->vtable._5_End.method)(
      v4,
      v4->klass[1]._1.image);
}