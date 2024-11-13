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
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.sysChainAction, (int64_t)action, v5, v6, v7, v8, v9, v10);
}


SimpleChainableAction_array *__fastcall SimpleChainableAction__ConvertToChainableActionArray(
        System_Action_Action__array *sysActions,
        const MethodInfo *method)
{
  __int64 v2; // x2
  System_Action_Action__array *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  SimpleChainableAction_array *v11; // x20
  unsigned __int64 v12; // x24
  __int64 v13; // x26
  int64_t *m_Items; // x27
  PartyOrganizationUtility_o *v15; // x21
  int64_t v16; // x23
  int64_t v17; // x22
  const MethodInfo *v18; // x1
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  __int64 v32; // x0

  v3 = sysActions;
  if ( (byte_4B1A8AC & 1) == 0 )
  {
    sub_1BCA7E0(&SimpleChainableAction___TypeInfo, method, v2);
    sysActions = (System_Action_Action__array *)sub_1BCA7E0(&SimpleChainableAction_TypeInfo, v4, v5);
    byte_4B1A8AC = 1;
  }
  if ( !v3 )
LABEL_13:
    sub_1BCAA3C(sysActions, method);
  v6 = *(_QWORD *)&v3->max_length;
  v7 = sub_1BCA888(SimpleChainableAction___TypeInfo, (unsigned int)v6);
  v11 = (SimpleChainableAction_array *)v7;
  if ( (int)v6 >= 1 )
  {
    v12 = 0LL;
    v13 = (unsigned int)v6;
    m_Items = (int64_t *)v3->m_Items;
    v15 = (PartyOrganizationUtility_o *)(v7 + 32);
    do
    {
      if ( v12 >= v3->max_length )
        goto LABEL_12;
      v16 = *m_Items;
      v17 = sub_1BCAA2C(SimpleChainableAction_TypeInfo, v8, v9, v10);
      ChainableActionBase___ctor((ChainableActionBase_o *)v17, v18);
      *(_QWORD *)(v17 + 40) = v16;
      sub_1BCA784((PartyOrganizationUtility_o *)(v17 + 40), v16, v19, v20, v21, v22, v23, v24);
      if ( !v11 )
        goto LABEL_13;
      v7 = sub_1BCA91C(v17, v11->obj.klass->_1.element_class);
      if ( !v7 )
      {
        v32 = sub_1BCAA60(0LL);
        sub_1BCA908(v32, 0LL);
      }
      if ( v12 >= v11->max_length )
LABEL_12:
        sub_1BCAA44(v7, v8);
      v15->klass = (PartyOrganizationUtility_c *)v17;
      sub_1BCA784(v15, v17, v25, v26, v27, v28, v29, v30);
      ++v12;
      ++m_Items;
      v15 = (PartyOrganizationUtility_o *)((char *)v15 + 8);
    }
    while ( v13 != v12 );
  }
  return v11;
}


void __fastcall SimpleChainableAction__ExecuteOnDetail(SimpleChainableAction_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Action_T__o *sysChainAction; // x20
  System_Action_o *v8; // x21

  if ( (byte_4B1A8AB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ActionExtensions_Call_Action___, method, v2);
    sub_1BCA7E0(&System_Action_TypeInfo, v5, v6);
    byte_4B1A8AB = 1;
  }
  sysChainAction = (System_Action_T__o *)this->fields.sysChainAction;
  v8 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
  System_Action___ctor(v8, (Il2CppObject *)this, (intptr_t)this->klass[1]._1.image, 0LL);
  ActionExtensions__Call_object_(
    sysChainAction,
    (Il2CppObject *)v8,
    (const MethodInfo_2E65588 *)Method_ActionExtensions_Call_Action___);
}