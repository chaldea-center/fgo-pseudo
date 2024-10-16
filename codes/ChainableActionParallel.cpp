void __fastcall ChainableActionParallel___ctor(
        ChainableActionParallel_o *this,
        ChainableActionBase_array *actionArray,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *v6; // x21
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4ABA3C8 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_List_ChainableActionBase___ctor__, actionArray);
    sub_1BAB41C(&System_Collections_Generic_List_ChainableActionBase__TypeInfo, v5);
    byte_4ABA3C8 = 1;
  }
  ChainableActionBase___ctor((ChainableActionBase_o *)this, (const MethodInfo *)actionArray);
  v6 = (System_Collections_Generic_List_object__o *)sub_1BAB668(System_Collections_Generic_List_ChainableActionBase__TypeInfo);
  System_Collections_Generic_List_object____ctor_55890352(
    v6,
    (System_Collections_Generic_IEnumerable_T__o *)actionArray,
    (const MethodInfo_354D1B0 *)Method_System_Collections_Generic_List_ChainableActionBase___ctor__);
  this->fields.sysChainAction = (struct System_Collections_Generic_List_ChainableActionBase__o *)v6;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.sysChainAction, (int32_t)v6, v7, v8);
}


void __fastcall ChainableActionParallel___ctor_46803740(
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *sysChainAction; // x0
  ChainableActionBase_o *current; // x20
  __int64 v11; // x21
  System_Action_o *v12; // x22
  __int64 v13; // x0
  __int64 v14; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  __int64 v17; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x2
  ChainableActionBase_c *klass; // x8
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4ABA3C9 & 1) == 0 )
  {
    sub_1BAB41C(&System_Action___TypeInfo, method);
    sub_1BAB41C(&System_Action_TypeInfo, v3);
    sub_1BAB41C(&Method_ChainableActionParallel_OnOneActionEnded__, v4);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_ChainableActionBase__Dispose__, v5);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_ChainableActionBase__MoveNext__, v6);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_ChainableActionBase__get_Current__, v7);
    sub_1BAB41C(&Method_System_Collections_Generic_List_ChainableActionBase__GetEnumerator__, v8);
    byte_4ABA3C9 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  sysChainAction = (System_Collections_Generic_List_object__o *)this->fields.sysChainAction;
  this->fields.executeEndCount = 0;
  if ( !sysChainAction )
    sub_1BAB678(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v21,
    sysChainAction,
    (const MethodInfo_354E3B4 *)Method_System_Collections_Generic_List_ChainableActionBase__GetEnumerator__);
  v22 = v21;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v22,
            (const MethodInfo_32C4C78 *)Method_System_Collections_Generic_List_Enumerator_ChainableActionBase__MoveNext__) )
  {
    current = (ChainableActionBase_o *)v22.fields._current;
    v11 = sub_1BAB4C4(System_Action___TypeInfo, 1LL);
    v12 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
    System_Action___ctor(v12, (Il2CppObject *)this, Method_ChainableActionParallel_OnOneActionEnded__, 0LL);
    if ( !v11 )
      sub_1BAB678(v13, v14);
    if ( !*(_DWORD *)(v11 + 24) )
      sub_1BAB680(v13, v14);
    *(_QWORD *)(v11 + 32) = v12;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v11 + 32), (int32_t)v12, v15, v16);
    if ( !current )
      sub_1BAB678(v17, v18);
    ChainableActionBase__Final(current, (System_Action_array *)v11, v19);
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
    &v22,
    (const MethodInfo_32C4C74 *)Method_System_Collections_Generic_List_Enumerator_ChainableActionBase__Dispose__);
}


void __fastcall ChainableActionParallel__OnOneActionEnded(ChainableActionParallel_o *this, const MethodInfo *method)
{
  ChainableActionParallel_o *v2; // x19
  struct System_Collections_Generic_List_ChainableActionBase__o *sysChainAction; // x9
  int v4; // w8

  v2 = this;
  if ( (byte_4ABA3CA & 1) == 0 )
  {
    this = (ChainableActionParallel_o *)sub_1BAB41C(
                                          &Method_System_Collections_Generic_List_ChainableActionBase__get_Count__,
                                          method);
    byte_4ABA3CA = 1;
  }
  sysChainAction = v2->fields.sysChainAction;
  v4 = v2->fields.executeEndCount + 1;
  v2->fields.executeEndCount = v4;
  if ( !sysChainAction )
    sub_1BAB678(this, method);
  if ( sysChainAction->fields._size <= v4 )
    ((void (__fastcall *)(ChainableActionParallel_o *, void *))v2->klass->vtable._5_End.method)(
      v2,
      v2->klass[1]._1.image);
}