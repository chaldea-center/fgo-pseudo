void ChainableActionParallel___ctor(
        ChainableActionParallel_o *this,
        ChainableActionBase_array *actionArray,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4CBA854 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_ChainableActionBase___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_ChainableActionBase__TypeInfo);
    byte_4CBA854 = 1;
  }
  ChainableActionBase___ctor((ChainableActionBase_o *)this, (const MethodInfo *)actionArray);
  v5 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_ChainableActionBase__TypeInfo);
  System_Collections_Generic_List_object____ctor_58720872(
    v5,
    (System_Collections_Generic_IEnumerable_T__o *)actionArray,
    (const MethodInfo_3800268 *)Method_System_Collections_Generic_List_ChainableActionBase___ctor__);
  this->fields.sysChainAction = (struct System_Collections_Generic_List_ChainableActionBase__o *)v5;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.sysChainAction, (int32_t)v5, v6, v7);
}


void ChainableActionParallel___ctor_49344196(
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
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  __int64 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x2
  ChainableActionBase_c *klass; // x8
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4CBA855 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action___TypeInfo);
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_ChainableActionParallel_OnOneActionEnded__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ChainableActionBase__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ChainableActionBase__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ChainableActionBase__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ChainableActionBase__GetEnumerator__);
    byte_4CBA855 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  sysChainAction = (System_Collections_Generic_List_object__o *)this->fields.sysChainAction;
  this->fields.executeEndCount = 0;
  if ( !sysChainAction )
    sub_1C6BC60(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v15,
    sysChainAction,
    (const MethodInfo_380146C *)Method_System_Collections_Generic_List_ChainableActionBase__GetEnumerator__);
  v16 = v15;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v16,
            (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_ChainableActionBase__MoveNext__) )
  {
    current = (ChainableActionBase_o *)v16.fields._current;
    v5 = sub_1C6BAB0(System_Action___TypeInfo, 1);
    v6 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
    System_Action___ctor(v6, (Il2CppObject *)this, Method_ChainableActionParallel_OnOneActionEnded__, 0);
    if ( !v5 )
      sub_1C6BC60(v7, v8);
    if ( !*(_DWORD *)(v5 + 24) )
      sub_1C6BC68(v7);
    *(_QWORD *)(v5 + 32) = v6;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 32), (int32_t)v6, v9, v10);
    if ( !current )
      sub_1C6BC60(v11, v12);
    ChainableActionBase__Final(current, (System_Action_array *)v5, v13);
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
    &v16,
    (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_ChainableActionBase__Dispose__);
}


void ChainableActionParallel__OnOneActionEnded(ChainableActionParallel_o *this, const MethodInfo *method)
{
  ChainableActionParallel_o *v2; // x19
  struct System_Collections_Generic_List_ChainableActionBase__o *sysChainAction; // x9
  int v4; // w8

  v2 = this;
  if ( (byte_4CBA856 & 1) == 0 )
  {
    this = (ChainableActionParallel_o *)sub_1C6BA08(&Method_System_Collections_Generic_List_ChainableActionBase__get_Count__);
    byte_4CBA856 = 1;
  }
  sysChainAction = v2->fields.sysChainAction;
  v4 = v2->fields.executeEndCount + 1;
  v2->fields.executeEndCount = v4;
  if ( !sysChainAction )
    sub_1C6BC60(this, method);
  if ( sysChainAction->fields._size <= v4 )
    ((void (__fastcall *)(ChainableActionParallel_o *, const MethodInfo *))v2->klass->vtable._5_End.methodPtr)(
      v2,
      v2->klass->vtable._5_End.method);
}