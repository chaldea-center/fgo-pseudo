void __fastcall ChainableActionParallel___ctor(
        ChainableActionParallel_o *this,
        ChainableActionBase_array *actionArray,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v6; // x21
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_418A10C & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ChainableActionBase___ctor__, actionArray);
    sub_B2C35C(&System_Collections_Generic_List_ChainableActionBase__TypeInfo, v5);
    byte_418A10C = 1;
  }
  ChainableActionBase___ctor((ChainableActionBase_o *)this, (const MethodInfo *)actionArray);
  v6 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B2C42C(System_Collections_Generic_List_ChainableActionBase__TypeInfo);
  System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
    v6,
    (System_Collections_Generic_IEnumerable_T__o *)actionArray,
    (const MethodInfo_2EF3994 *)Method_System_Collections_Generic_List_ChainableActionBase___ctor__);
  this->fields.sysChainAction = (struct System_Collections_Generic_List_ChainableActionBase__o *)v6;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.sysChainAction,
    (System_Int32_array **)v6,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
}


void __fastcall ChainableActionParallel___ctor_29458636(
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *sysChainAction; // x0
  ChainableActionBase_o *current; // x20
  System_Action_array *v11; // x21
  System_Action_o *v12; // x22
  __int64 v13; // x0
  __int64 v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  __int64 v21; // x0
  __int64 v22; // x1
  const MethodInfo *v23; // x2
  ChainableActionBase_c *klass; // x8
  __int64 v25; // x0
  __int64 v26; // x0
  System_Collections_Generic_List_Enumerator_T__o v27; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v28; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_418A10D & 1) == 0 )
  {
    sub_B2C35C(&System_Action___TypeInfo, method);
    sub_B2C35C(&System_Action_TypeInfo, v3);
    sub_B2C35C(&Method_ChainableActionParallel_OnOneActionEnded__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ChainableActionBase__Dispose__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ChainableActionBase__MoveNext__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ChainableActionBase__get_Current__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_ChainableActionBase__GetEnumerator__, v8);
    byte_418A10D = 1;
  }
  memset(&v28, 0, sizeof(v28));
  sysChainAction = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.sysChainAction;
  this->fields.executeEndCount = 0;
  if ( !sysChainAction )
    sub_B2C434(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v27,
    sysChainAction,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ChainableActionBase__GetEnumerator__);
  v28 = v27;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v28,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ChainableActionBase__MoveNext__) )
  {
    current = (ChainableActionBase_o *)v28.fields.current;
    v11 = (System_Action_array *)sub_B2C374(System_Action___TypeInfo, 1LL);
    v12 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v12, (Il2CppObject *)this, Method_ChainableActionParallel_OnOneActionEnded__, 0LL);
    if ( !v11 )
      sub_B2C434(v13, v14);
    if ( v12 )
    {
      v13 = sub_B2C41C(v12, v11->obj.klass->_1.element_class);
      if ( !v13 )
      {
        v26 = sub_B2C454(0LL);
        sub_B2C400(v26, 0LL);
      }
    }
    if ( !v11->max_length )
    {
      v25 = sub_B2C460(v13);
      sub_B2C400(v25, 0LL);
    }
    v11->m_Items[0] = v12;
    sub_B2C2F8((BattleServantConfConponent_o *)v11->m_Items, (System_Int32_array **)v12, v15, v16, v17, v18, v19, v20);
    if ( !current )
      sub_B2C434(v21, v22);
    ChainableActionBase__Final(current, v11, v23);
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
    &v28,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ChainableActionBase__Dispose__);
}


void __fastcall ChainableActionParallel__OnOneActionEnded(ChainableActionParallel_o *this, const MethodInfo *method)
{
  ChainableActionParallel_o *v2; // x19
  struct System_Collections_Generic_List_ChainableActionBase__o *sysChainAction; // x9
  int v4; // w8

  v2 = this;
  if ( (byte_418A10E & 1) == 0 )
  {
    this = (ChainableActionParallel_o *)sub_B2C35C(
                                          &Method_System_Collections_Generic_List_ChainableActionBase__get_Count__,
                                          method);
    byte_418A10E = 1;
  }
  sysChainAction = v2->fields.sysChainAction;
  v4 = v2->fields.executeEndCount + 1;
  v2->fields.executeEndCount = v4;
  if ( !sysChainAction )
    sub_B2C434(this, method);
  if ( sysChainAction->fields._size <= v4 )
    ((void (__fastcall *)(ChainableActionParallel_o *, void *))v2->klass->vtable._5_End.method)(
      v2,
      v2->klass[1]._1.image);
}