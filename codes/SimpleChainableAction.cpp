void __fastcall SimpleChainableAction___ctor(
        SimpleChainableAction_o *this,
        System_Action_Action__o *action,
        const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3

  ChainableActionBase___ctor((ChainableActionBase_o *)this, (const MethodInfo *)action);
  this->fields.sysChainAction = action;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.sysChainAction, (int32_t)action, v5, v6);
}


SimpleChainableAction_array *__fastcall SimpleChainableAction__ConvertToChainableActionArray(
        System_Action_Action__array *sysActions,
        const MethodInfo *method)
{
  System_Action_Action__array *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1
  SimpleChainableAction_array *v7; // x20
  unsigned __int64 v8; // x24
  __int64 v9; // x26
  System_Action_Action__o **m_Items; // x27
  ServantStatusBattleListViewItem_o *v11; // x21
  System_Action_Action__o *v12; // x23
  __int64 v13; // x22
  const MethodInfo *v14; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w2
  int32_t v18; // w3
  __int64 v20; // x0

  v2 = sysActions;
  if ( (byte_4A3278B & 1) == 0 )
  {
    sub_1B761C0(&SimpleChainableAction___TypeInfo, method);
    sysActions = (System_Action_Action__array *)sub_1B761C0(&SimpleChainableAction_TypeInfo, v3);
    byte_4A3278B = 1;
  }
  if ( !v2 )
LABEL_13:
    sub_1B7641C(sysActions, method);
  v4 = *(_QWORD *)&v2->max_length;
  v5 = sub_1B76268(SimpleChainableAction___TypeInfo, (unsigned int)v4);
  v7 = (SimpleChainableAction_array *)v5;
  if ( (int)v4 >= 1 )
  {
    v8 = 0LL;
    v9 = (unsigned int)v4;
    m_Items = v2->m_Items;
    v11 = (ServantStatusBattleListViewItem_o *)(v5 + 32);
    do
    {
      if ( v8 >= v2->max_length )
        goto LABEL_12;
      v12 = *m_Items;
      v13 = sub_1B7640C(SimpleChainableAction_TypeInfo);
      ChainableActionBase___ctor((ChainableActionBase_o *)v13, v14);
      *(_QWORD *)(v13 + 40) = v12;
      sub_1B76164((ServantStatusBattleListViewItem_o *)(v13 + 40), (int32_t)v12, v15, v16);
      if ( !v7 )
        goto LABEL_13;
      v5 = sub_1B762FC(v13, v7->obj.klass->_1.element_class);
      if ( !v5 )
      {
        v20 = sub_1B76440(0LL);
        sub_1B762E8(v20, 0LL);
      }
      if ( v8 >= v7->max_length )
LABEL_12:
        sub_1B76424(v5, v6);
      v11->klass = (ServantStatusBattleListViewItem_c *)v13;
      sub_1B76164(v11, v13, v17, v18);
      ++v8;
      ++m_Items;
      v11 = (ServantStatusBattleListViewItem_o *)((char *)v11 + 8);
    }
    while ( v9 != v8 );
  }
  return v7;
}


void __fastcall SimpleChainableAction__ExecuteOnDetail(SimpleChainableAction_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_T__o *sysChainAction; // x20
  System_Action_o *v5; // x21

  if ( (byte_4A3278A & 1) == 0 )
  {
    sub_1B761C0(&Method_ActionExtensions_Call_Action___, method);
    sub_1B761C0(&System_Action_TypeInfo, v3);
    byte_4A3278A = 1;
  }
  sysChainAction = (System_Action_T__o *)this->fields.sysChainAction;
  v5 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, (intptr_t)this->klass[1]._1.image, 0LL);
  ActionExtensions__Call_object_(
    sysChainAction,
    (Il2CppObject *)v5,
    (const MethodInfo_2DB9DF8 *)Method_ActionExtensions_Call_Action___);
}