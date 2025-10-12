void SimpleChainableAction___ctor(
        SimpleChainableAction_o *this,
        System_Action_Action__o *action,
        const MethodInfo *method)
{
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  ChainableActionBase___ctor((ChainableActionBase_o *)this, (const MethodInfo *)action);
  this->fields.sysChainAction = action;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.sysChainAction, (int32_t)action, v5, v6);
}


SimpleChainableAction_array *SimpleChainableAction__ConvertToChainableActionArray(
        System_Action_Action__array *sysActions,
        const MethodInfo *method)
{
  System_Action_Action__array *v2; // x19
  il2cpp_array_size_t max_length; // x21
  __int64 v4; // x0
  unsigned int *v5; // x20
  unsigned __int64 v6; // x24
  __int64 v7; // x26
  System_Action_Action__o **m_Items; // x27
  CGThumbnailListItem_o *v9; // x21
  System_Action_Action__o *v10; // x23
  __int64 v11; // x22
  const MethodInfo *v12; // x1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  __int64 v18; // x0

  v2 = sysActions;
  if ( (byte_4C3BF0B & 1) == 0 )
  {
    sub_1C32C20(&SimpleChainableAction___TypeInfo);
    sysActions = (System_Action_Action__array *)sub_1C32C20(&SimpleChainableAction_TypeInfo);
    byte_4C3BF0B = 1;
  }
  if ( !v2 )
LABEL_13:
    sub_1C32E7C(sysActions);
  max_length = v2->max_length;
  v4 = sub_1C32CC8(SimpleChainableAction___TypeInfo, (unsigned int)max_length);
  v5 = (unsigned int *)v4;
  if ( (int)max_length >= 1 )
  {
    v6 = 0;
    v7 = (unsigned int)max_length;
    m_Items = v2->m_Items;
    v9 = (CGThumbnailListItem_o *)(v4 + 32);
    do
    {
      if ( v6 >= LODWORD(v2->max_length) )
        goto LABEL_12;
      v10 = *m_Items;
      v11 = sub_1C32E6C(SimpleChainableAction_TypeInfo);
      ChainableActionBase___ctor((ChainableActionBase_o *)v11, v12);
      *(_QWORD *)(v11 + 40) = v10;
      sub_1C32BC4((CGThumbnailListItem_o *)(v11 + 40), (int32_t)v10, v13, v14);
      if ( !v5 )
        goto LABEL_13;
      v4 = sub_1C32D5C(v11, *(_QWORD *)(*(_QWORD *)v5 + 64LL));
      if ( !v4 )
      {
        v18 = sub_1C32EA0(0);
        sub_1C32D48(v18, 0);
      }
      if ( v6 >= v5[6] )
LABEL_12:
        sub_1C32E84(v4);
      v9->klass = (CGThumbnailListItem_c *)v11;
      sub_1C32BC4(v9, v11, v15, v16);
      ++v6;
      ++m_Items;
      v9 = (CGThumbnailListItem_o *)((char *)v9 + 8);
    }
    while ( v7 != v6 );
  }
  return (SimpleChainableAction_array *)v5;
}


void SimpleChainableAction__ExecuteOnDetail(SimpleChainableAction_o *this, const MethodInfo *method)
{
  System_Action_T__o *sysChainAction; // x20
  System_Action_o *v4; // x21

  if ( (byte_4C3BF0A & 1) == 0 )
  {
    sub_1C32C20(&Method_ActionExtensions_Call_Action___);
    sub_1C32C20(&System_Action_TypeInfo);
    byte_4C3BF0A = 1;
  }
  sysChainAction = (System_Action_T__o *)this->fields.sysChainAction;
  v4 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, (intptr_t)this->klass->vtable._5_End.method, 0);
  ActionExtensions__Call_object_(
    sysChainAction,
    (Il2CppObject *)v4,
    (const MethodInfo_3029CE0 *)Method_ActionExtensions_Call_Action___);
}