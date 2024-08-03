void __fastcall SimpleChainableAction___ctor(
        SimpleChainableAction_o *this,
        System_Action_Action__o *action,
        const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3

  ChainableActionBase___ctor((ChainableActionBase_o *)this, (const MethodInfo *)action);
  this->fields.sysChainAction = action;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.sysChainAction, (int32_t)action, v5, v6);
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
  __int64 v7; // x2
  SimpleChainableAction_array *v8; // x20
  unsigned __int64 v9; // x24
  __int64 v10; // x26
  System_Action_Action__o **m_Items; // x27
  ServantStatusBattleListViewItem_o *v12; // x21
  System_Action_Action__o *v13; // x23
  __int64 v14; // x22
  const MethodInfo *v15; // x1
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w2
  int32_t v19; // w3
  __int64 v21; // x0

  v2 = sysActions;
  if ( (byte_4A00C0B & 1) == 0 )
  {
    sub_1B640C8(&SimpleChainableAction___TypeInfo, method);
    sysActions = (System_Action_Action__array *)sub_1B640C8(&SimpleChainableAction_TypeInfo, v3);
    byte_4A00C0B = 1;
  }
  if ( !v2 )
LABEL_13:
    sub_1B64324(sysActions);
  v4 = *(_QWORD *)&v2->max_length;
  v5 = sub_1B64170(SimpleChainableAction___TypeInfo, (unsigned int)v4);
  v8 = (SimpleChainableAction_array *)v5;
  if ( (int)v4 >= 1 )
  {
    v9 = 0LL;
    v10 = (unsigned int)v4;
    m_Items = v2->m_Items;
    v12 = (ServantStatusBattleListViewItem_o *)(v5 + 32);
    do
    {
      if ( v9 >= v2->max_length )
        goto LABEL_12;
      v13 = *m_Items;
      v14 = sub_1B64314(SimpleChainableAction_TypeInfo, v6, v7);
      ChainableActionBase___ctor((ChainableActionBase_o *)v14, v15);
      *(_QWORD *)(v14 + 40) = v13;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v14 + 40), (int32_t)v13, v16, v17);
      if ( !v8 )
        goto LABEL_13;
      v5 = sub_1B64204(v14, v8->obj.klass->_1.element_class);
      if ( !v5 )
      {
        v21 = sub_1B64348(0LL);
        sub_1B641F0(v21, 0LL);
      }
      if ( v9 >= v8->max_length )
LABEL_12:
        sub_1B6432C(v5, v6);
      v12->klass = (ServantStatusBattleListViewItem_c *)v14;
      sub_1B6406C(v12, v14, v18, v19);
      ++v9;
      ++m_Items;
      v12 = (ServantStatusBattleListViewItem_o *)((char *)v12 + 8);
    }
    while ( v10 != v9 );
  }
  return v8;
}


void __fastcall SimpleChainableAction__ExecuteOnDetail(SimpleChainableAction_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Action_T__o *sysChainAction; // x20
  System_Action_o *v6; // x21

  if ( (byte_4A00C0A & 1) == 0 )
  {
    sub_1B640C8(&Method_ActionExtensions_Call_Action___, method);
    sub_1B640C8(&System_Action_TypeInfo, v4);
    byte_4A00C0A = 1;
  }
  sysChainAction = (System_Action_T__o *)this->fields.sysChainAction;
  v6 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, method, v2);
  System_Action___ctor(v6, (Il2CppObject *)this, (intptr_t)this->klass[1]._1.image, 0LL);
  ActionExtensions__Call_object_(
    sysChainAction,
    (Il2CppObject *)v6,
    (const MethodInfo_2D90A78 *)Method_ActionExtensions_Call_Action___);
}