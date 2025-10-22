void SimpleChainableAction___ctor(
        SimpleChainableAction_o *this,
        System_Action_Action__o *action,
        const MethodInfo *method)
{
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  ChainableActionBase___ctor((ChainableActionBase_o *)this, (const MethodInfo *)action);
  this->fields.sysChainAction = action;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.sysChainAction, (int32_t)action, v5, v6);
}


SimpleChainableAction_array *SimpleChainableAction__ConvertToChainableActionArray(
        System_Action_Action__array *sysActions,
        const MethodInfo *method)
{
  System_Action_Action__array *v2; // x19
  il2cpp_array_size_t max_length; // x21
  __int64 v4; // x0
  __int64 v5; // x1
  unsigned int *v6; // x20
  unsigned __int64 v7; // x24
  __int64 v8; // x26
  System_Action_Action__o **m_Items; // x27
  CGThumbnailListItem_o *v10; // x21
  System_Action_Action__o *v11; // x23
  __int64 v12; // x22
  const MethodInfo *v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  __int64 v19; // x0

  v2 = sysActions;
  if ( (byte_4C5B27D & 1) == 0 )
  {
    sub_1C3E564(&SimpleChainableAction___TypeInfo);
    sysActions = (System_Action_Action__array *)sub_1C3E564(&SimpleChainableAction_TypeInfo);
    byte_4C5B27D = 1;
  }
  if ( !v2 )
LABEL_13:
    sub_1C3E7C0(sysActions, method);
  max_length = v2->max_length;
  v4 = sub_1C3E60C(SimpleChainableAction___TypeInfo, (unsigned int)max_length);
  v6 = (unsigned int *)v4;
  if ( (int)max_length >= 1 )
  {
    v7 = 0;
    v8 = (unsigned int)max_length;
    m_Items = v2->m_Items;
    v10 = (CGThumbnailListItem_o *)(v4 + 32);
    do
    {
      if ( v7 >= LODWORD(v2->max_length) )
        goto LABEL_12;
      v11 = *m_Items;
      v12 = sub_1C3E7B0(SimpleChainableAction_TypeInfo);
      ChainableActionBase___ctor((ChainableActionBase_o *)v12, v13);
      *(_QWORD *)(v12 + 40) = v11;
      sub_1C3E508((CGThumbnailListItem_o *)(v12 + 40), (int32_t)v11, v14, v15);
      if ( !v6 )
        goto LABEL_13;
      v4 = sub_1C3E6A0(v12, *(_QWORD *)(*(_QWORD *)v6 + 64LL));
      if ( !v4 )
      {
        v19 = sub_1C3E7E4(0);
        sub_1C3E68C(v19, 0);
      }
      if ( v7 >= v6[6] )
LABEL_12:
        sub_1C3E7C8(v4, v5);
      v10->klass = (CGThumbnailListItem_c *)v12;
      sub_1C3E508(v10, v12, v16, v17);
      ++v7;
      ++m_Items;
      v10 = (CGThumbnailListItem_o *)((char *)v10 + 8);
    }
    while ( v8 != v7 );
  }
  return (SimpleChainableAction_array *)v6;
}


void SimpleChainableAction__ExecuteOnDetail(SimpleChainableAction_o *this, const MethodInfo *method)
{
  System_Action_T__o *sysChainAction; // x20
  System_Action_o *v4; // x21

  if ( (byte_4C5B27C & 1) == 0 )
  {
    sub_1C3E564(&Method_ActionExtensions_Call_Action___);
    sub_1C3E564(&System_Action_TypeInfo);
    byte_4C5B27C = 1;
  }
  sysChainAction = (System_Action_T__o *)this->fields.sysChainAction;
  v4 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, (intptr_t)this->klass->vtable._5_End.method, 0);
  ActionExtensions__Call_object_(
    sysChainAction,
    (Il2CppObject *)v4,
    (const MethodInfo_3046360 *)Method_ActionExtensions_Call_Action___);
}