void SimpleChainableAction___ctor(
        SimpleChainableAction_o *this,
        System_Action_Action__o *action,
        const MethodInfo *method)
{
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  ChainableActionBase___ctor((ChainableActionBase_o *)this, (const MethodInfo *)action);
  this->fields.sysChainAction = action;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.sysChainAction, (int32_t)action, v5, v6);
}


SimpleChainableAction_array *SimpleChainableAction__ConvertToChainableActionArray(
        System_Action_Action__array *sysActions,
        const MethodInfo *method)
{
  System_Action_Action__array *v2; // x19
  il2cpp_array_size_t max_length; // x21
  __int64 v4; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  unsigned int *v7; // x20
  unsigned __int64 v8; // x24
  __int64 v9; // x26
  System_Action_Action__o **m_Items; // x27
  CGThumbnailListItem_o *v11; // x21
  System_Action_Action__o *v12; // x23
  __int64 v13; // x22
  const MethodInfo *v14; // x1
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x3
  __int64 v19; // x0

  v2 = sysActions;
  if ( (byte_4C2B888 & 1) == 0 )
  {
    sub_1C2D490(&SimpleChainableAction___TypeInfo);
    sysActions = (System_Action_Action__array *)sub_1C2D490(&SimpleChainableAction_TypeInfo);
    byte_4C2B888 = 1;
  }
  if ( !v2 )
LABEL_13:
    sub_1C2D6EC(sysActions, method);
  max_length = v2->max_length;
  v4 = sub_1C2D538(SimpleChainableAction___TypeInfo, (unsigned int)max_length);
  v7 = (unsigned int *)v4;
  if ( (int)max_length >= 1 )
  {
    v8 = 0;
    v9 = (unsigned int)max_length;
    m_Items = v2->m_Items;
    v11 = (CGThumbnailListItem_o *)(v4 + 32);
    do
    {
      if ( v8 >= LODWORD(v2->max_length) )
        goto LABEL_12;
      v12 = *m_Items;
      v13 = sub_1C2D6DC(SimpleChainableAction_TypeInfo);
      ChainableActionBase___ctor((ChainableActionBase_o *)v13, v14);
      *(_QWORD *)(v13 + 40) = v12;
      sub_1C2D434((CGThumbnailListItem_o *)(v13 + 40), (int32_t)v12, v15, v16);
      if ( !v7 )
        goto LABEL_13;
      v4 = sub_1C2D5CC(v13, *(_QWORD *)(*(_QWORD *)v7 + 64LL));
      if ( !v4 )
      {
        v19 = sub_1C2D710(0);
        sub_1C2D5B8(v19, 0);
      }
      if ( v8 >= v7[6] )
LABEL_12:
        sub_1C2D6F4(v4, v5, v6);
      v11->klass = (CGThumbnailListItem_c *)v13;
      sub_1C2D434(v11, v13, v6, v17);
      ++v8;
      ++m_Items;
      v11 = (CGThumbnailListItem_o *)((char *)v11 + 8);
    }
    while ( v9 != v8 );
  }
  return (SimpleChainableAction_array *)v7;
}


void SimpleChainableAction__ExecuteOnDetail(SimpleChainableAction_o *this, const MethodInfo *method)
{
  System_Action_T__o *sysChainAction; // x20
  System_Action_o *v4; // x21

  if ( (byte_4C2B887 & 1) == 0 )
  {
    sub_1C2D490(&Method_ActionExtensions_Call_Action___);
    sub_1C2D490(&System_Action_TypeInfo);
    byte_4C2B887 = 1;
  }
  sysChainAction = (System_Action_T__o *)this->fields.sysChainAction;
  v4 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, (intptr_t)this->klass->vtable._5_End.method, 0);
  ActionExtensions__Call_object_(
    sysChainAction,
    (Il2CppObject *)v4,
    (const MethodInfo_301B240 *)Method_ActionExtensions_Call_Action___);
}