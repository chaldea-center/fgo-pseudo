void __fastcall ChainableActionParallel___ctor(
        ChainableActionParallel_o *this,
        ChainableActionBase_array *actionArray,
        const MethodInfo *method)
{
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v5; // x21
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_438E464 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_ChainableActionBase___ctor__);
    sub_B775C4(&System_Collections_Generic_List_ChainableActionBase__TypeInfo);
    byte_438E464 = 1;
  }
  ChainableActionBase___ctor((ChainableActionBase_o *)this, (const MethodInfo *)actionArray);
  v5 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B77694(System_Collections_Generic_List_ChainableActionBase__TypeInfo);
  System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
    v5,
    (System_Collections_Generic_IEnumerable_T__o *)actionArray,
    (const MethodInfo_30527CC *)Method_System_Collections_Generic_List_ChainableActionBase___ctor__);
  this->fields.sysChainAction = (struct System_Collections_Generic_List_ChainableActionBase__o *)v5;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.sysChainAction,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
}


void __fastcall ChainableActionParallel___ctor_31166136(
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
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *sysChainAction; // x0
  ChainableActionBase_o *current; // x20
  System_Action_array *v5; // x21
  System_Action_o *v6; // x22
  __int64 v7; // x0
  __int64 v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  __int64 v15; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x2
  ChainableActionBase_c *klass; // x8
  __int64 v19; // x0
  __int64 v20; // x0
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_438E465 & 1) == 0 )
  {
    sub_B775C4(&System_Action___TypeInfo);
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_ChainableActionParallel_OnOneActionEnded__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ChainableActionBase__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ChainableActionBase__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ChainableActionBase__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_ChainableActionBase__GetEnumerator__);
    byte_438E465 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  sysChainAction = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.sysChainAction;
  this->fields.executeEndCount = 0;
  if ( !sysChainAction )
    sub_B7769C(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v21,
    sysChainAction,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_ChainableActionBase__GetEnumerator__);
  v22 = v21;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v22,
            (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_ChainableActionBase__MoveNext__) )
  {
    current = (ChainableActionBase_o *)v22.fields.current;
    v5 = (System_Action_array *)sub_B775DC(System_Action___TypeInfo, 1LL);
    v6 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(v6, (Il2CppObject *)this, Method_ChainableActionParallel_OnOneActionEnded__, 0LL);
    if ( !v5 )
      sub_B7769C(v7, v8);
    if ( v6 )
    {
      v7 = sub_B77684(v6, v5->obj.klass->_1.element_class);
      if ( !v7 )
      {
        v20 = sub_B776BC(0LL);
        sub_B77668(v20, 0LL);
      }
    }
    if ( !v5->max_length )
    {
      v19 = sub_B776C8(v7);
      sub_B77668(v19, 0LL);
    }
    v5->m_Items[0] = v6;
    sub_B77560((BattleServantConfConponent_o *)v5->m_Items, (System_Int32_array **)v6, v9, v10, v11, v12, v13, v14);
    if ( !current )
      sub_B7769C(v15, v16);
    ChainableActionBase__Final(current, v5, v17);
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
    &v22,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_ChainableActionBase__Dispose__);
}


void __fastcall ChainableActionParallel__OnOneActionEnded(ChainableActionParallel_o *this, const MethodInfo *method)
{
  ChainableActionParallel_o *v2; // x19
  struct System_Collections_Generic_List_ChainableActionBase__o *sysChainAction; // x9
  int v4; // w8

  v2 = this;
  if ( (byte_438E466 & 1) == 0 )
  {
    this = (ChainableActionParallel_o *)sub_B775C4(&Method_System_Collections_Generic_List_ChainableActionBase__get_Count__);
    byte_438E466 = 1;
  }
  sysChainAction = v2->fields.sysChainAction;
  v4 = v2->fields.executeEndCount + 1;
  v2->fields.executeEndCount = v4;
  if ( !sysChainAction )
    sub_B7769C(this, method);
  if ( sysChainAction->fields._size <= v4 )
    ((void (__fastcall *)(ChainableActionParallel_o *, void *))v2->klass->vtable._5_End.method)(
      v2,
      v2->klass[1]._1.image);
}