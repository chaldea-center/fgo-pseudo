void __fastcall SimpleChainableAction___ctor(
        SimpleChainableAction_o *this,
        System_Action_Action__o *action,
        const MethodInfo *method)
{
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  ChainableActionBase___ctor((ChainableActionBase_o *)this, (const MethodInfo *)action);
  this->fields.sysChainAction = action;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.sysChainAction, (int64_t)action, v5, v6, v7, v8, v9, v10);
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
  int64_t *m_Items; // x27
  PartyOrganizationUtility_o *v10; // x21
  int64_t v11; // x23
  int64_t v12; // x22
  const MethodInfo *v13; // x1
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  __int64 v27; // x0

  v2 = sysActions;
  if ( (byte_4BE0D0F & 1) == 0 )
  {
    sub_1C21E38(&SimpleChainableAction___TypeInfo);
    sysActions = (System_Action_Action__array *)sub_1C21E38(&SimpleChainableAction_TypeInfo);
    byte_4BE0D0F = 1;
  }
  if ( !v2 )
LABEL_13:
    sub_1C22094(sysActions, method);
  v3 = *(_QWORD *)&v2->max_length;
  v4 = sub_1C21EE0(SimpleChainableAction___TypeInfo, (unsigned int)v3);
  v6 = (SimpleChainableAction_array *)v4;
  if ( (int)v3 >= 1 )
  {
    v7 = 0LL;
    v8 = (unsigned int)v3;
    m_Items = (int64_t *)v2->m_Items;
    v10 = (PartyOrganizationUtility_o *)(v4 + 32);
    do
    {
      if ( v7 >= v2->max_length )
        goto LABEL_12;
      v11 = *m_Items;
      v12 = sub_1C22084(SimpleChainableAction_TypeInfo);
      ChainableActionBase___ctor((ChainableActionBase_o *)v12, v13);
      *(_QWORD *)(v12 + 40) = v11;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v12 + 40), v11, v14, v15, v16, v17, v18, v19);
      if ( !v6 )
        goto LABEL_13;
      v4 = sub_1C21F74(v12, v6->obj.klass->_1.element_class);
      if ( !v4 )
      {
        v27 = sub_1C220B8(0LL);
        sub_1C21F60(v27, 0LL);
      }
      if ( v7 >= v6->max_length )
LABEL_12:
        sub_1C2209C(v4, v5);
      v10->klass = (PartyOrganizationUtility_c *)v12;
      sub_1C21DDC(v10, v12, v20, v21, v22, v23, v24, v25);
      ++v7;
      ++m_Items;
      v10 = (PartyOrganizationUtility_o *)((char *)v10 + 8);
    }
    while ( v8 != v7 );
  }
  return v6;
}


void __fastcall SimpleChainableAction__ExecuteOnDetail(SimpleChainableAction_o *this, const MethodInfo *method)
{
  System_Action_T__o *sysChainAction; // x20
  System_Action_o *v4; // x21

  if ( (byte_4BE0D0E & 1) == 0 )
  {
    sub_1C21E38(&Method_ActionExtensions_Call_Action___);
    sub_1C21E38(&System_Action_TypeInfo);
    byte_4BE0D0E = 1;
  }
  sysChainAction = (System_Action_T__o *)this->fields.sysChainAction;
  v4 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, (intptr_t)this->klass[1]._1.image, 0LL);
  ActionExtensions__Call_object_(
    sysChainAction,
    (Il2CppObject *)v4,
    (const MethodInfo_2F02610 *)Method_ActionExtensions_Call_Action___);
}