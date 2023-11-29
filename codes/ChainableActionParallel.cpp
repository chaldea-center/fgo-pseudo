void __fastcall ChainableActionParallel___ctor(
        ChainableActionParallel_o *this,
        ChainableActionBase_array *actionArray,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v10; // x21
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_40FCF84 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ChainableActionBase___ctor__, actionArray);
    sub_B16FFC(&System_Collections_Generic_List_ChainableActionBase__TypeInfo, v5);
    byte_40FCF84 = 1;
  }
  ChainableActionBase___ctor((ChainableActionBase_o *)this, (const MethodInfo *)actionArray);
  v10 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B170CC(
                                                                          System_Collections_Generic_List_ChainableActionBase__TypeInfo,
                                                                          v6,
                                                                          v7,
                                                                          v8,
                                                                          v9);
  System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
    v10,
    (System_Collections_Generic_IEnumerable_T__o *)actionArray,
    (const MethodInfo_2F2520C *)Method_System_Collections_Generic_List_ChainableActionBase___ctor__);
  this->fields.sysChainAction = (struct System_Collections_Generic_List_ChainableActionBase__o *)v10;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.sysChainAction,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
}


void __fastcall ChainableActionParallel___ctor_30586412(
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
  __int64 v10; // x2
  ChainableActionBase_o *current; // x20
  System_Action_array *v12; // x21
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  System_Action_o *v17; // x22
  __int64 v18; // x0
  __int64 v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  const MethodInfo *v26; // x2
  ChainableActionBase_c *klass; // x8
  System_Collections_Generic_List_Enumerator_T__o v28; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v29; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_40FCF85 & 1) == 0 )
  {
    sub_B16FFC(&System_Action___TypeInfo, method);
    sub_B16FFC(&System_Action_TypeInfo, v3);
    sub_B16FFC(&Method_ChainableActionParallel_OnOneActionEnded__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ChainableActionBase__Dispose__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ChainableActionBase__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ChainableActionBase__get_Current__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_ChainableActionBase__GetEnumerator__, v8);
    byte_40FCF85 = 1;
  }
  memset(&v29, 0, sizeof(v29));
  sysChainAction = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.sysChainAction;
  this->fields.executeEndCount = 0;
  if ( !sysChainAction )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v28,
    sysChainAction,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ChainableActionBase__GetEnumerator__);
  v29 = v28;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v29,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ChainableActionBase__MoveNext__) )
  {
    current = (ChainableActionBase_o *)v29.fields.current;
    v12 = (System_Action_array *)sub_B17014(System_Action___TypeInfo, 1LL, v10);
    v17 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v13, v14, v15, v16);
    System_Action___ctor(v17, (Il2CppObject *)this, Method_ChainableActionParallel_OnOneActionEnded__, 0LL);
    if ( !v12 )
      sub_B170D4();
    if ( v17 )
    {
      v18 = sub_B170BC(v17, v12->obj.klass->_1.element_class);
      if ( !v18 )
      {
        sub_B170F4(0LL);
        sub_B170A0();
      }
    }
    if ( !v12->max_length )
    {
      sub_B17100(v18, v19, v20);
      sub_B170A0();
    }
    v12->m_Items[0] = v17;
    sub_B16F98((BattleServantConfConponent_o *)v12->m_Items, (System_Int32_array **)v17, v20, v21, v22, v23, v24, v25);
    if ( !current )
      sub_B170D4();
    ChainableActionBase__Final(current, v12, v26);
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
    &v29,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ChainableActionBase__Dispose__);
}


void __fastcall ChainableActionParallel__OnOneActionEnded(ChainableActionParallel_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_ChainableActionBase__o *sysChainAction; // x9
  int32_t v4; // w8

  if ( (byte_40FCF86 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ChainableActionBase__get_Count__, method);
    byte_40FCF86 = 1;
  }
  sysChainAction = this->fields.sysChainAction;
  v4 = this->fields.executeEndCount + 1;
  this->fields.executeEndCount = v4;
  if ( !sysChainAction )
    sub_B170D4();
  if ( sysChainAction->fields._size <= v4 )
    ((void (__fastcall *)(ChainableActionParallel_o *, void *))this->klass->vtable._5_End.method)(
      this,
      this->klass[1]._1.image);
}