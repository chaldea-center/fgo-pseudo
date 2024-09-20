void __fastcall ChainableActionParallel___ctor(
        ChainableActionParallel_o *this,
        ChainableActionBase_array *actionArray,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A5F91F & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ChainableActionBase___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_ChainableActionBase__TypeInfo);
    byte_4A5F91F = 1;
  }
  ChainableActionBase___ctor((ChainableActionBase_o *)this, (const MethodInfo *)actionArray);
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ChainableActionBase__TypeInfo);
  System_Collections_Generic_List_object____ctor_55562536(
    v5,
    (System_Collections_Generic_IEnumerable_T__o *)actionArray,
    (const MethodInfo_34FD128 *)Method_System_Collections_Generic_List_ChainableActionBase___ctor__);
  this->fields.sysChainAction = (struct System_Collections_Generic_List_ChainableActionBase__o *)v5;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.sysChainAction, (int32_t)v5, v6, v7);
}


void __fastcall ChainableActionParallel___ctor_46557384(
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


void __fastcall ChainableActionParallel__ExecuteOnDetail(ChainableActionParallel_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *sysChainAction; // x0
  ChainableActionBase_o *current; // x20
  __int64 v5; // x21
  System_Action_o *v6; // x22
  __int64 v7; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  __int64 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x2
  ChainableActionBase_c *klass; // x8
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4A5F920 & 1) == 0 )
  {
    sub_1B885B0(&System_Action___TypeInfo);
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_ChainableActionParallel_OnOneActionEnded__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ChainableActionBase__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ChainableActionBase__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ChainableActionBase__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ChainableActionBase__GetEnumerator__);
    byte_4A5F920 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  sysChainAction = (System_Collections_Generic_List_object__o *)this->fields.sysChainAction;
  this->fields.executeEndCount = 0;
  if ( !sysChainAction )
    sub_1B8880C(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v15,
    sysChainAction,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ChainableActionBase__GetEnumerator__);
  v16 = v15;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v16,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ChainableActionBase__MoveNext__) )
  {
    current = (ChainableActionBase_o *)v16.fields._current;
    v5 = sub_1B88658(System_Action___TypeInfo, 1LL);
    v6 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v6, (Il2CppObject *)this, Method_ChainableActionParallel_OnOneActionEnded__, 0LL);
    if ( !v5 )
      sub_1B8880C(v7, v8);
    if ( !*(_DWORD *)(v5 + 24) )
      sub_1B88814(v7, v8);
    *(_QWORD *)(v5 + 32) = v6;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)v6, v9, v10);
    if ( !current )
      sub_1B8880C(v11, v12);
    ChainableActionBase__Final(current, (System_Action_array *)v5, v13);
    if ( !current->fields._IsExecuted_k__BackingField )
    {
      klass = current->klass;
      current->fields._IsExecuted_k__BackingField = 1;
      ((void (__fastcall *)(ChainableActionBase_o *, Il2CppMethodPointer))klass->vtable._4_unknown.method)(
        current,
        klass->vtable._5_End.methodPtr);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v16,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ChainableActionBase__Dispose__);
}


void __fastcall ChainableActionParallel__OnOneActionEnded(ChainableActionParallel_o *this, const MethodInfo *method)
{
  ChainableActionParallel_o *v2; // x19
  struct System_Collections_Generic_List_ChainableActionBase__o *sysChainAction; // x9
  int v4; // w8

  v2 = this;
  if ( (byte_4A5F921 & 1) == 0 )
  {
    this = (ChainableActionParallel_o *)sub_1B885B0(&Method_System_Collections_Generic_List_ChainableActionBase__get_Count__);
    byte_4A5F921 = 1;
  }
  sysChainAction = v2->fields.sysChainAction;
  v4 = v2->fields.executeEndCount + 1;
  v2->fields.executeEndCount = v4;
  if ( !sysChainAction )
    sub_1B8880C(this, method);
  if ( sysChainAction->fields._size <= v4 )
    ((void (__fastcall *)(ChainableActionParallel_o *, void *))v2->klass->vtable._5_End.method)(
      v2,
      v2->klass[1]._1.image);
}