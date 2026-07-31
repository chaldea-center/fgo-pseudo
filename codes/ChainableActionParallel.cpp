void ChainableActionParallel___ctor(
        ChainableActionParallel_o *this,
        ChainableActionBase_array *actionArray,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_593CBE9 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_ChainableActionBase___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_ChainableActionBase__TypeInfo);
    byte_593CBE9 = 1;
  }
  ChainableActionBase___ctor((ChainableActionBase_o *)this, (const MethodInfo *)actionArray);
  v5 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ChainableActionBase__TypeInfo);
  System_Collections_Generic_List_object____ctor_71627776(
    v5,
    (System_Collections_Generic_IEnumerable_T__o *)actionArray,
    (const MethodInfo_444F400 *)Method_System_Collections_Generic_List_ChainableActionBase___ctor__);
  this->fields.sysChainAction = (struct System_Collections_Generic_List_ChainableActionBase__o *)v5;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.sysChainAction, (int32_t)v5, v6, v7, v8, v9, v10, v11);
}


void ChainableActionParallel___ctor_55903544(
        ChainableActionParallel_o *this,
        System_Action_Action__array *actions,
        const MethodInfo *method)
{
  ChainableActionBase_array *v4; // x1
  const MethodInfo *v5; // x2

  v4 = (ChainableActionBase_array *)SimpleChainableAction__ConvertToChainableActionArray(
                                      actions,
                                      (const MethodInfo *)actions);
  ChainableActionParallel___ctor(this, v4, v5);
}


void ChainableActionParallel__ExecuteOnDetail(ChainableActionParallel_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *sysChainAction; // x0
  ChainableActionBase_o *current; // x20
  __int64 v5; // x21
  System_Action_o *v6; // x22
  __int64 v7; // x0
  __int64 v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  const MethodInfo *v15; // x2
  ChainableActionBase_c *klass; // x8
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_593CBEA & 1) == 0 )
  {
    sub_21FFC50(&System_Action___TypeInfo);
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_ChainableActionParallel_OnOneActionEnded__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ChainableActionBase__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ChainableActionBase__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ChainableActionBase__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ChainableActionBase__GetEnumerator__);
    byte_593CBEA = 1;
  }
  sysChainAction = (System_Collections_Generic_List_object__o *)this->fields.sysChainAction;
  memset(&v18, 0, sizeof(v18));
  this->fields.executeEndCount = 0;
  if ( !sysChainAction )
    sub_21FFECC(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v17,
    sysChainAction,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_ChainableActionBase__GetEnumerator__);
  v18 = v17;
  v17.fields._list = 0;
  *(_QWORD *)&v17.fields._index = &v18;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v18,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_ChainableActionBase__MoveNext__) )
  {
    current = (ChainableActionBase_o *)v18.fields._current;
    v5 = sub_21FFD10(System_Action___TypeInfo, 1);
    v6 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(v6, (Il2CppObject *)this, Method_ChainableActionParallel_OnOneActionEnded__, 0);
    if ( !v5 )
      goto LABEL_12;
    if ( !*(_DWORD *)(v5 + 24) )
      sub_21FFED4(v7);
    *(_QWORD *)(v5 + 32) = v6;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)v6, v9, v10, v11, v12, v13, v14);
    if ( !current )
LABEL_12:
      sub_21FFECC(v7, v8);
    ChainableActionBase__Final(current, (System_Action_array *)v5, v15);
    if ( !current->fields._IsExecuted_k__BackingField )
    {
      klass = current->klass;
      current->fields._IsExecuted_k__BackingField = 1;
      ((void (__fastcall *)(ChainableActionBase_o *, const MethodInfo *))klass->vtable._4_unknown.methodPtr)(
        current,
        klass->vtable._4_unknown.method);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v18,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_ChainableActionBase__Dispose__);
}


void ChainableActionParallel__OnOneActionEnded(ChainableActionParallel_o *this, const MethodInfo *method)
{
  ChainableActionParallel_o *v2; // x19
  struct System_Collections_Generic_List_ChainableActionBase__o *sysChainAction; // x9
  int v4; // w8

  v2 = this;
  if ( (byte_593CBEB & 1) == 0 )
  {
    this = (ChainableActionParallel_o *)sub_21FFC50(&Method_System_Collections_Generic_List_ChainableActionBase__get_Count__);
    byte_593CBEB = 1;
  }
  sysChainAction = v2->fields.sysChainAction;
  v4 = v2->fields.executeEndCount + 1;
  v2->fields.executeEndCount = v4;
  if ( !sysChainAction )
    sub_21FFECC(this, method);
  if ( sysChainAction->fields._size <= v4 )
    ((void (__fastcall *)(ChainableActionParallel_o *, const MethodInfo *))v2->klass->vtable._5_End.methodPtr)(
      v2,
      v2->klass->vtable._5_End.method);
}