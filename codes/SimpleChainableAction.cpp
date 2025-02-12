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
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.sysChainAction, (int64_t)action, v5, v6, v7, v8, v9, v10);
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
  int64_t *m_Items; // x27
  PartyOrganizationUtility_o *v11; // x21
  int64_t v12; // x23
  int64_t v13; // x22
  const MethodInfo *v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  __int64 v28; // x0

  v2 = sysActions;
  if ( (byte_4BB8E54 & 1) == 0 )
  {
    sub_1C13D24(&SimpleChainableAction___TypeInfo, method);
    sysActions = (System_Action_Action__array *)sub_1C13D24(&SimpleChainableAction_TypeInfo, v3);
    byte_4BB8E54 = 1;
  }
  if ( !v2 )
LABEL_13:
    sub_1C13F80(sysActions, method);
  v4 = *(_QWORD *)&v2->max_length;
  v5 = sub_1C13DCC(SimpleChainableAction___TypeInfo, (unsigned int)v4);
  v7 = (SimpleChainableAction_array *)v5;
  if ( (int)v4 >= 1 )
  {
    v8 = 0LL;
    v9 = (unsigned int)v4;
    m_Items = (int64_t *)v2->m_Items;
    v11 = (PartyOrganizationUtility_o *)(v5 + 32);
    do
    {
      if ( v8 >= v2->max_length )
        goto LABEL_12;
      v12 = *m_Items;
      v13 = sub_1C13F70(SimpleChainableAction_TypeInfo);
      ChainableActionBase___ctor((ChainableActionBase_o *)v13, v14);
      *(_QWORD *)(v13 + 40) = v12;
      sub_1C13CC8((PartyOrganizationUtility_o *)(v13 + 40), v12, v15, v16, v17, v18, v19, v20);
      if ( !v7 )
        goto LABEL_13;
      v5 = sub_1C13E60(v13, v7->obj.klass->_1.element_class);
      if ( !v5 )
      {
        v28 = sub_1C13FA4(0LL);
        sub_1C13E4C(v28, 0LL);
      }
      if ( v8 >= v7->max_length )
LABEL_12:
        sub_1C13F88(v5, v6);
      v11->klass = (PartyOrganizationUtility_c *)v13;
      sub_1C13CC8(v11, v13, v21, v22, v23, v24, v25, v26);
      ++v8;
      ++m_Items;
      v11 = (PartyOrganizationUtility_o *)((char *)v11 + 8);
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

  if ( (byte_4BB8E53 & 1) == 0 )
  {
    sub_1C13D24(&Method_ActionExtensions_Call_Action___, method);
    sub_1C13D24(&System_Action_TypeInfo, v3);
    byte_4BB8E53 = 1;
  }
  sysChainAction = (System_Action_T__o *)this->fields.sysChainAction;
  v5 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, (intptr_t)this->klass[1]._1.image, 0LL);
  ActionExtensions__Call_object_(
    sysChainAction,
    (Il2CppObject *)v5,
    (const MethodInfo_2EE1C78 *)Method_ActionExtensions_Call_Action___);
}