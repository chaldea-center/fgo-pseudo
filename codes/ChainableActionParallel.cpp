void __fastcall ChainableActionParallel___ctor(
        ChainableActionParallel_o *this,
        ChainableActionBase_array *actionArray,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4BE0D0B & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_ChainableActionBase___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_ChainableActionBase__TypeInfo);
    byte_4BE0D0B = 1;
  }
  ChainableActionBase___ctor((ChainableActionBase_o *)this, (const MethodInfo *)actionArray);
  v5 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_ChainableActionBase__TypeInfo);
  System_Collections_Generic_List_object____ctor_56945064(
    v5,
    (System_Collections_Generic_IEnumerable_T__o *)actionArray,
    (const MethodInfo_364E9A8 *)Method_System_Collections_Generic_List_ChainableActionBase___ctor__);
  this->fields.sysChainAction = (struct System_Collections_Generic_List_ChainableActionBase__o *)v5;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.sysChainAction, (int64_t)v5, v6, v7, v8, v9, v10, v11);
}


void __fastcall ChainableActionParallel___ctor_47731972(
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
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  __int64 v15; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x2
  ChainableActionBase_c *klass; // x8
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4BE0D0C & 1) == 0 )
  {
    sub_1C21E38(&System_Action___TypeInfo);
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_ChainableActionParallel_OnOneActionEnded__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ChainableActionBase__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ChainableActionBase__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ChainableActionBase__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ChainableActionBase__GetEnumerator__);
    byte_4BE0D0C = 1;
  }
  memset(&v20, 0, sizeof(v20));
  sysChainAction = (System_Collections_Generic_List_object__o *)this->fields.sysChainAction;
  this->fields.executeEndCount = 0;
  if ( !sysChainAction )
    sub_1C22094(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v19,
    sysChainAction,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_ChainableActionBase__GetEnumerator__);
  v20 = v19;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v20,
            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_ChainableActionBase__MoveNext__) )
  {
    current = (ChainableActionBase_o *)v20.fields._current;
    v5 = sub_1C21EE0(System_Action___TypeInfo, 1LL);
    v6 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(v6, (Il2CppObject *)this, Method_ChainableActionParallel_OnOneActionEnded__, 0LL);
    if ( !v5 )
      sub_1C22094(v7, v8);
    if ( !*(_DWORD *)(v5 + 24) )
      sub_1C2209C(v7, v8);
    *(_QWORD *)(v5 + 32) = v6;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)v6, v9, v10, v11, v12, v13, v14);
    if ( !current )
      sub_1C22094(v15, v16);
    ChainableActionBase__Final(current, (System_Action_array *)v5, v17);
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
    &v20,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_ChainableActionBase__Dispose__);
}


void __fastcall ChainableActionParallel__OnOneActionEnded(ChainableActionParallel_o *this, const MethodInfo *method)
{
  ChainableActionParallel_o *v2; // x19
  struct System_Collections_Generic_List_ChainableActionBase__o *sysChainAction; // x9
  int v4; // w8

  v2 = this;
  if ( (byte_4BE0D0D & 1) == 0 )
  {
    this = (ChainableActionParallel_o *)sub_1C21E38(&Method_System_Collections_Generic_List_ChainableActionBase__get_Count__);
    byte_4BE0D0D = 1;
  }
  sysChainAction = v2->fields.sysChainAction;
  v4 = v2->fields.executeEndCount + 1;
  v2->fields.executeEndCount = v4;
  if ( !sysChainAction )
    sub_1C22094(this, method);
  if ( sysChainAction->fields._size <= v4 )
    ((void (__fastcall *)(ChainableActionParallel_o *, void *))v2->klass->vtable._5_End.method)(
      v2,
      v2->klass[1]._1.image);
}