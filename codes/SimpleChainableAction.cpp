void __fastcall SimpleChainableAction___ctor(
        SimpleChainableAction_o *this,
        System_Action_Action__o *action,
        const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3

  ChainableActionBase___ctor((ChainableActionBase_o *)this, (const MethodInfo *)action);
  this->fields.sysChainAction = action;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.sysChainAction, (int32_t)action, v5, v6);
}


SimpleChainableAction_array *__fastcall SimpleChainableAction__ConvertToChainableActionArray(
        System_Action_Action__array *sysActions,
        const MethodInfo *method)
{
  System_Action_Action__array *v2; // x19
  __int64 v3; // x21
  __int64 v4; // x0
  __int64 v5; // x1
  SimpleChainableAction_array *v6; // x20
  unsigned __int64 v7; // x24
  __int64 v8; // x26
  System_Action_Action__o **m_Items; // x27
  ServantStatusBattleListViewItem_o *v10; // x21
  System_Action_Action__o *v11; // x23
  __int64 v12; // x22
  const MethodInfo *v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w2
  int32_t v17; // w3
  __int64 v19; // x0

  v2 = sysActions;
  if ( (byte_4A5F923 & 1) == 0 )
  {
    sub_1B885B0(&SimpleChainableAction___TypeInfo);
    sysActions = (System_Action_Action__array *)sub_1B885B0(&SimpleChainableAction_TypeInfo);
    byte_4A5F923 = 1;
  }
  if ( !v2 )
LABEL_13:
    sub_1B8880C(sysActions, method);
  v3 = *(_QWORD *)&v2->max_length;
  v4 = sub_1B88658(SimpleChainableAction___TypeInfo, (unsigned int)v3);
  v6 = (SimpleChainableAction_array *)v4;
  if ( (int)v3 >= 1 )
  {
    v7 = 0LL;
    v8 = (unsigned int)v3;
    m_Items = v2->m_Items;
    v10 = (ServantStatusBattleListViewItem_o *)(v4 + 32);
    do
    {
      if ( v7 >= v2->max_length )
        goto LABEL_12;
      v11 = *m_Items;
      v12 = sub_1B887FC(SimpleChainableAction_TypeInfo);
      ChainableActionBase___ctor((ChainableActionBase_o *)v12, v13);
      *(_QWORD *)(v12 + 40) = v11;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v12 + 40), (int32_t)v11, v14, v15);
      if ( !v6 )
        goto LABEL_13;
      v4 = sub_1B886EC(v12, v6->obj.klass->_1.element_class);
      if ( !v4 )
      {
        v19 = sub_1B88830(0LL);
        sub_1B886D8(v19, 0LL);
      }
      if ( v7 >= v6->max_length )
LABEL_12:
        sub_1B88814(v4, v5);
      v10->klass = (ServantStatusBattleListViewItem_c *)v12;
      sub_1B88554(v10, v12, v16, v17);
      ++v7;
      ++m_Items;
      v10 = (ServantStatusBattleListViewItem_o *)((char *)v10 + 8);
    }
    while ( v8 != v7 );
  }
  return v6;
}


void __fastcall SimpleChainableAction__ExecuteOnDetail(SimpleChainableAction_o *this, const MethodInfo *method)
{
  System_Action_T__o *sysChainAction; // x20
  System_Action_o *v4; // x21

  if ( (byte_4A5F922 & 1) == 0 )
  {
    sub_1B885B0(&Method_ActionExtensions_Call_Action___);
    sub_1B885B0(&System_Action_TypeInfo);
    byte_4A5F922 = 1;
  }
  sysChainAction = (System_Action_T__o *)this->fields.sysChainAction;
  v4 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, (intptr_t)this->klass[1]._1.image, 0LL);
  ActionExtensions__Call_object_(
    sysChainAction,
    (Il2CppObject *)v4,
    (const MethodInfo_2DD5858 *)Method_ActionExtensions_Call_Action___);
}