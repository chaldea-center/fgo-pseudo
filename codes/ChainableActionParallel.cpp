void __fastcall ChainableActionParallel___ctor(
        ChainableActionParallel_o *this,
        ChainableActionBase_array *actionArray,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  System_Collections_Generic_List_object__o *v10; // x21
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  if ( (byte_4B1A8A8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ChainableActionBase___ctor__, actionArray, method);
    sub_1BCA7E0(&System_Collections_Generic_List_ChainableActionBase__TypeInfo, v5, v6);
    byte_4B1A8A8 = 1;
  }
  ChainableActionBase___ctor((ChainableActionBase_o *)this, (const MethodInfo *)actionArray);
  v10 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ChainableActionBase__TypeInfo,
                                                       v7,
                                                       v8,
                                                       v9);
  System_Collections_Generic_List_object____ctor_56235344(
    v10,
    (System_Collections_Generic_IEnumerable_T__o *)actionArray,
    (const MethodInfo_35A1550 *)Method_System_Collections_Generic_List_ChainableActionBase___ctor__);
  this->fields.sysChainAction = (struct System_Collections_Generic_List_ChainableActionBase__o *)v10;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.sysChainAction, (int64_t)v10, v11, v12, v13, v14, v15, v16);
}


void __fastcall ChainableActionParallel___ctor_47119316(
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  System_Collections_Generic_List_object__o *sysChainAction; // x0
  ChainableActionBase_o *current; // x20
  __int64 v18; // x21
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  System_Action_o *v22; // x22
  __int64 v23; // x0
  __int64 v24; // x1
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  __int64 v31; // x0
  __int64 v32; // x1
  const MethodInfo *v33; // x2
  ChainableActionBase_c *klass; // x8
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4B1A8A9 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action___TypeInfo, method, v2);
    sub_1BCA7E0(&System_Action_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_ChainableActionParallel_OnOneActionEnded__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ChainableActionBase__Dispose__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ChainableActionBase__MoveNext__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ChainableActionBase__get_Current__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ChainableActionBase__GetEnumerator__, v14, v15);
    byte_4B1A8A9 = 1;
  }
  memset(&v36, 0, sizeof(v36));
  sysChainAction = (System_Collections_Generic_List_object__o *)this->fields.sysChainAction;
  this->fields.executeEndCount = 0;
  if ( !sysChainAction )
    sub_1BCAA3C(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v35,
    sysChainAction,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ChainableActionBase__GetEnumerator__);
  v36 = v35;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v36,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ChainableActionBase__MoveNext__) )
  {
    current = (ChainableActionBase_o *)v36.fields._current;
    v18 = sub_1BCA888(System_Action___TypeInfo, 1LL);
    v22 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v19, v20, v21);
    System_Action___ctor(v22, (Il2CppObject *)this, Method_ChainableActionParallel_OnOneActionEnded__, 0LL);
    if ( !v18 )
      sub_1BCAA3C(v23, v24);
    if ( !*(_DWORD *)(v18 + 24) )
      sub_1BCAA44(v23, v24);
    *(_QWORD *)(v18 + 32) = v22;
    sub_1BCA784((PartyOrganizationUtility_o *)(v18 + 32), (int64_t)v22, v25, v26, v27, v28, v29, v30);
    if ( !current )
      sub_1BCAA3C(v31, v32);
    ChainableActionBase__Final(current, (System_Action_array *)v18, v33);
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
    &v36,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ChainableActionBase__Dispose__);
}


void __fastcall ChainableActionParallel__OnOneActionEnded(ChainableActionParallel_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  ChainableActionParallel_o *v3; // x19
  struct System_Collections_Generic_List_ChainableActionBase__o *sysChainAction; // x9
  int v5; // w8

  v3 = this;
  if ( (byte_4B1A8AA & 1) == 0 )
  {
    this = (ChainableActionParallel_o *)sub_1BCA7E0(
                                          &Method_System_Collections_Generic_List_ChainableActionBase__get_Count__,
                                          method,
                                          v2);
    byte_4B1A8AA = 1;
  }
  sysChainAction = v3->fields.sysChainAction;
  v5 = v3->fields.executeEndCount + 1;
  v3->fields.executeEndCount = v5;
  if ( !sysChainAction )
    sub_1BCAA3C(this, method);
  if ( sysChainAction->fields._size <= v5 )
    ((void (__fastcall *)(ChainableActionParallel_o *, void *))v3->klass->vtable._5_End.method)(
      v3,
      v3->klass[1]._1.image);
}