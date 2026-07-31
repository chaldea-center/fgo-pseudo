void SimpleChainableAction___ctor(
        SimpleChainableAction_o *this,
        System_Action_Action__o *action,
        const MethodInfo *method)
{
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  ChainableActionBase___ctor((ChainableActionBase_o *)this, (const MethodInfo *)action);
  this->fields.sysChainAction = action;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.sysChainAction,
    (int32_t)action,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


SimpleChainableAction_array *SimpleChainableAction__ConvertToChainableActionArray(
        System_Action_Action__array *sysActions,
        const MethodInfo *method)
{
  System_Action_Action__array *v2; // x19
  il2cpp_array_size_t max_length; // x21
  __int64 v4; // x0
  unsigned int *v5; // x20
  unsigned __int64 v6; // x23
  __int64 v7; // x25
  __int64 v8; // x26
  __int64 v9; // x22
  __int64 v10; // x21
  const MethodInfo *v11; // x1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  __int64 v18; // x1
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  __int64 v26; // x0

  v2 = sysActions;
  if ( (byte_593CBED & 1) == 0 )
  {
    sub_21FFC50(&SimpleChainableAction___TypeInfo);
    sysActions = (System_Action_Action__array *)sub_21FFC50(&SimpleChainableAction_TypeInfo);
    byte_593CBED = 1;
  }
  if ( !v2 )
LABEL_13:
    sub_21FFECC(sysActions, method);
  max_length = v2->max_length;
  v4 = sub_21FFD10(SimpleChainableAction___TypeInfo, (unsigned int)max_length);
  v5 = (unsigned int *)v4;
  if ( (int)max_length >= 1 )
  {
    v6 = 0;
    v7 = (unsigned int)max_length;
    v8 = 8;
    do
    {
      if ( v6 >= LODWORD(v2->max_length) )
        goto LABEL_12;
      v9 = *(__int64 *)((char *)&v2->obj.klass + v8 * 4);
      v10 = sub_21FFEBC(SimpleChainableAction_TypeInfo);
      ChainableActionBase___ctor((ChainableActionBase_o *)v10, v11);
      *(_QWORD *)(v10 + 40) = v9;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v10 + 40), v9, v12, v13, v14, v15, v16, v17);
      if ( !v5 )
        goto LABEL_13;
      v4 = sub_21FFDA4(v10, *(_QWORD *)(*(_QWORD *)v5 + 64LL));
      if ( !v4 )
      {
        v26 = sub_21FFEF0(0, v18);
        sub_21FFD90(v26, 0);
      }
      if ( v6 >= v5[6] )
LABEL_12:
        sub_21FFED4(v4);
      *(_QWORD *)&v5[v8] = v10;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v5[v8], v10, v19, v20, v21, v22, v23, v24);
      ++v6;
      v8 += 2;
    }
    while ( v7 != v6 );
  }
  return (SimpleChainableAction_array *)v5;
}


void SimpleChainableAction__ExecuteOnDetail(SimpleChainableAction_o *this, const MethodInfo *method)
{
  System_Action_T__o *sysChainAction; // x20
  System_Action_o *v4; // x21

  if ( (byte_593CBEC & 1) == 0 )
  {
    sub_21FFC50(&Method_ActionExtensions_Call_Action___);
    sub_21FFC50(&System_Action_TypeInfo);
    byte_593CBEC = 1;
  }
  sysChainAction = (System_Action_T__o *)this->fields.sysChainAction;
  v4 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, (intptr_t)this->klass->vtable._5_End.method, 0);
  ActionExtensions__Call_object_(
    sysChainAction,
    (Il2CppObject *)v4,
    (const MethodInfo_36CDF5C *)Method_ActionExtensions_Call_Action___);
}